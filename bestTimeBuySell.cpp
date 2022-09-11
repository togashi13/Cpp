#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int min = prices[0];
    int max = prices[0];
    int maxP = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < min)
        {
            maxP = (maxP > max - min) ? maxP : max - min;
            min = prices[i];
            max = prices[i];
        }
        else if (prices[i] > max)
        {
            max = prices[i];
        }
        
    }
    
    maxP = (maxP > max - min) ? maxP : max - min;// didn't update the maxP between the last min and max
    return maxP;
        
}

int main()
{
    vector<int> prices{3,2,6,5,0,3};
    cout<<    maxProfit(prices)<<endl;
    return 0;

}

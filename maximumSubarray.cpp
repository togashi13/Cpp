#include<iostream>
#include<vector>

using namespace std;

int maxSubarray(vector<int>& nums)
{
    int max = 0;
    int currSum = 0;
    int n = nums.size();
    bool allNegativeFlag = true;
    int largestNegativeNum;
    if (nums[0] < 0) largestNegativeNum = nums[0];
    else allNegativeFlag = false;

    if (n == 0) return 0;
    for (int i = 0; i < n ; i++)
    {
        if (nums[i] < 0)
        {
            largestNegativeNum = ( largestNegativeNum > nums[i])? largestNegativeNum: nums[i];
            if (currSum + nums[i]<= 0)
                currSum = 0;
            else currSum += nums[i];
        }
        else 
        {
            allNegativeFlag = false;
            currSum += nums[i];
            max = (currSum < max)?max:currSum;
        }
    }
    return (allNegativeFlag)?largestNegativeNum:max;
}

int main()
{
    vector<int> sh{-1,-2,-31};
    cout << maxSubarray(sh) << endl;
    return 0;
}

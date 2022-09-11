#include<vector>
#include<iostream>
using namespace std;
vector<int> Esieve(int n)
{
    int count = 1;
    vector<bool> isPrime((n-1)/2 ,true);
    for (int i = 3; i <= n; i+=2)
    {
        if(isPrime[i/2-1])
        {
            count++;
            for(int j = i*i; j <= n; j+= 2*i)
            {
               isPrime[j/2-1] = false;

            }
        }
    }
    vector<int> res(count);
//    res[0] = 2;
//    for(int i = 0; i < (n-1)/2; i++)
//    {
//        if(isPrime[i])  res[i+1] = (2*i+3);
//    }
    return res;
}
int main() {
    vector<int> pp = Esieve(10000);
//    vector<int> pp(1000000,0);
//    cout << pp << endl;
    return 0;
}

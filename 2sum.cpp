#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    int n = nums.size();
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = make_pair(nums[i],i);
    }
    sort(arr.begin(),arr.end());

    int i = 0;
    int j = n-1;
        while(i < j)
        {
            int sum = arr[i].first + arr[j].first;
            if (sum == target)
            {
                return {arr[i].second,arr[j].second}; 
            }

            else if (sum < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    return {};
}



int main()
{
    vector<int> nums {3,2,4};
    vector<int> ans(2);
    ans = twoSum(nums,6);

    cout << ans[0] << ans[1] << endl;
    return 0;
}



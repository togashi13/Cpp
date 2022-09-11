#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template <typename S>
    ostream& operator<<(ostream& os, const vector<S>& vec)
    {
        for (auto element: vec)
        {
            os << element << " ";
        }
        return os;
    }
vector<vector<int>> threeSum(vector<int>& nums)
{
    
    int n = nums.size();
    if (n <= 2) return {};
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for ( int i = 0; i < n-2; i++)
    {
        if (i> 0 && nums[i] == nums[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k)
        {
            int suma = nums[i] + nums[j] + nums[k];
            if (suma == 0) 
            {
                ans.push_back({nums[i],nums[j],nums[k]});

                do{j++;}while(j<k && nums[j] == nums[j-1]);
                do{k--;}while(j<k && nums[k] == nums[k+1]);
            }
            else if (suma >0)
            {
                do{k--;}while(j<k && nums[k] == nums[k+1]);
            }
            else
                do{j++;}while(j<k && nums[j] == nums[j-1]);

        }
    }
    /*
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    */
    return ans;
}

int main()
{
    vector<int> nummy {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    ans = threeSum(nummy);
    cout << ans << endl;
    return 0;
}


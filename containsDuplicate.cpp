#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iostream>
using namespace std;
bool containsDuplicate(vector<int>& nums)
{
    unordered_map<int,int> checklist;
    for (int i = 0; i < nums.size(); i++)
    {
        if (checklist.count(nums[i]))
        {
            return true;
        }
        checklist[nums[i]] = 1;
    }
    return false;
}
int main()

{
    vector<int> u {1,2,3,4,5,6};
    vector<int> v {1,2,3,3,3,5};
    if (containsDuplicate(u))
    {
        cout << "u has dupliates" << endl;
    }
    if (containsDuplicate(v))
    {
        cout << "v has dupliates" << endl;
    }




    return 0;
}



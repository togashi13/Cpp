#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<string>
#include<set>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) 
{ 
    vector<vector<string>> ans;

    unordered_map<string, vector<string>> sorted_string_map;
    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(),s.end());
        sorted_string_map[s].push_back(strs[i]);
    }
    for (auto v: sorted_string_map)
    {
        ans.push_back(v.second);
    }
    return ans;

}


int main()
{


    return 0;
}

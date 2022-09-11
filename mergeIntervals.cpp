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
vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    int n = intervals.size();
    if (n == 0 ) return {};
    if (n == 1) return intervals;
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans{intervals[0]};
    for (int i =1; i < n; i++)
    {
        if (ans.back()[1] < intervals[i][0]) ans.push_back(intervals[i]);
        else
        {   
            ans.back()[1]=max(intervals[i][1],ans.back()[1]);
        }

    }
    return ans;
}


int main()
{
    vector<vector<int>> vecc{{2,3},{4,5},{6,7},{8,9},{1,10}};
    vector<vector<int>> sortedv;
    sortedv = merge(vecc);
    cout << sortedv << endl;

    return 0;
}




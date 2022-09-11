#include<iostream>
#include<vector>


using namespace std;

int findArea(int i, int j, vector<int>& m)
{
    int area = 0;
    area = (j-i)* min(m[i],m[j]);
    return area;
}

int maxArea(vector<int>& h)
{
    int n = h.size();
    int area = findArea(0,n-1,h);
    int l = 0;
    int r = n-1;
    int mx = max(h[l],h[r]);

    while(l<r)
    {
        if(h[l] < mx)
        {
            l++;


            if(h[l]>h[l-1])
            {
                area = max(area,findArea(l,r,h));
            }
            mx = max(mx,h[l]);
        }
        else
        {
            r--;
            if(h[r]>h[r+1])
            {
                area = max(area,findArea(l,r,h));
            }
            mx = max(mx,h[r]);
        }

    }
            

    return area;
}

int main()
{
    vector<int> vec{1,8,6,2,5,4,8,3,7};
    cout << maxArea(vec) << endl;
    return 0;
}


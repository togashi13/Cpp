#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size()) return false;
    unordered_map<char,int> dict1;
    for (int i = 0 ; i < s.size(); i++)
    {
            dict1[s[i]] ++;
            dict1[t[i]] --;
    }
    for ( auto & count: dict1)
    {
        if (count.second) return false;
    }
    return true;
}

int main()
{
    /*
    unordered_map<char,int> dict1 {{'s',12},{'a',2}};

    unordered_map<char,int> dict2 {{'a',1},{'s',12}};
    bool right = (dict1 == dict2);
    cout << right  << endl;
   */
    string s = "anagram";
    string t = "naagrmm";
    unordered_map<char, int> test;

    cout << ++test['s'] <<endl;
    return 0;

}

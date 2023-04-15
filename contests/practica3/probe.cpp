#include <bits/stdc++.h>

using namespace std;


int main()
{

    unordered_map<int, int> mp;

    for(int i = 0; i < 10; i++)

    {
        mp[i] = 1;
    }

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

}
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m, k, v;

    while(cin >> n >> m)
    {
        int num;
        map<int, vector<int>> pos;
        for(int i = 1; i <= n; i++)
        {
            cin >> num;
            pos[num].push_back(i);
        }

        while(m--)
        {
            cin >> k >> v;
            
            if(pos[v].size() >= k)
                cout << pos[v][k-1]<< endl;
            else
                cout << 0 << endl;
        }   

    }

}

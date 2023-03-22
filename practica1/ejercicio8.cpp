#include <bits/stdc++.h>

using namespace std;


void combinatory(int n, int k)
{

    std::string bitmask(k, 1);

    bitmask.resize(n, 0);

    do{
        for(int i = 1; i <= n; i++)
        {
            if (bitmask[i]) 
                cout <<  i << " ";
        }
        cout << endl;

    }while(std::prev_permutation(bitmask.begin(), bitmask.end()));
}

int main()
{
    
    int n = 20;

    for(int i = 1; i <= n; i++)
        combinatory(n , i);
    
}
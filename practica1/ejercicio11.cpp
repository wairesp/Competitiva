#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    if(n == 1 || n % 2 == 0)
    {
        cout << "no es primo";
        return 0;
    }

    for(long long i = 3 ; i < n/2; i+=2)
    {   
        if(!(n%i))
        {
            cout << "no es primo";
            return 0;
        }
    }

    cout << "es primo";
}
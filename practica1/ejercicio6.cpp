#include <bits/stdc++.h>

using namespace std;


bool binary_search(vector<int> l, int e)
{

    int larriba = l.size()-1;
    int labajo = 0;
    int lcentro;

    while (labajo <= larriba)
    {
        lcentro = (larriba + labajo)/2;
        if (l[lcentro] == e)
            return 1;
        else
            if (e < l[lcentro])
                larriba=lcentro-1;
            else
                labajo=lcentro+1;
    }
    return 0;
}


int main()
{
    
    int n = 1000000;
    
    vector<int> l;

    l.resize(n);

    for(int i = 0; i <= n; i++)
        l.push_back(i);

    int element;

    cin >> element;

    cout << element << " "<< (binary_search(l, element) ? "encontrado en l": "no encontrado en l") ;
}

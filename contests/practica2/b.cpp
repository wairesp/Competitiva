

// alex neyra
// brigham caceres
// eduardo segovia 


#include<bits/stdc++.h>

using namespace std;

bool most_young(int y1, int m1,int d1, int y2, int m2,int d2)
{

    if(y1 > y2)
    {
        return 1;
    }
    else if(y1 < y2)
        return 0;
    
     if(m1 > m2)
        return 1;
    else if(m1 < m2)
        return 0;

    if(d1 > d2)
        return 1;
    else if(d1 < d2)
        return 0;
    return 1;
}

int main()
{


    int n;

    cin >> n;


    string n_min, n_max;

    int d_min, m_min, y_min, d_max, m_max, y_max;

    string name;

    int day, month, year;

    cin >> name >> day >> month >> year;

    n_min = n_max = name;
    d_min = d_max = day;
    m_min = m_max = month;
    y_min = y_max = year;

    n--;

    while(n--)
    {
        cin >> name >> day >> month >> year;
        

        if(!most_young(y_min, m_min, d_min, year, month, day))
        {
            d_min  = day;
            m_min  = month;
            y_min  = year;
            n_min = name;
        }
        else if(most_young(y_max, m_max, d_max, year, month, day))
        {
            d_max = day;
            m_max = month;
            y_max = year; 
            n_max = name;
        }
    }

    cout << n_min << endl << n_max << endl;


}

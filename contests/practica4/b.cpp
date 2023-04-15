#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 0, m = 0;
    
    while(cin >> n >> m)
    {

        vector<vector<int>> matrix;

        for(int i = 0; i < n; i++)
        {

            vector<int> row(m, 0);

            int r;
            cin >> r;
            map<int, int> inds;

            if(!r){
                matrix.push_back(row);
                continue;
            } 

            int pos[r];

            for(int j = 0; j < r; j++)
            {    
                cin >>pos[j];
            }

            for(int j = 0; j < r; j++)
            {
                cin >> row[pos[j] - 1];
            }

            matrix.push_back(row);
        }

        cout << m << " " << n << endl;


        for(int j = 0; j < m; j++)
        {

            vector<int> col;

            for(int i = 0; i < n; i++)
            {

                if(matrix[i][j])
                {
                    col.push_back(i);
                }
            }

            cout << col.size();

            for(int i = 0; i < col.size(); i++)
            {
                cout << " " << col[i] + 1;
            }

            cout << endl;

            if(col.size())
            {
                for(int i = 0; i < col.size() - 1; i++)
                {
                    cout << matrix[col[i]][j] << " "; 
                }
                cout << matrix[col[col.size()-1]][j];
            }
            cout << endl;
        }
    }
    

}

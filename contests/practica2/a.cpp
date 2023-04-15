// alex neyra
// brigham caceres
// eduardo segovia 


#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n, r, c, k;
    while(cin >> n >> r >> c >> k && (n && r && c && k))
    {

        vector<vector<pair<int,int>>> matrix;

        for(int i = 0; i < r; i++)
        {
            vector<pair<int,int>> m(c);
            matrix.push_back(m);
            for(int j = 0; j < c; j++)
            {
                cin >> matrix[i][j].second; // last 
                matrix[i][j].first = matrix[i][j].second; // new
            }
        }

        for(int b = 0; b < k; b++)
        {
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                    //left
                    if( j > 0 && (matrix[i][j-1].second == matrix[i][j].second + 1 || (matrix[i][j-1].second == 0 && matrix[i][j].second == n - 1)))
                        matrix[i][j-1].first = matrix[i][j].second;
                    //top
                    if( i > 0 && (matrix[i-1][j].second == matrix[i][j].second + 1 || (matrix[i-1][j].second == 0 && matrix[i][j].second == n - 1)))
                        matrix[i-1][j].first = matrix[i][j].second;
                    // right
                    if( j < c-1 && (matrix[i][j+1].second == matrix[i][j].second + 1 || (matrix[i][j+1].second == 0 && matrix[i][j].second == n - 1)))  
                        matrix[i][j+1].first = matrix[i][j].second;
                    // bottom
                    if( i < r-1 && (matrix[i+1][j].second == matrix[i][j].second + 1 || (matrix[i+1][j].second == 0 && matrix[i][j].second == n - 1))) 
                        matrix[i+1][j].first = matrix[i][j].second;
                }
            }

            // copy
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                    matrix[i][j].second = matrix[i][j].first;
                }
            }   


        }
        //visualize 
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c-1; j++)
            {
                cout << matrix[i][j].second << " ";
            }
            cout << matrix[i][c-1].second;
            cout << endl;
        }
    }
}


// 3 4 4 3
// 0 1 2 0
// 1 0 2 0
// 0 1 2 0
// 0 1 2 2
// 0 0 0 0 
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {

        cout << endl;

        char mode;
        int tran, item;

        unordered_map<int, vector<pair<int, char>>> db_b;
        unordered_map<int, int> db_t;

        while(cin >> mode && mode != '#')
        {

            cin >> tran >> item;

            auto search_t = db_t.find(tran);

            // for(auto it = db_t.begin(); it != db_t.end(); it++)
            // {
            //     cout << it->first << " " << it->second << endl;
            // }


            if(search_t != db_t.end())
            {   
                if(!search_t->second)
                {
                    cout << "IGNORED\n";
                    continue;
                }

                // buscar posible bloque en la base de datos de bloqueos 
                
                auto element = db_b[item];
                
                char select = (mode == 'S'?'S':'X');
                
                auto it = element.begin();
                for(; it != element.end(); it++)
                {
                    if(it->second == select && it->first != tran)
                    {
                        cout << "DENIED\n";
                        db_t[tran] = 0;
                        break;
                    }    
                }
                // insert value
                if(it == element.end())
                {
                    db_t[tran] = 1;
                    pair<int, char> t = {tran, mode};
                    db_b[tran].push_back(t);
                    cout << "GRANTED\n";
                }
            }
            else
            {
                db_t[tran] = 1;
                pair<int, char> t = {tran, mode};
                db_b[tran].push_back(t);
                cout << "GRANTED\n";
            }
        }
    }
}

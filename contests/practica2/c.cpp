// alex neyra
// brigham caceres
// eduardo segovia 


#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, n_; 

    while(cin >> n && n)
    {

        n_ = n;

        vector<string> cards(n);
        
        int init = -1;

        while(n_--)
        {
            string s, card;
            cin >> s >> card;

            int i = card.size();

            while(i)
            {
                init = (init + 1) % n;

                if(!cards[init].size())
                    i--;
            }
            cards[init] = s;
        }
        for(int i = 0; i < cards.size(); ++i)
            cout << cards[i] << (i + 1 < cards.size()?" ":"\n");
    }


}

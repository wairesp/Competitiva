#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {

        string input;

        getline(cin, input);
        
        stack<char> pairs;
        bool bad = 0;
        for(auto it = input.begin(); it != input.end(); it++)
        {

            if(*it == '(')
                pairs.push(')');
            else if(*it == '[')
                pairs.push(']');
            else if(*it == ')' || *it == ']')
            {
                if(pairs.size() && pairs.top() == *it)
                    pairs.pop();
                else{   
                    bad = 1;
                    break;
                } 
            }
        }

        if(!bad && !pairs.size()){
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
}
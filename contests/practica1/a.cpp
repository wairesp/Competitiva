#include <bits/stdc++.h>

using namespace std;

int main()
{

    string input;
    
    while(getline(cin, input))
    {    
       
        stack<char> pairs; 

        int ind = 1;
        bool bad = 0;
        for(int i = 0; i != input.size(); i++, ind++)
        {
            // open pair
            if(input[i] == '(' )
            {
                if(i < input.size() && input[i + 1] == '*')
                {
                    pairs.push('*');
                    i++;
                }
                else
                    pairs.push(')');
            }       
            else if(input[i] == '{')
            {
                pairs.push('}');
            }
            else if(input[i] == '[')
            {
                pairs.push(']');
            }
            else if(input[i] == '<')
            {
                pairs.push('>');
            }
            // close pair
            else if((input[i] == '*' && i < input.size() && input[i+1]  == ')') 
            || (input[i] == ')') || (input[i] == ']') || (input[i] == '}') || (input[i] == '>'))
            {
                if(!pairs.size() || (pairs.size() && input[i] != pairs.top()))
                {
                    bad = 1;
                    break;
                }
                else
                {
                    pairs.pop();
                    if(input[i] == '*')
                        i++;
                }
            }
        }

        if(bad || pairs.size())
            cout << "NO " << ind<< endl;
        else
            cout << "YES\n";   
    }    
}
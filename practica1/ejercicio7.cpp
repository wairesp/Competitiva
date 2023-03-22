#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



void permute(string& input, int inicio, int fin)
{

    if (inicio == fin)
        cout << endl << input << endl;
    else {

        for (int i = inicio; i <= fin; i++) {

            swap(input[inicio], input[i]);

            permute(input, inicio + 1, fin);
            
            swap(input[inicio], input[i]);
        }
    }
}

int main()
{
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    //cin >> n;
    n = 4;
    string mstr= alphabet.substr(0,n);

    permute(mstr, 0, mstr.size() - 1);
    return 0;
}
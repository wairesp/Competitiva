//Alex Neyra
//Eduardo Segovia
//Brigham Caceres

#include <fstream>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n, m, k, v;
	while (cin >> n >> m)
	{
	
	map<int, vector<int>> ocurrencias;
	for (int i = 0; i < n; i++)
	{
		int aux;
		cin >> aux;

		auto finder = ocurrencias.find( aux);
		if (finder == ocurrencias.end()) {
			ocurrencias.insert(pair<int, vector<int>>(aux, vector<int>({i+1})));
		}
		else {
			finder->second.push_back(i + 1);
		}
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> k >> v;
		//for (auto it = ocurrencias[v].begin(); it != ocurrencias[v].end(); ++it)
		//{
		//	
		//}
		//cout << v <<" size: " << ocurrencias[v].size() << endl;
		if (k > ocurrencias[v].size())
			cout << 0 << endl;
		else
			cout << ocurrencias[v][k - 1]<< endl;
	}

	}
}
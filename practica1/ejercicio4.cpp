#include <iostream>
#include <random>
#include <set>
#include <vector>
using namespace std;

int generate_random_int(int down = 0, int up = 100)
{
	random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<int> distribution(down, up);
	return distribution(generator);
}


int main()
{
	set<int> answer;
	vector<int> data;
	int n; cout << "n: "; cin >> n;
	for (int i = 0, r = 0; i < n; ++i)
	{
		r = generate_random_int();
		data.push_back(r);
		answer.insert(r);
	}

	for (int i = 0, s = data.size(); i < s; ++i)
		cout << data[i] << " ";
	cout << endl;
	for (auto& i : answer)
		cout << i << " ";
}
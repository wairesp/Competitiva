#include <iostream>
#include <string>
using namespace std;

int main()
{
	// letras 97-122
	// numeros 48-57

	string line; cout << "line: "; getline(cin, line);

	for (int i = 0, s = line.size(); i < s; ++i)
	{
		if (int(line[i]) >= 97 and int(line[i]) <= 122 and i < s - 2 and int(line[i + 1]) >= 48 and int(line[i + 1]) <= 57 and int(line[i + 2]) >= 48 and int(line[i + 2]) <= 57)
		{
			line[i] = '*';
			line[i + 1] = '*';
			line[i + 2] = '*';
		}
		else
		{
			i = line.find(" ", i + 1);
			if (i == std::string::npos)
				break;
		}
	}
	cout << line;
}
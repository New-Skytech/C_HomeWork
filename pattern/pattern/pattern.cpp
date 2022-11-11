#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string pattern[4][4];
	string path = "INPUT.txt";
	string str;

	bool flag = true;

	ifstream fin;
	fin.open(path);
	for (int x_temp = 0; x_temp < 4; x_temp++) {
		for (int y_temp = 0; y_temp < 4; y_temp++) {
			pattern[x_temp][y_temp] = fin.get();
			cout << pattern[x_temp][y_temp];
		}
		str = fin.get();
		cout << endl;
	}

	for (int x_temp = 0; x_temp < 3; x_temp++) {
		for (int y_temp = 0; y_temp < 3; y_temp++) {
			if (pattern[x_temp][y_temp] == pattern[x_temp+1][y_temp] && pattern[x_temp+1][y_temp] == pattern[x_temp][y_temp+1] && pattern[x_temp][y_temp+1] == pattern[x_temp+1][y_temp+1])
			{
				flag = false;
			}
		}
	}
	if (flag == true)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}

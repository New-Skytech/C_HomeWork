#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string original[100][100];
	for (int x_temp = 0; x_temp < 100; x_temp++) {
		for (int y_temp = 0; y_temp < 100; y_temp++) {
			original[x_temp][y_temp] = 'F';

		}
	}
	string neg[100][100];
	for (int x_temp = 0; x_temp < 100; x_temp++) {
		for (int y_temp = 0; y_temp < 100; y_temp++) {
			neg[x_temp][y_temp] = 'F';

		}
	}

	int x, y;
	int diference = 0;
	string path = "INPUT.txt";
	string str;


	ifstream fin;
	fin.open(path);
	fin >> x;
	fin >> y;
	str = fin.get();

	for (int x_temp = 0; x_temp < x; x_temp++){
		for (int y_temp = 0; y_temp < y; y_temp++) {
			original[x_temp][y_temp] = fin.get();
		}
		str = fin.get();
	}
	str = fin.get();
	for (int x_temp = 0; x_temp < x; x_temp++) {
		for (int y_temp = 0; y_temp < y; y_temp++) {
			neg[x_temp][y_temp] = fin.get();
		}
		str = fin.get();
	}

	for (int x_temp = 0; x_temp < x; x_temp++) {
		for (int y_temp = 0; y_temp < y; y_temp++) {
			if (original[x_temp][y_temp] == neg[x_temp][y_temp])
			{
				diference += 1;
			}
		}
	}
	cout << diference;
}



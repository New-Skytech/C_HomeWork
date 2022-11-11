#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x, x1, x2, y1, y2, y, n;
	int space = 0;
	
	string path = "INPUT.txt";
	string str;
	
	int paint[100][100];
	for (int x_temp = 0; x_temp < 100; x_temp++) {
		for (int y_temp = 0; y_temp < 100; y_temp++) {
			paint[x_temp][y_temp] = 1;

		}
	}

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "file openning error" << endl;
	}
	else
	{
		cout << "file opened sucsessefuly" << endl;
		fin >> x;
		fin >> y;
		fin >> n;
	}
	

	for (int i = 0; i < n; i++)
	{
		fin >> x1;
		fin >> y1;
		fin >> x2;
		fin >> y2;
		for (int x_temp = x1; x_temp < x2; x_temp++){
			for (int y_temp = y1; y_temp < y2; y_temp++){
				paint[x_temp][y_temp] = 2;
			}
		}
	}


	for (int x_temp = 0; x_temp < x; x_temp++) {
		for (int y_temp = 0; y_temp < y; y_temp++) {
			if (paint[x_temp][y_temp] == 1) {
				space += 1;
			}
		}
	}
	cout << space;

	fin.close();
}
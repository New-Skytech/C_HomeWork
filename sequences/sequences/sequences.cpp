#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char x; int ch = 0;
    string path = "INPUT.txt";
    ifstream fin;
    fin.open(path);

    while (fin >> x)
        if (x == '1') {
            cout << (char)(97 + ch);
            ch = 0;
        }
        else
            ch++;
}
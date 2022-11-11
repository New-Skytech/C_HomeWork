#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string t_digit = "0123456789";
    string t_char = "ABCEHKMOPTXY";
    string path = "INPUT.txt";
    string str;
    int n;
    
    ifstream fin;
    fin.open(path);
    fin >> n;


    for (int i = 0; i < n; ++i) {
        fin >> str;
        if (str.size() != 6) {
            cout << "No" << endl;
            continue;
        }
        int pos = t_char.find(str[0]);
        if (pos == -1) {
            cout << "No" << endl;
            continue;
        }
        pos = t_digit.find(str[1]);
        if (pos == -1) {
            cout << "No" << endl;
            continue;
        }
        pos = t_digit.find(str[2]);
        if (pos == -1) {
            cout << "No" << endl;
            continue;
        }
        pos = t_digit.find(str[3]);
        if (pos == -1) {
            cout << "No" << endl;
            continue;
        }
        pos = t_char.find(str[4]);
        if (pos == -1) {
            cout << "No" << endl;
            continue;
        }
        pos = t_char.find(str[5]);
        if (pos == -1) {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}
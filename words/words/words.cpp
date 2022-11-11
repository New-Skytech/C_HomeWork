#include <iostream>
#include <fstream>

using namespace std;

int Fib(int i)
{
    int value = 0;
    if (i < 1) return 0;
    if (i == 1) return 1;
    return Fib(i - 1) + Fib(i - 2);
}


int main()
{
    int num, cnt = 0;
    char ch;
    string str[300];
    string path = "INPUT.txt";
    ifstream fin;
    fin.open(path);

    while(fin.get(ch))
    {
        str[cnt] = ch;
        cnt++;
    }

    for(int i = 2; i < cnt; i++)
    {
        num = Fib(i);
        if (num > cnt)
        {
            break;
        }
        cout << str[num-1];
    }
}

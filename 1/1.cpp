#include <iostream>

using namespace std;

int main()
{
    int size, max = 0;
    cout << "size = ";
    cin >> size;
    int* digits = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "digits[" << i << "] = ";
        cin >> digits[i];
    }

    for (int i = 1; i < size; i++)
        if (digits[i] > digits[max])
            max = i;

    cout << "max value " << digits[max] << endl;
}


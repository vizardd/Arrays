#include<iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "");
    int count = 0;
    int digit;
    cout << "Введите десятичное число" << endl;
    cin >> digit;
    char binary[50];
    do
    {
        if (digit % 2)
        {
            binary[count++] = '1';
        }
        else
        {
            binary[count++] = '0';
        }
        digit = digit / 2;
    } while (digit);
    binary[count++] = '\0';
    for (int i = strlen(binary); i > 0; i--)
    {
        cout << binary[i - 1];
    }
    cout << endl;
}
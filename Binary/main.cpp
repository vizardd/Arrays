#include<iostream>
using namespace std;
//#define BINARY
void main() {
    setlocale(LC_ALL, "");
    int decimal;
    cout << "Введите десятичное число: "; cin >> decimal;
    const int n = 32;
    bool bin[n] = {};
    int i = 0;
 #ifdef BINARY
        while (decimal > 0) {
            bin[i] = decimal % 2;
            i++;
            decimal /= 2;

            for (; decimal; bin[i++] = decimal % 2, decimal /= 2);
            for (--i; i >= 0; i--)cout << bin[i];
            cout << endl;
        }
#endif // BINARY
        string binary;
        while (decimal > 0) {
            int bit = decimal & 1;
            binary = (bit == 0 ? '0' : '1') + binary;
            decimal >>= 1;
        }
        cout << binary << endl;
}
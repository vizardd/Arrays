#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
    int arr[] = { 1, 2, 3, 4, 5 };
    const int size = sizeof(arr) / sizeof(*arr);
    arr[size - 1] = arr[size - 2];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
       cout << arr[i] << " ";
    }
    cout << arr[size] << endl;
}
#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	cout << "Heloo Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE];
	cout << int() << endl;
cout << "Введите значение : \n";
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}cout << endl;
	for (int i = SIZE - 1; i >= 0; i--) {
		cout << arr[i] << "\t";
	}cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++){
		sum += arr[i];
	}cout << "Средне арефметическое = " << (double)sum / SIZE << endl;
	cout << "сума масива = " << sum << endl;
	int max, min;
	min = max =arr[0];
	for (int i = 0; i < SIZE; i++)
	{if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];}
	cout << "Максимальный елемент = " << max << endl;
	cout << "Минемальный елемент = " << min << endl;
}
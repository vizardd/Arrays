#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	cout << "Heloo Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE];
	cout << int() << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Введите значение : \n";
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";

	}cout << endl;
	for (int i = SIZE - 1; i >= 0; i--) {
		cout << arr[i] << "\t";
	}cout << endl;
	int aref = 0;
	for (int i = 0; i < SIZE; i++)
	{
		aref += arr[i];
	}cout << "Средне арефметическое = " << aref / SIZE << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}cout << "сума масива = " << sum << endl;
	int maxElement = arr[0];
	int minElement = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > maxElement) {
			maxElement = arr[i];
		}
		if (arr[i] < minElement) {
			minElement = arr[i];
		}
	}
	cout << "Максимальный елемент = " << maxElement << endl;
	cout << "Минемальный елемент = " << minElement << endl;

}
#include<iostream>
#include<time.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int  max, i;
	cout << "¬едите максимально возможное число : "; cin >> max;
	for (i = 0; i < n; i++)arr[i] = 1 + rand() % max;
	for (i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
	int temp;
	for (i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		cout << "[" << i << "] = " <<arr[i] << "\n";
	}
}
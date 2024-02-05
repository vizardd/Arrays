#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	cout << "Heloo Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] ;
	cout << int() << endl;
	
	for (int i = 0; i < SIZE; i++) {
		cout << "¬ведите значение : \n";
		cin >> arr[i];
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
		
	}
	cout << endl;
}
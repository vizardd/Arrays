#include<iostream>
#include<Windows.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
	int number_of_shifts;
	cout << "�� ������� ��������� �������� ����� :"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++) {
		int buffer = arr[0];
		//system("CLS");
			for (int i = 0; i < n; i++) {
			arr[i] = arr[i + 1];
		}	arr[n - 1] = buffer;
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
	//Sleep(1000);
	}
}
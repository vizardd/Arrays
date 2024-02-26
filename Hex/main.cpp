#include<iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "");
	const int n = 32;
	int arr[n];
	int chislo, i = 0;
	div_t s;
	cout << "Ведите число : "; cin >> chislo;
	s = div(chislo, 16);
	arr[i] = s.rem;
	while (s.quot!=0)
	{
		i++;
		s =div (s.quot, 16);
		arr[i] = s.rem;
	}
	for (i; i >= 0; i--) {
		if (arr[i] < 10)cout << arr[i];
		if (arr[i] == 10)
			cout << "A";
		if (arr[i] == 11)
			cout << "B";
		if (arr[i] == 12)
			cout << "C";
		if (arr[i] == 13)
			cout << "D";
		if (arr[i] == 14)
			cout << "E";
		if (arr[i] == 15)
			cout << "F";
	}
}
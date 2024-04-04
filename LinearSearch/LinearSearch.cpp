#include <iostream>
using namespace std;

int arr[20]; //Array yang akan dicari
int n; //Nomor elemen pada array
int i; //Indeks elemen pada array

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}
}
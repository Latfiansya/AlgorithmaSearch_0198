#include <iostream>
using namespace std;

int arr[20]; //Array yang akan dicari
int n; //Nomor elemen pada array
int i; //Indeks elemen pada array

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//Menerima elemen pada array
	cout << "\n-----------------------";
	cout << "\n Enter array elements \n";
	cout << "-----------------------\n\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch; //Untuk input ..while
	int ctr; //Jumlah perbandingan
	int item; //Elemen yang dicari

	do
	{
		//Menerima angka yang dicari
		cout << "\nEnter element you want to search : "; //Step 1
		cin >> item;

		ctr = 0;
		i = 0; //Step 2
		while (i < n) //Step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << endl << item << " Found at position " << (i + 1) << endl; //Step 6
				break;
			}
			i++; //Step 4
		}
		
		if (i == n) //Step 5
			cout << endl << item << " Not found in the array\n";
		cout << "\nNumber of comparisons : " << ctr << endl;

		cout << "\nContinue search (y/n) : ";
		cin >> ch;
		system("cls");
	} while ((ch == 'y') || (ch == 'Y'));
}

void display()
{
	cout << "Array elements are : ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	input();
	
}
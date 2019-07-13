// A c++ program that accepts n number of elements
// and sorts it using Bubble Sort Technique
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	int j;
	int n;				// VARIABLE DECLARATIONS
	int temp;
	int arr[100];

	cout << "	BUBBLE SORTING\n";
	cout << "------------------------------\n";
	cout << "Enter the array size: "; cin >> n;

	for (i=0 ; i<n; i++)
	{												
		cin >> arr[i];							// THIS PART ACCEPTS N NUMBER
		cout << arr[i] << ", ";				// OF ELEMENTS TO BE SORTED 
	}

	cout << endl << endl;

	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n-1-i; j++)
		{
			if (arr[j] > arr[j+1])				// THIS PART IS THE ALGORITHM 
			{										// FOR BUBBLE SORTING
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}

	cout << "Sorted data: ";
	for (i=0 ; i<n ; i++)						// THIS PART PRINTS THE SORTED ITEMS
	{
		cout << arr[i] << ", ";
	}


	getch();
	return 0;
}
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

float addition (int a, int b)		// ADDITION FUNCTION TO CALL
{
	float result; 
	result = a + b;
		return result;
}

float subtraction (int a, int b)			// SUBTRACTION FUNCTION TO CALL
{
	float result; 
	result = a - b;
		return result;
}

float multiplication (int a, int b)			// MULTIPLICATION FUNCTION TO CALL
{
	float result; 
	result = a * b;
		return result;
}

float division (int a, int b)			// DIVISION FUNCTION TO CALL
{
	float result; 
	result = a / b;
		return result;
}

float modulus (int a, int b)			// MODULUS FUNCTION TO CALL
{
	float sum; 
	sum = a % b;
		return sum;
}

int main()
{
	int choice;
	float num1;			// VARIABLE DECLARATIONS
	float num2;
	float z;
	char response;

	do 
	{
	cout << "SIMPLE CALCULATOR USING FUNCTIONS\n";
	cout << "---------------------------------\n";
	cout << "MENU: \n";
	cout << "	1. Add\n";
	cout << "	2. Subtract\n";
	cout << "	3. Multiply\n";
	cout << "	4. Divide\n";
	cout << "	5. Modulus\n";
	cout << "---------------------------------\n";
	cout << "Enter your choice: "; cin >> choice;

	switch (choice)
	{
	case 1:		// Addition
				cout << "Enter first number : "; cin >> num1;
				cout << "Enter second number : "; cin >> num2;
				z = addition (num1, num2);
				cout << "Result: " << z << endl;
				break;

	case 2:		// Subtraction
				cout << "Enter first number : "; cin >> num1;
				cout << "Enter second number : "; cin >> num2;
				z = subtraction (num1, num2);
				cout << "Result: " << z << endl;
				break;

	case 3:		// Multiplication
				cout << "Enter first number : "; cin >> num1;
				cout << "Enter second number : "; cin >> num2;
				z = multiplication (num1, num2);
				cout << "Result: " << z << endl;
				break;

	case 4:		// Division
				cout << "Enter first number : "; cin >> num1;
				cout << "Enter second number : "; cin >> num2;
				z = division (num1, num2);
				cout << "Result: " << z << endl;
				break;

	case 5:		// Modulus
				cout << "Enter first number : "; cin >> num1;
				cout << "Enter second number : "; cin >> num2;
				z = modulus (num1, num2);
				cout << "Result: " << z << endl;
				break;

	 default : 
				cout << "INVALID INPUT!! \n"; 

		getch();
		return 0;
	}

	cout << "---------------------------------\n";
	cout << "Continue? "; cin >> response;

	} 
	while (response = 'y' || response == 'Y');
	cout << "Thank you!";

	getch();
	return 0;
}
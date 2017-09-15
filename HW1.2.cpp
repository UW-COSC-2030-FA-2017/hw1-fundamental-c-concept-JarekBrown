//Jarek Brown
//September 15 2017
//HW1.2
#include <iostream>

using namespace std;
int add(int, int);

int main()
{
	int num1,num2,sum;
	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	sum = add(num1,num2);
	cout << "Sum: " << sum << endl;
}

int add(int num1, int num2)
{
	return num1 + num2;
}
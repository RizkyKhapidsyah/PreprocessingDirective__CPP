#include <iostream>
#include <conio.h>

//Macro
#define PI 3.14159265359

using namespace std;

double pi = 3.14159265359;

int main()
{
	cout << "Nilai pi (double)  = " << pi << endl;
	cout << "Address            = " << &pi << endl;
	cout << "Nilai PI (define)  = " << PI << endl;
	
	_getch();
	return 0;
}
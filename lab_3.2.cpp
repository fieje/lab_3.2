// Lab_03_2.cpp
// < Чухрай Олександр Васильович >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 13
#include <iostream>
using namespace std;
int main()
{
	double x; 
	double a; 
	double b; 
	double c; 
	double F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

		cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (x - 1 < 0 && b - x != 0)
		F = a * x * x - c;
	if (x - 1 > 0 && b + x == 0)
		F = (x - a) / x;
	if (!(x-1 < 0 && b-x != 0) && !(x-1 > 0 && b+x == 0))
		F = x / c;
	cout << endl;
	cout << "1) F = " << F << endl;
	// спосіб 2: розгалуження в повній формі
	if (x - 1 < 0 && b - x != 0)
		F = a * x * x - c;
	else
		if (x - 1 > 0 && b + x == 0)
			F = (x - a) / x;
		else
			F = x / c ;
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
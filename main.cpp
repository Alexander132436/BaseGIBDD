#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	Car* a = nullptr;
	a->Incert(a, 1);
	a->Incert(a, 2);
	a->Incert(a, 3);
	a->Incert(a, 4);
	a->Incert(a, 5);
	a->printBaseCar(a);
	cout << endl;
	a->PoiskDis(a, 3, 5);
}

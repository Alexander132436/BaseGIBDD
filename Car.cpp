#include "Car.h"

void Car::Incert(Car*& base, int number)
{
	if (!base)
	{
		base = new Car;
		base->number = number;
		base->addViol();
		base->left = nullptr;
		base->rigth = nullptr;
	}
	else
	{
		if (number < base->number)
		{
			Incert(base->left, number);
		}
		else if (number > base->number)
		{
			Incert(base->rigth, number);
		}
		else
		{
			base->addViol();
		}
	}
}

void Car::addViol()
{
	string str;
	cout << "¬ведите нарушение: ";
	cin >> str;
	if (viol.empty())
	{
		viol.push_back(str);
	}
	for (int i = 0;i < viol.size();i++)
	{
		if (find(viol.begin(), viol.end(), str) == viol.end())
		{
			viol.push_back(str);
		}
	}
}

void Car::printBaseCar(Car* base)
{
	if (!base)
	{
		return;
	}
	printBaseCar(base->left);
	cout << base->number << endl;
	for (int i = 0;i < base->viol.size();i++)
	{
		cout << i + 1 << "." << base->viol[i] << endl;
	}
	printBaseCar(base->rigth);
}

Car* Car::Poisk(Car* base, int number)
{
	while (base != nullptr && number != base->number)
	{
		if (number < base->number)
		{
			base = base->left;
		}
		else
		{
			base = base->rigth;
		}
	}
	return base;
}

void Car::PoiskDis(Car* base, int min, int max)
{
	if (base == nullptr)
	{
		return;
	}
	if (base->number > min)
	{
		PoiskDis(base->left, min, max);
	}
	if (base->number >= min && base->number <= max)
	{
		cout << base->number << endl;
		for (int i = 0;i < base->viol.size();i++)
		{
			cout << i + 1 << "." << base->viol[i] << endl;
		}
	}
	if (base->number < max)
	{
		PoiskDis(base->rigth, min, max);
	}
}



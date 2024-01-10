#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Car
{
public:
	int number = 0;
	vector <string> viol;
	Car* left{}, * rigth{};
	//Метод вставки элемента в базу
	void Incert(Car*& base, int number);

	//Метод добавления нарушения 
	void addViol();

	//Распечатка всей базы
	void printBaseCar(Car* base);

	//Поиск машины в базе
	Car* Poisk(Car* base, int number);
	
	//Поиск диапазона машин в базе
	void PoiskDis(Car* base, int min, int max);

	//Метод переопределения вывода для класса Car
	friend ostream& operator<< (ostream& output, const Car& point)
	{
		output << point.number << endl;
		for (int i = 0;i < point.viol.size();i++)
		{
			output << point.viol[i] << endl;
		}
		return output;
	}
};


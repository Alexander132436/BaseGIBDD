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
	//����� ������� �������� � ����
	void Incert(Car*& base, int number);

	//����� ���������� ��������� 
	void addViol();

	//���������� ���� ����
	void printBaseCar(Car* base);

	//����� ������ � ����
	Car* Poisk(Car* base, int number);
	
	//����� ��������� ����� � ����
	void PoiskDis(Car* base, int min, int max);

	//����� ��������������� ������ ��� ������ Car
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


#pragma once
#include<string>


struct drivers
{

	short age; //������� ��������
	double grade; //������ �������� 
	std::string name; //��� ��������
	short exp; //���� ��������

};
//������� �� ������ ����� � ��������
drivers info(std::string _name , short _age);
//������� �� ���������������� ����� � �����
drivers star(drivers _drivers);
//������� ��������� ���������
void comparsion(drivers* _drivers, size_t length);
//������� ������
void print(drivers* _drivers, size_t length);



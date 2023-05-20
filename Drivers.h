#pragma once
#include<string>


struct drivers
{

	short age; //возраст водителя
	double grade; //оценка водителя 
	std::string name; //имя водителя
	short exp; //опыт водителя

};
//функция по записи имени и возраста
drivers info(std::string _name , short _age);
//функция по рандомизированию опыта и стажа
drivers star(drivers _drivers);
//функция сравнения водителей
void comparsion(drivers* _drivers, size_t length);
//функция вывода
void print(drivers* _drivers, size_t length);



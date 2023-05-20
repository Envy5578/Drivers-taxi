#include "Drivers.h"
#include <string>
#include <random>
#include <time.h>
#include <iostream>


drivers info(std::string _name, short _age) {
	drivers temp;
	temp.age = _age;
	temp.name = _name;
	return temp;
};

drivers star(drivers _drivers) {
	_drivers.grade = (rand() % 50);
	_drivers.grade /= 10;
	while (_drivers.exp) {
		_drivers.exp = rand() % 100;
		if (_drivers.exp < _drivers.age - 18)
			break;
	};
	return _drivers;
};

void print(drivers* _drivers, size_t length) {
	for (size_t i = 0; i < length; i++)
	{
		std::cout << _drivers[i].name << " - " << _drivers[i].age << "\n" << _drivers[i].grade << " - оценка водителя "
			<< _drivers[i].exp << " - опыт вождения" << std::endl;
	}
};

void comparsion(drivers* _drivers, size_t length) {
	std::string temp_grade=_drivers[0].name;
	std::string temp_exp = _drivers[0].name;
	for (size_t i = 0, j = 1; j < length; i++, j++)
	{
		_drivers[i].grade > _drivers[j].grade ? temp_grade = _drivers[i].name : temp_grade = _drivers[j].name;
		_drivers[i].exp > _drivers[j].exp ? temp_exp = _drivers[i].name : temp_exp = _drivers[j].name;
	}
	std::cout << temp_grade << " - наибольшая оценка\n";
	std::cout << temp_exp << " - наибольший стаж\n";
};
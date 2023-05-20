//Минимум для c++
#include <iostream> // стандартная библиотека с функциями
#include <iomanip> /*Манипуляция вводами данных, ввод консоли*/
#include <string> // объявлять переменную строкой
#include <stdlib.h> //содержаться классы (тренеры, векторы)
#include <cmath> //Возведение в степень
#include <windows.h> //доступ к API
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <vector>
#include <sstream>
#include "Drivers.h"
using std::cout; // рабочее пространство, чтобы не писать каждый раз std



int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const size_t length = 2; //размер массива
	drivers drivers[length]; //главная переменная, включающая имя, опыт, возраст, оценку
	short age[length]; //массив для записи возраста водителя
	std::string name[length]; //массив для записи имени водителя
	for (size_t i = 0; i < length; i++)
	{
		std::cout << "Введите имя: " << i + 1 << " водителя - ", std::cin >> name[i];
		std::cout << "Введите возраст - " << i + 1 << " водителя - ", std::cin >> age[i];
		drivers[i] = info(name[i], age[i]); //запись имени и возраста
		drivers[i] = star(drivers[i]); //создания рандомного опыта и стажа
	}
	print(drivers, length);
	comparsion(drivers, length);
	return 0;
}
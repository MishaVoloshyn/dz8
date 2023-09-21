/*
	реилизовать следующие перегрузки:

	// DynamicArr rez = a+10 ; // увеличиваем кол-во элементов на 10
	// rez = a-2; // удаляем последние 2 элемента, если размер >2
	// rez = a*2;// значение каждого элемента массива умножаем на 2, возвращаем новый массив!

	// rez = a-b; // разность массивов
	// rez=a+b;  // конкатенация массивов
	// ++rez;  // увеличиваем количество элементов на 1(значение 0).
	//--rez;  // уменьшается количество элементов на 1, удаляем последний элемент
	*/

#include "DinArr.h"
#include <iostream>
using namespace std;


int main() {

	DinArr x(7);
	x.Input();
	x.PrintConsole();
	DinArr y = x;
	y.PrintConsole();
	cout << endl;

	DinArr result = x + 10;
	result.PrintConsole();
	x.PrintConsole();
	cout << endl;

	DinArr result1 = x - 2;
	result1.PrintConsole();
	cout << endl;

	DinArr result2 = x * 2;
	result2.PrintConsole();
	cout << endl;

	DinArr result3 = x -result2;
	result3.PrintConsole();
	cout << endl;

	DinArr result4 = x + y;
	result4.PrintConsole();
	cout << endl;

	DinArr result5 = ++x;
	result5.PrintConsole();
	cout << endl;

	DinArr result6 = --x;
	result6.PrintConsole();

	cout << endl;




	



}
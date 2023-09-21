/*
	����������� ��������� ����������:

	// DynamicArr rez = a+10 ; // ����������� ���-�� ��������� �� 10
	// rez = a-2; // ������� ��������� 2 ��������, ���� ������ >2
	// rez = a*2;// �������� ������� �������� ������� �������� �� 2, ���������� ����� ������!

	// rez = a-b; // �������� ��������
	// rez=a+b;  // ������������ ��������
	// ++rez;  // ����������� ���������� ��������� �� 1(�������� 0).
	//--rez;  // ����������� ���������� ��������� �� 1, ������� ��������� �������
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
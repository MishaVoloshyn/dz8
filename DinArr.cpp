#include "DinArr.h"
#include <iostream>
using namespace std;

DinArr::DinArr():pointer(nullptr),siz(0)
{
}

DinArr::DinArr(int Size)
{
	siz = Size;
	pointer = new int[Size];
}

DinArr::DinArr(const DinArr& x)
{
	siz = x.siz;
	pointer = new int[siz];
	for (int i = 0; i < siz; i++)
	{
		pointer[i] = x.pointer[i];
	}
}

DinArr::~DinArr()
{
	delete[]pointer;
}

void DinArr::Input()
{
	for (int i = 0; i < siz; i++)
	{
		pointer[i] = rand() % 20;
	}
}

void DinArr::PrintConsole()
{
	for (int i = 0; i < siz; i++)
	{
		cout << pointer[i]<<" ";
	}
}

DinArr DinArr::operator+(int x)
{
	DinArr result;

	result.siz = this->siz + x;
	result.pointer = new int[result.siz];

	for (int i = 0; i < result.siz; i++)
	{
		if (i >= result.siz - x) {
			result.pointer[i] = 0;
		}
		else {
			result.pointer[i] = this->pointer[i];
		}
	}

	return result;
}

DinArr DinArr::operator-(int x)
{
	if (this->siz>2)
	{
		DinArr rezult;
		rezult.siz = this->siz - x;
		rezult.pointer = new int[rezult.siz];

		for (int i = 0; i < rezult.siz; i++)
		{
			rezult.pointer[i] = this->pointer[i];
		}
		return rezult;
	}
	else
	{
		cout << "error";
	}
	
}

DinArr DinArr::operator*(int x)
{
	DinArr rezult;
	rezult.siz = this->siz;
	rezult.pointer = new int[rezult.siz];
	for (int i = 0; i < rezult.siz; i++) {
		rezult.pointer[i] = this->pointer[i] * x;
	}
	return rezult;
}

DinArr DinArr::operator-(DinArr result2)
{
	DinArr rezult;
	if (this->siz < result2.siz) //a.size < rez2.size
	{
		rezult.siz = result2.siz - this->siz;
		rezult.pointer = new int[rezult.siz];
		for (int i = 0, j = 0; i < result2.siz; i++)
		{
			if (i >= this->siz)
			{
				rezult.pointer[j] = result2.pointer[i];
				j++;
			}
		}
		return rezult;
	}
	else 
	{
		rezult.siz = this->siz - result2.siz;
		rezult.pointer = new int[rezult.siz];
		for (int i = 0, j = 0; i < this->siz; i++)
		{
			if (i >= result2.siz)
			{
				rezult.pointer[j] = this->pointer[i];
				j++;
			}
		}
		return rezult;

	}
}

DinArr DinArr::operator+(DinArr y)
{
	DinArr rezult;
	rezult.siz = this->siz + y.siz;
	rezult.pointer = new int[rezult.siz];
	for (int i = 0, j = 0; i < rezult.siz; i++) {
		if (i >= this->siz) {
			rezult.pointer[i] = y.pointer[j];
			j++;
		}
		else {
			rezult.pointer[i] = this->pointer[i];
		}
	}
	return rezult;
}

DinArr DinArr::operator++()
{
	DinArr result;

	result.siz = this->siz + 1;
	result.pointer = new int[result.siz];

	for (int i = 0; i < result.siz; i++)
	{
		if (i == result.siz ) {
			result.pointer[i] = 0;
		}
		else {
			result.pointer[i] = this->pointer[i];
		}
	}

	return result;
}

DinArr DinArr::operator--()
{
	DinArr rezult;
	rezult.siz = this->siz - 1;
	rezult.pointer = new int[rezult.siz];

	for (int i = 0; i < rezult.siz; i++)
	{
		rezult.pointer[i] = this->pointer[i];
	}
	return rezult;
}

int* DinArr::GetPointer()
{
	return pointer;
}

int DinArr::GetSize()
{
	return siz;
}

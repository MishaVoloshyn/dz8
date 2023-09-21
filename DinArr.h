#pragma once
class DinArr
{
private:
	int* pointer;
	int siz;
public:
	DinArr();
	DinArr(int);
	DinArr(const DinArr&);
	~DinArr();

	void Input();
	void PrintConsole();

	DinArr operator+(int x);
	DinArr operator-(int x);
	DinArr operator*(int x);
	DinArr operator-(DinArr result2);
	DinArr operator+(DinArr y);
	DinArr operator++();
	DinArr operator--();

	int* GetPointer();
	int GetSize();
};
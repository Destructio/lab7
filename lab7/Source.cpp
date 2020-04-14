#include "Header.h"

void outputArr(int** arr, int n, int n2, ListBox^ l)
{
	l->Items->Clear();
	for (int i = 0; i < n; i++)
	{
		String^ s = "";
		for (int j = 0; j < n2; j++)
		{
			s += (*(*(arr + i) + j)).ToString() + " ";
		}
		l->Items->Add(s);
	}
}
void outputArr(int* arr, int n, ListBox^ l)
{
	l->Items->Clear();
	String^ s = "";
	for (int i = 0; i < n; i++)
	{
		s += (*(arr + i)).ToString() + " ";
	}
	l->Items->Add(s);
}

int** getNewArr(int& n, int& n2)
{
	Random^ r = gcnew Random;
	n = r->Next(2, 5);
	n2 = r->Next(2, 5);

	int** arr = new int* [n];

	for (int i = 0; i < n; i++) 
	{
		*(arr + i) = new int[n2];
		for (int j = 0; j < n2; j++) 
		{
			*(*(arr+i)+j) = r->Next(-100, 100);
		}
	}
	return arr;
}

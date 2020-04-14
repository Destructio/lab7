#pragma once
using namespace System;
using namespace System::Windows::Forms;

int* createNewArr(int**, int, int);
void outputArr(int**, int, int, ListBox^);
int** getNewArr(int&, int&);
void outputArr(int*, int, ListBox^);
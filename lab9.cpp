// lab9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int N,t;
	char buff[10];
	ifstream Fin;
	ofstream Fout;
	Fin.open("input.txt");	
	if (Fin.is_open())
	{
		Fin >> buff;
		N = atoi(buff);
	Fin.close();

	Fout.open("output.txt");
	Fout << N;
	Fout.close();
	cout << "Данные сохранены в файле 'output.txt'." << endl;;
	}
	else 
	{
		cout << "Не удалось открыть файл 'input_3.txt'.";
		cin.get();
	}


	system("pause");
}



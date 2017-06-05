// lab5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


void main()
{
	int a[30][30], n, w, next1, next2, i, j, d, r;
	char yn;

	cout << "kak vvesi array" << endl;
	cout << "1" << endl;
	cout << "2 = rand" << endl;
	cin >> w;

	//Ввод элементов (keyboard / rand)
	for (int i = 0; i<30; i++)
	{
		for (int j = 0; j<30; j++)
		{
			if (w == 1 || w == 2) {
				if (w == 1) {
					cout << "Enter element of matrix: a[" << i << "][" << j << "] ";
					cin >> a[i][j];
					cout << endl;
				}
				if (w == 2) {
					a[i][j] = rand() % 100;
				}
			}
		}
	}

	// CHECK ARRAY
	cout << "check? y/n" << endl;
		if (yn == 'y' || yn == 'n') {
			if (yn == 'y') {
				cout << "you array: " << endl;
				for (int i = 0; i<30; i++)
				{
					for (int j = 0; j<30; j++)
					{
						cout << а[i][j] << " ";
					}
				}
			}
			else {
				cout << "OK :(" << endl;
			}
		}

	cout << "vvedi n" << endl;
	cin >> n;
	cout << "kuda sdvig" << endl;
	cout << "1 = vpravo" << endl;
	cout << "2 = vlevo" << endl;
	cin >> w;

	//move elements to the right or down
	if (w == 1 || w == 2) {
		if (w == 1) {
			for (r = 0; i < n; r++) {
				for (i = 0; i < 30; i++)
					next1 = a[i][0];
					for (j = 29; j > 0; j--) {
						a[i][j] = a[i][j - 1];
						a[0][/* znachenie*/] = next1;
					}
			}
		} if (w == 2) {
			for (d = 0; i < n; d++) 
				for (j = 0; j < 30; j++)
					for (i = 0; i < 30; i++)
					 {
						//next = a[i][j];
						//a[i][j] = a[i][j];
						//next1 =
						cout << ";)" << endl;
					}
			
		}
	}
	else {
		cout << "Oops :( Try again!" << endl;
	}


	//last check array
	cout << "See answer? y/n" << endl;
		if (yn == 'y' || yn == 'n') {
			if (yn == 'y') {
				cout << "your array: " << endl;
				for (int i = 0; i<30; i++)
				{
					for (int j = 0; j<30; j++)
					{
						cout << а[i][j] << " ";
					}
				}
			}
			else {
				cout << "OK :(" << endl;
			}
		}

	system("pause");
}


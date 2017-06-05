#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int N = 8;

	struct NOTE
	{
		string name;
		string surname;
		int phone_number;
		int birth[3];
	};

int i,mymonth;

NOTE person[N];

int main()
{
	for (int i = 1; i < N; i++)
	{
		cout << "Person" << i << endl;
		cout << "Name:";
		cin.ignore();
		getline(cin, person[i].name);

		cout << "Surname:";
		cin.ignore();
		getline(cin, person[i].surname);

		cout << "Phone number:";
		cin >> person[i].phone_number;


		cout << "Birth date:" << endl;
		cout << "Day:";
		cin >> person[i].birth[1];
		cin.ignore();
		cout << "Month:";
		cin >> person[i].birth[2];
		cin.ignore();
		cout << "Year:";
		cin	>> person[i].birth[3];
	}

	cout << " " << endl;
	cin >> "mymonth";
	cin.ignore();
	for (i = 1;i < N;i++) {
		if (mymonth == person[i].birth[2]) {
			cout << "" << i << endl;
			cin >> person[i].name >> "  " >> person[i].surname;
			cin.ignore();

		}
	}

	system("pause");
	return 0;
}


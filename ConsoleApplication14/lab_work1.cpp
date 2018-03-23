#include<stdio.h>
#include<math.h>
#include<iostream>
#include<time.h>
#include<locale.h>
#include<stdarg.h>
using namespace std;
int  IsLeapYear(int year);
int MonthDays(int M, int Y);

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "¬ведите номер задани€ :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		/*1.	ƒата некоторого дн€ характеризуетс€ трем€ натуральными числами: g (год),
		m (пор€дковый номер мес€ца) и n (число).
		ѕо заданным g, n и m определить (ќпределить функцию,
		подсчитывающую количество дней в том или ином мес€це):
		a.	дату предыдущего дн€;
		b.	дату следующего дн€
		*/
		int M, Y;
		if (IsLeapYear)
		{
			cout << "¬ведите мес€ц:";
			cin >> M;
			cout << "¬ведите год:";
			cin >> Y;
			cout << "количество дней дл€ " << M << " - го мес€ца" << Y << "года:";
			cout << MonthDays(M, Y);
			cout << endl;
		}

	}break;
	case 2:
	{
		/*	2.	¬ обеих задачах рассмотреть два случа€ :
		a.заданный год не €вл€етс€ високосным;
		b.заданный год может быть високосным
		*/
		int year;
		cout << "¬ведите год:";
		cin >> year;
		if (IsLeapYear)
			cout << "год €вл€етс€ високосным" << endl;
		else
			cout << "год не€вл€етс€ високосным" << endl;

	}break;

	}
}

int  IsLeapYear(int year)
{
	return ((year % 100 == 0 && year % 400 != 0) || (year % 4 == 0));

}
int MonthDays(int M, int Y)
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (M == 2 && IsLeapYear(Y))
		return month[M - 1] + 1;
	return month[M - 1];
}
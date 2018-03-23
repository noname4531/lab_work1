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
	cout << "������� ����� ������� :" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		/*1.	���� ���������� ��� ��������������� ����� ������������ �������: g (���),
		m (���������� ����� ������) � n (�����).
		�� �������� g, n � m ���������� (���������� �������,
		�������������� ���������� ���� � ��� ��� ���� ������):
		a.	���� ����������� ���;
		b.	���� ���������� ���
		*/
		int M, Y;
		if (IsLeapYear)
		{
			cout << "������� �����:";
			cin >> M;
			cout << "������� ���:";
			cin >> Y;
			cout << "���������� ���� ��� " << M << " - �� ������" << Y << "����:";
			cout << MonthDays(M, Y);
			cout << endl;
		}

	}break;
	case 2:
	{
		/*	2.	� ����� ������� ����������� ��� ������ :
		a.�������� ��� �� �������� ����������;
		b.�������� ��� ����� ���� ����������
		*/
		int year;
		cout << "������� ���:";
		cin >> year;
		if (IsLeapYear)
			cout << "��� �������� ����������" << endl;
		else
			cout << "��� ���������� ����������" << endl;

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
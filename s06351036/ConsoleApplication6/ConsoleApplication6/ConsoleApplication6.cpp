// ConsoleApplication6.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main()
{
	int a, b, c = 0, d = 0, e, f = 0, s, h, i = 0, j = 0, k = 127, l = 0, m = 0, o = 0, p = 0, q = 0,r=23;
	int A = 0, B = 0, H = 0, F = 0;
	float BEAN, G;
	float bean;
	float g;
	int integer[24] = { 0 };
	int integer2[24] = { 0 };
	int integer3[24] = { 0 };
	char n;
	cout << "輸入此數的+,-號=>";
	cin >> n;
	switch (n)
	{
	case('+'):
		s = 0;
		break;
	case('-'):
		s = 1;
		break;
	}
	cout << "輸入一個十進位數字";
	scanf_s("%f", &bean);
	A = (int)bean;
	a = (int)bean;
	BEAN = bean - a;
	a;
	if (a >= 1)
	{
		while (a >= 2)
		{
			b = a % 2;
			a = a / 2;
			f++;
		}
		e = k + f;
	}
	else
	{
		while (bean>0)
		{
			g = bean * 2;
			h = (int)g;
			bean = g - h;
			f = f++;
		}
		e = k -( f-1);
	}
	while (e >= 2)
	{
		i = e % 2;
		e = e / 2;
		integer[c++] = i;
	}
	integer[c] = e;
	printf("%d", s);

	if (bean < 1)
	{
		int x;
		x = 7 - f;
		while (x >= 0)
		{
			x = x - 1;
			cout << 0;
		}
	}
	while (c > 0)
	{
		printf("%d", integer[c--]);
	}
	while (A >= 2)
	{
		B = A % 2;
		A = A / 2;
		integer2[l++] = B;
		q++;
	}
	integer2[l] = i;
	while (BEAN>0)
	{
		G = BEAN * 2;
		H = (int)G;
		BEAN = G - H;
		integer3[m] = H;
		m++;
		o++;
	}
	while (q>=0)
	{
		q--;
		cout << integer2[l];
			l--;
		
	}
	int w = 0;

	while (w<=o)
	{
		w++;
		m--;
	}
	m++;
	if (bean > 1)
	{
		while (p <= o)
		{
			p++;
			printf("%d", integer3[m++]);
		}
	}
	else
	{
		m = m + (f-1);
		while (p <= o)
		{
			p++;
			printf("%d", integer3[m++]);
		}
	}
	if (bean > 1)
	{
		r = r - f - o - 1;
		while (r > 0)
		{
			r--;
			printf("0");
		}
	}
	else
	{
		r = r - o-1;
		while (r > 0)
		{
			r--;
			printf("0");
		}
	}

	system("pause");
	return 0;
}

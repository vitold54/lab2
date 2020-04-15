#pragma once

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

class Rectangle
{
private:
	double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5, AB, BC, CD, DA, S, P, H, D;

public:
	Rectangle(): x1(-5), y1(1), x2(-2), y2(3), x3(-5), y3(3), x4(-2), y4(3), x5(-3), y5(-2) {}
	Rectangle(double value_x1, double value_y1, double value_x3, double value_y3, double value_x5, double value_y5) :
		x1(value_x1), y1(value_y1), x3(value_x3), y3(value_y3), x5(value_x5), y5(value_y5) {}

	void output1()
	{
	
		cout << "\n\nКоординаты точки А: " << "(" << x1 << "," << y1 << ")"; // Левая нижняя точка прямоугольника
		cout << "\nКоординаты точки С: " << "(" << x3 << "," << y3 << ")"; // Правая верхняя точка прямоугольника
		cout << "\nКоординаты произвольной точки: " << "(" << x5 << "," << y5 << ")" << endl; // Произвольная точка
	}

	int affiliation1()
	{

		if (x1 <= 0 && y1 <= 0 && x3 <= 0 && y3 <= 0) // Условие на левую нижнюю четверть
		{
			if (x5 >= x1 && x5 <= x3 && y3 >= y5 && y5 >= y1)
			{
				return 0; // Точка принадлежит прямоугольнику 
			}
			else return 1; // Точка не принадлежит прямоугольнику
		}

		else if (x1 <= 0 && x3 <= 0 && y1 >= 0 && y3 >= 0) // Условие на левую верхнюю четверть
		{
			if (x5 >= x1 && x5 <= x3 && y5 >= y1 && y5 <= y3)
			{
				return 0; // Точка принадлежит прямоугольнику 
			}
			else return 1; // Точка не принадлежит прямоугольнику
		}
		
		else if (x1 >= 0 && y1 >= 0 && x3 >= 0 && y3 >= 0) // Условие на правую верхнюю четверть
		{
			if (x5 >= x1 && x5 <= x3 && y5 >= y1 && y5 <= y3)
			{
				return 0; // Точка принадлежит прямоугольнику 
			}
			else return 1; // Точка не принадлежит прямоугольнику
		}

		else if (x1 >= 0 && x3 >= 0 && y1 <= 0 && y3 <= 0) // Условие на правую нижнюю четверть
		{
			if (x5 >= x1 && x5 <= x3 && y5 >= y1 && y5 <= y3)
			{
				return 0; // Точка принадлежит прямоугольнику
			}
			else return 1; // Точка не принадлежит прямоугольнику
		}	
	}
	

	int area()
	{
		 H = abs(y3) - abs(y1);
		 D = abs(x3)- abs(x1);
		 S = abs(H) * abs(D);
		 return S;
	}
		
	int perimeter()
	{
		H = abs(y3) - abs(y1);
		D = abs(x3)- abs(x1);
		P = (abs(H) + abs (D)) * 2;
		return P;
	}

	void output()
	{


		cout << "\n\nКоординаты точки А: " << "(" << x1 << "," << y1 << ")"; // Левая нижняя точка прямоугольника
		cout << "\nКоординаты точки B: " << "(" << x2 << "," << y2 << ")"; // Левая верхняя точка прямоугольника
		cout << "\nКоординаты точки С: " << "(" << x3 << "," << y3 << ")"; // Правая верхняя точка прямоугольника
		cout << "\nКоординаты точки D: " << "(" << x4 << "," << y4 << ")"; // Правая нижняя точка прямоугольника
		cout << "\nКоординаты произвольной точки: " << "(" << x5 << "," << y5 << ")" << endl; // Произвольная точка
	}


	int perimeter2 ()
	{
		AB = abs(y2) - abs(y1);
		BC = abs(x3) - abs(x2);
		CD = abs(x4) - abs(y3);
		DA = abs(x4) - abs(x1);
		P = (abs(AB) + abs(BC)) * 2;
		return P;
	}
		
	int area2()
	{
		AB = abs(y2) - abs(y1);
		BC = abs(x3) - abs(x2);
		CD = abs(x4) - abs(y3);
		DA = abs(x4) - abs(x1);
		S = abs(AB) * abs(BC);
		return S;
	}
	
};

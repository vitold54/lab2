#pragma once
#include "Rectangle.h"


int main()
{
    setlocale(LC_ALL, "rus");

    Rectangle low(2, -3, 5, -1, 5, -4); // x1, y1, x3, y3, x5, y5, где x1y1 координаты лев. нижней точки, x3y3 прав. верхн.
    low.output1(); // Вывод известных координат
    low.affiliation1(); // Принадлежность произвольной точки
    low.area(); // Вычисление длин сторон, площади
    low.perimeter(); // Вычисление длин сторон, периметра
    

    Rectangle big;
    big.output(); // Вывод известных координат
    big.affiliation1(); // Принадлежность произвольной точки
    big.area2(); // Вычисление длин сторон, площади
    big.perimeter2(); // Вычисление длин сторон, периметра



    return 0;
}

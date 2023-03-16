﻿#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
    Figure()
    {

    }
    void Get_side()
    {
        cout << sides_count << endl;
    }
    void Get_name()
    {
        cout << name;
    }
    void Sides()
    {
        cout << "Стороны: "
            << "a = " << a_side
            << " b = " << b_side
            << " c = " << c_side
            << " d = " << d_side << endl;
    }
    void Angles()
    {
        cout << "Углы: "
            << "A = " << A_angle
            << " B = " << B_angle
            << " C = " << C_angle
            << " D = " << D_angle << endl;
    }

protected:
    int sides_count = 0;
    string name = "Фигура: ";
    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int d_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;
    int D_angle = 0;
};

class Triangle :public Figure
{
public:
    Triangle()
    {

        name = "Треугольник: ";
        sides_count = 3;
        a_side = 10;
        b_side = 20;
        c_side = 30;
        A_angle = 50;
        B_angle = 60;
        C_angle = 70;

    }
};

class Quadrangle :public Figure
{
public:
    Quadrangle()
    {
        name = "Четырехугольник: ";
        sides_count = 4;
        a_side = 10;
        b_side = 20;
        c_side = 30;
        d_side = 40;
        A_angle = 50;
        B_angle = 60;
        C_angle = 70;
        D_angle = 80;
    }
};

class Right_Triangle : public Figure
{
public:
    Right_Triangle()
    {
        name = "Прямоугольный треугольник: ";
        sides_count = 3;
        a_side = 10;
        b_side = 20;
        c_side = 30;
        A_angle = 50;
        B_angle = 60;
        C_angle = 90;
    }
};

class Isosceles_Triangle : public Figure
{
public:
    Isosceles_Triangle()
    {
        name = "Равнобедренный треугольник: ";
        sides_count = 3;
        a_side = 10;
        b_side = 20;
        c_side = 10;
        A_angle = 50;
        B_angle = 60;
        C_angle = 50;
    }
};

class Equilateral_Triangle : public Figure
{
public:
    Equilateral_Triangle()
    {
        name = "Равносторонний треугольник: ";
        sides_count = 3;
        a_side = 30;
        b_side = 30;
        c_side = 30;
        A_angle = 60;
        B_angle = 60;
        C_angle = 60;
    }

};


class Rectangle : public Figure
{
public:
    Rectangle()
    {
        name = "Прямоугольник: ";
        sides_count = 4;
        a_side = 10;
        b_side = 20;
        c_side = 10;
        d_side = 20;
        A_angle = 90;
        B_angle = 90;
        C_angle = 90;
        D_angle = 90;
    }

};

class Square : public Figure
{
public:
    Square()
    {
        name = "Прямоугольник: ";
        sides_count = 4;
        a_side = 20;
        b_side = 20;
        c_side = 20;
        d_side = 20;
        A_angle = 90;
        B_angle = 90;
        C_angle = 90;
        D_angle = 90;
    }

};

class Parallelogram : public Figure
{
public:
    Parallelogram()
    {
        name = "Параллелограмм: ";
        sides_count = 4;
        a_side = 20;
        b_side = 30;
        c_side = 20;
        d_side = 30;
        A_angle = 30;
        B_angle = 40;
        C_angle = 30;
        D_angle = 40;
    }
};

class Rhomb : public Figure
{
public:
    Rhomb()
    {
        name = "Ромб: ";
        sides_count = 4;
        a_side = 30;
        b_side = 30;
        c_side = 30;
        d_side = 30;
        A_angle = 30;
        B_angle = 40;
        C_angle = 30;
        D_angle = 40;
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");

    Figure Figure;
    Triangle Triangle;
    Quadrangle Quadrangle;

    Right_Triangle Right_Triangle;

    Right_Triangle.Get_name();
    Right_Triangle.Get_side();
    Right_Triangle.Sides();
    Right_Triangle.Angles();

    

}
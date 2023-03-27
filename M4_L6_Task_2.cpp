﻿#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
    Figure() 
    {

    }

    virtual void Print_info()
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
    }

protected:
    int sides_count = 0;
    string name = "Фигура: ";
};

class Triangle :public Figure
{
public:
    Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle)
    {
        name = "Треугольник ";
        sides_count = 3;
        this->a_side = a_side;
        this->b_side = b_side;
        this->c_side = c_side;
        this->A_angle = A_angle;
        this->B_angle = B_angle;
        this->C_angle = C_angle;
    }
    Triangle()
    {

    }

    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }

protected:
    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;
};

class Quadrangle :public Figure
{
public:
    Quadrangle(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
    {
        name = "Четырехугольник ";
        sides_count = 4;
        this->a_side = a_side;
        this->b_side = b_side;
        this->c_side = c_side;
        this->d_side = d_side;
        this->A_angle = A_angle;
        this->B_angle = B_angle;
        this->C_angle = C_angle;
        this->D_angle = D_angle;
    }

    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
    }

protected:
    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int d_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;
    int D_angle = 0;
};

class Right_Triangle : public Triangle
{
public:
    Right_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle) 
        : Triangle(a_side, b_side, c_side, A_angle, B_angle, C_angle) 
    {
        name = "Прямоугольный треугольник";
        C_angle = 90;
    }

    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }
};

class Isosceles_Triangle : public Triangle
{
public:
    Isosceles_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle) 
        : Triangle(a_side, b_side, c_side, A_angle, B_angle, C_angle) 
    {
        name = "Равнобедренный треугольник ";
        a_side = c_side;
        A_angle = C_angle;
    }
    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }
};

class Equilateral_Triangle : public Triangle
{
public:
    Equilateral_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle)
        : Triangle(a_side, b_side, c_side, A_angle, B_angle, C_angle)
    {
        name = "Равносторонний треугольник ";
        sides_count = 3;
        a_side = b_side = c_side;
        A_angle = 60;
        B_angle = 60;
        C_angle = 60;
    }
    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }
};


class Rectangle : public Quadrangle
{
public:
    Rectangle(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle) 
        : Quadrangle (a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
    {
        name = "Прямоугольник ";
        sides_count = 4;
        a_side = c_side;
        b_side = d_side;
        A_angle = 90;
        B_angle = 90;
        C_angle = 90;
        D_angle = 90;
    }
    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
    }
};

class Square : public Quadrangle
{
public:
    Square(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
        : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
    {
        name = "Квадрат ";
        sides_count = 4;
        a_side = b_side = c_side = d_side;
        A_angle = 90;
        B_angle = 90;
        C_angle = 90;
        D_angle = 90;
    }
    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
        : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
    {
        name = "Параллелограмм ";
        sides_count = 4;
        a_side = c_side;
        b_side = d_side;
        A_angle = C_angle;
        B_angle = D_angle;
    }
    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
    }
};

class Rhomb : public Quadrangle
{
public:
    Rhomb(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
        : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
    {
        name = "Ромб ";
        sides_count = 4;
        a_side = b_side = c_side = d_side;
        A_angle = C_angle;
        B_angle = D_angle;
    }
    void Print_info() override
    {
        cout << "Название фигуры: " << name << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
    };
};

void Print_info(Figure* figure)
{
    figure->Print_info();
}

int main()
{
   setlocale(LC_ALL, "Rus");


   Figure figure;
   Triangle triangle(10, 20, 30, 50, 60, 70);
   Print_info(&triangle);

   Right_Triangle right_triangle(10, 20, 30, 50, 60, 90);
   Print_info(&right_triangle);

   Isosceles_Triangle Isosceles_Triangle(10, 20, 10, 50, 60, 50);
   Print_info(&Isosceles_Triangle);

   Equilateral_Triangle Equilateral_Triangle(30, 30, 30, 60, 60, 60);
   Print_info(&Equilateral_Triangle);

   Quadrangle Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
   Print_info(&Quadrangle);

   Rectangle Rectangle(10, 20, 10, 20, 90, 90, 90, 90);
   Print_info(&Rectangle);

   Square Square(20, 20, 20, 20, 90, 90, 90, 90);
   Print_info(&Square);

   Parallelogram Parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
   Print_info(&Parallelogram);
   
   Rhomb Rhomb(30, 30, 30, 30, 30, 40, 30, 40);
   Print_info(&Rhomb);

   return 0;
}
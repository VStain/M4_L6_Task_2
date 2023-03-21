#include <iostream>
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
    void Print_info()
    {
        cout << name;
        cout << sides_count << endl;
    }

protected:
    int sides_count = 0;
    string name = "Фигура: ";
};

class Triangle :public Figure
{
public:
    Triangle()
    {
        name = "Треугольник: ";
        sides_count = 3;
        int a_side = 10;
        int b_side = 20;
        int c_side = 30;
        int A_angle = 50;
        int B_angle = 60;
        int C_angle = 70;
    }

    void Sides()
    {
        cout << "Стороны: "
            << "a = " << a_side
            << " b = " << b_side
            << " c = " << c_side << endl;
    }

    void Angles()
    {
        cout << "Углы: "
            << "A = " << A_angle
            << " B = " << B_angle
            << " C = " << C_angle << endl << endl << endl;
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
            << " D = " << D_angle << endl << endl;
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

class Isosceles_Triangle : public Triangle
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

class Equilateral_Triangle : public Triangle
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


class Rectangle : public Quadrangle
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

class Square : public Quadrangle
{
public:
    Square()
    {
        name = "Квадрат: ";
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

class Parallelogram : public Quadrangle
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

class Rhomb : public Quadrangle
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


   Figure figure;
   Triangle triangle;
   Right_Triangle right_triangle;
   Triangle* figure_triangle = &right_triangle;

   figure_triangle->Get_name();
   figure_triangle->Get_side();
   figure_triangle->Print_info();
   //figure_triangle->();



    /*Right_Triangle.Get_name();
    Right_Triangle.Get_side();
    Right_Triangle.Sides();
    Right_Triangle.Angles();
    */
    Isosceles_Triangle Isosceles_Triangle;

    Isosceles_Triangle.Get_name();
    Isosceles_Triangle.Get_side();
    Isosceles_Triangle.Sides();
    Isosceles_Triangle.Angles();

    Equilateral_Triangle Equilateral_Triangle;

    Equilateral_Triangle.Get_name();
    Equilateral_Triangle.Get_side();
    Equilateral_Triangle.Sides();
    Equilateral_Triangle.Angles();

    Rectangle Rectangle;

    Rectangle.Get_name();
    Rectangle.Get_side();
    Rectangle.Sides();
    Rectangle.Angles();

    Square Square;

    Square.Get_name();
    Square.Get_side();
    Square.Sides();
    Square.Angles();

    Parallelogram Parallelogram;

    Parallelogram.Get_name();
    Parallelogram.Get_side();
    Parallelogram.Sides();
    Parallelogram.Angles();

}
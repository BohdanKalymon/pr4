// Lab_03_1.cpp 
// <kalymon bohdan> 
// ����������� ������ � 3.1 
// ������������, ������ ��������: ������� ���� �����. 
// ������ 5 

#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    double x;  // ������� ��������     
    double y;  // ��������� ���������� ������ 
    double A;  // �������� ��������� - ������������� ����� ������� ������     
    double B;  // �������� ��������� - ������������� ����� ������� ������ 

    cout << "x = "; cin >> x;

    A = 1 / fabs(x + 2) + 1;

    // ����� 1: ������������ � ��������� ����    
    if (x<1)         
        B = 7 * x*x + x - 8;     
    if (1<=x && x<=4) 
    B = sin((x + 4)/pow(11, 1. / 2.)) / cos((x + 4) / pow(11, 1. / 2.)) + 3;
    if (x > 4)
        B = pow(1 + fabs(pow(cos(x),3)), 1. / 2.);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;


    // ����� 2: ������������ � ����� ���� 
    if (x < 1)         B = 7 * x * x + x - 8;
    else
        if (1 <= x && x <= 4)
            B = sin((x + 4) / pow(11, 1. / 2.)) / cos((x + 4) / pow(11, 1. / 2.)) + 3;
        else
            B = pow(1 + fabs(pow(cos(x), 3)), 1. / 2.);

    y = A + B;

    cout << "2) y = " << y << endl;
    cin.get();     return 0;
}

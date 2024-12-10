#include <iostream>
#include <iomanip>  // Thu vien can du dunh dung so thap ph�n
using namespace std;

int main() {
    double r;  // B�n k�nh h�nh tr�n
    double pi = 3.14159;  // Gi� tr? c?a pi

    // Y�u cau nguoi d�ng nhap b�n k�nh
    cout << "Nhap b�n k�nh h�nh tr�n (r): ";
    cin >> r;

    // T�nh chu vi v� dien t�ch
    double chuVi = 2 * pi * r;
    double dienTich = pi * r * r;

    // Hien thi ket qua vai 2 cho s? thap ph�n
    cout << fixed << setprecision(2);  // �at dunh d?ung in ra vai 2 ch?o so thap ph�n
    cout << "Chu vi h�nh tr�n: " << chuVi << endl;
    cout << "Dien t�ch h�nh tr�n: " << dienTich << endl;

    return 0;
}

#include <iostream>
#include <iomanip>  // Thu vien can du dunh dung so thap phân
using namespace std;

int main() {
    double r;  // Bán kính hình tròn
    double pi = 3.14159;  // Giá tr? c?a pi

    // Yêu cau nguoi dùng nhap bán kính
    cout << "Nhap bán kính hình tròn (r): ";
    cin >> r;

    // Tính chu vi và dien tích
    double chuVi = 2 * pi * r;
    double dienTich = pi * r * r;

    // Hien thi ket qua vai 2 cho s? thap phân
    cout << fixed << setprecision(2);  // Ðat dunh d?ung in ra vai 2 ch?o so thap phân
    cout << "Chu vi hình tròn: " << chuVi << endl;
    cout << "Dien tích hình tròn: " << dienTich << endl;

    return 0;
}

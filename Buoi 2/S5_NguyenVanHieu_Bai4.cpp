#include <iostream>
using namespace std;
int main() {
    float kWh;
    cout << "Nhap so dien trong 1 thang: ";
    cin >> kWh;
    float Tien = 0; 
    int Gia = 0; 
    if (kWh >= 0 && kWh <= 50) {
        Gia = 1;
    } else if (kWh <= 100) {
        Gia = 2;
    } else if (kWh <= 200) {
        Gia = 3;
    } else if (kWh <= 300) {
        Gia = 4;
    } else if (kWh <= 400) {
        Gia = 5;
    } else {
        Gia = 6;
    }
    switch (Gia) {
        case 1:
            Tien = kWh * 1678;
            break;
        case 2:
            Tien = 50 * 1678 + (kWh - 50) * 1734;
            break;
        case 3:
            Tien = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
            break;
        case 4:
            Tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
            break;
        case 5:
            Tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
            break;
        case 6:
            Tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kWh - 400) * 2927;
            break;
        default:
            cout << "Loi , Nhap lai" << endl;
            return 0;
    }
	cout << Tien << " VND" << endl;

    return 0;
}
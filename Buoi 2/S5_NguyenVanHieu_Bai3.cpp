#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;   
    char pt;
    do {
        cout << "Nhap phep tinh trong doan [-10000;10000]: "<<endl;
        cin >> a >> pt >> b;
    } while (a < -10000 || a > 10000 || b < -10000 || b > 10000);
    int result;
    if (pt == '+') {
        result = a + b;
    } else if (pt == '-') {
        result = a - b;
    } else if (pt == '*' || pt == 'x') {
        result = a * b;
    } else if (pt == '/') {
        result = a / b;
    } else {
        cout << "Phep tinh khong hop le" <<endl;
        return 0;
    }

    cout << a << " " << pt << " " << b << " = " << result <<endl;
    return 0;
}
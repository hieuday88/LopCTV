#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c;   
    do {
        cout << "Nhap 3 so nguyen trong doan [-100;100]: "<<endl;
        cin >> a >> b >> c;
    } while (a < -100 || a > 100 || b < -100 || b > 100 || c < -100 || c > 100);
    if (a==b && b==c){
    	cout <<"Day la tam giac deu";
	}
	if (a + b < c || a + c < b || b + c < a) {
		cout <<"Day khong phai la tam giac";
	}
	if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
		cout <<"Day la tam giac vuong";
	}     
    return 0;
}
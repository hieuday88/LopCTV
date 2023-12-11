#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c;   
    do {
        cout << "Nhap 3 so nguyen trong doan [-100;100]: "<<endl;
        cin >> a >> b >> c;
    } while (a < -100 || a > 100 || a ==0 || b < -100 || b > 100 || b==0 || c < -100 || c > 100 || c==0);
    if( a>b & a>c){
    	cout <<0<<" "<<b<<" "<<c;
	}
	if(b>a & b>c){
		cout <<a<<" "<<0<<" "<<c;
	}
    if (c>a & c>b){
    	cout <<a<<" "<<b<<" "<<0;
	}
    return 0;
}

    
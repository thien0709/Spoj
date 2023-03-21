#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    unsigned int d1,d2;
    cin >> a >> b;
    cin >> d1 >> d2;
    cout << "(" << setw(d1) << a << ")" << " + " << "(" << setw(d1) << b << ")" <<" = " << setw(d1) << fixed << setprecision(2) << a+b << endl;
    cout << "(" << setw(d1) << a << ")" << " - " << "(" << setw(d1) << b << ")" <<" = " << setw(d1) << fixed << setprecision(2) << a-b << endl;
    cout << "(" << setw(d1) << a << ")" << " * " << "(" << setw(d1) << b << ")" <<" = " << setw(d1) << fixed << setprecision(2) << a*b << endl;
    cout << "(" << setw(d1) << a << ")" << " / " << "(" << setw(d1) << b << ")" <<" = " << setw(d1) << fixed << setprecision(2) << a/b << endl;
    system("pause");
    return 0;
}
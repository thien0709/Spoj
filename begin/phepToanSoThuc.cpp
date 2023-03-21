#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    cin >> a >> b;
    cout << "a   " << "=" << setw(11) << fixed << setprecision(3) << a << endl;
    cout << "b   " << "=" << setw(11) << fixed << setprecision(3) << b << endl; 
    cout << "a+b " << "=" << setw(11) << fixed << setprecision(3) << a+b << endl; 
    cout << "a-b " << "=" << setw(11) << fixed << setprecision(3) << a-b << endl; 
    cout << "a*b " << "=" << setw(11) << fixed << setprecision(3) << a*b << endl; 
    cout << "a/b " << "=" << setw(11) << fixed << setprecision(3) << a/b << endl;  
    return 0;
}
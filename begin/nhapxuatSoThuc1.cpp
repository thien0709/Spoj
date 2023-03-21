#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a;
    unsigned int x,y;
    cin >> a ;
    cin >> x >> y;
    cout << "a ="<< setw(x) << fixed << setprecision(y) << a <<endl;
    return 0;
}
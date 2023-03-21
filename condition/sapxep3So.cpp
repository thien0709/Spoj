#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double a, b, c;
  cin >> a >> b >> c;
  if (a>b && a>c) {
    if(b>c) cout << fixed << setprecision(2) << c << " --> " << setprecision(2) << b << " --> " << setprecision(2) << a;
    else cout << fixed << setprecision(2) << b << " --> " << setprecision(2) << c << " --> " << setprecision(2) << a;
  }
  if(b>a && b>c){
    if(a>c) cout << fixed << setprecision(2) << c << " --> " << setprecision(2) << a << " --> " << setprecision(2) << b;
    else cout << fixed << setprecision(2) << a << " --> " << setprecision(2) << c << " --> " << setprecision(2) << b;
  }
  if(c>a && c>b){
    if(a>b) cout << fixed << setprecision(2) << b << " --> " << setprecision(2) << a << " --> " << setprecision(2) << c;
    else cout << fixed << setprecision(2) << a << " --> " << setprecision(2) << b << " --> " << setprecision(2) << c;
  }
  return 0;
}
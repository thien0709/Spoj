#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 int main(){
  double a,b,c,delta;
  cin >> a >> b >> c;
  delta = pow(b,2)-(4*a*c);
  if(a == 0){
    if (b == 0 && c == 0 ){
      cout << "Moi x la nghiem" << endl;
      return 0;
      }
      else {
        cout << "Phuong trinh vo nghiem" << endl;
        return 0;
      }
     cout << "Phuong trinh co 1 nghiem don" << endl;
     cout << "x = " << fixed << setprecision(5) << -c/b << endl;
     
  }
  if( a!= 0 && delta >= 0)
  {
    if(delta == 0){
      cout << "Phuong trinh co nghiem kep" << endl;
      cout << "x1 = x2 = " << fixed << setprecision(5) << -b/(2*a) << endl;
    }
    else {
      cout << "Phuong trinh co 2 nghiem phan biet" << endl;
      cout << "x1 = " << fixed << setprecision(5) << (-b-sqrt(delta))/(2*a) << endl;
      cout << "x2 = " << fixed << setprecision(5) << (-b+sqrt(delta))/(2*a) << endl;
    }
  }
  if(a!= 0 && delta < 0) cout << "Phuong trinh vo nghiem" << endl;
  return 0;
 }
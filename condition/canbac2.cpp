#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
  double x;
  cin >> x;
  if(x < 0) {
    cout << -1 << endl; 
  }else {
    cout << fixed << setprecision(10) << sqrt(x) ;
  }
  return 0;
}
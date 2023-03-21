#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  float n;
  cin >> n;
  if(n < 0 ) {
    cout << fixed<< setprecision(3) << n << " la so am" << endl;
  }else cout << fixed << setprecision(3) << n << " la so duong" << endl;
  return 0;
} 
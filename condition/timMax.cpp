#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int max = a; 
  max = (b>max)? b:max;
  max = (c>max)? c:max;
  cout << "max{" << a << ", " << b << ", " << c << "} = " << max;
  return 0;
}
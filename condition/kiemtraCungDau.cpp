#include <iostream>
using namespace std;
int main(){
  double a,b;
  cin >> a >> b;
  if((a>0 && b> 0)||(a<0&&b<0)){
    cout << "Cung dau";
  }else cout << "Trai dau";
  return 0;
}
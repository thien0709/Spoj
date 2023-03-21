#include <iostream>
using namespace std;
int main(){
  float a,b;
  cin >> a >> b;
  if(a>=b){
    if(a>b) cout << "a > b";
    else cout << "a = b";
  }else cout << "a < b";
  return 0;
}
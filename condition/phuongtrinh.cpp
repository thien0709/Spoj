#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  float a,b;
  cin >> a >> b;
  if (a==0){
    if(b==0) cout << "Moi x la nghiem" << endl;
    else cout << "Vo nghiem" << endl;
  } else {
   cout << fixed << setprecision(5) << -b/a;
  }
}
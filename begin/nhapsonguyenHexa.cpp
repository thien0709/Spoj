#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin >> a;
    unsigned int x = stoul(a, nullptr, 16);
    cout << "0x" << a << " = " << x ;
    system("pause");
    return 0;
}
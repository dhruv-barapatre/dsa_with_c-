#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3;
  
    a = b ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a = " << a << " b = " << b << endl;   
  
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cout << "-----Hypotenuse Calculator Program-----" <<endl;
    cout << "Enter the base length of the triangle: ";
    cin >> a;
    a = pow(a, 2);
    cout << "Enter the perpendicular lenght of the triangle: ";
    cin >> b;
    b = pow(b, 2);
    c = sqrt(a+b);
    cout << "The hypotenuse length of the triangle is: " << c <<endl;
    return 0;
}
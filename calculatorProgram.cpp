#include <iostream>
using namespace std;
int main(){
    char op;
    double num1, num2, result;
    cout << "-----CALCULATOR-----" <<endl;
    cout << "Enter either of the following (+,-,/,*): ";
    cin >> op;
    cout << "--------------------" <<endl;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "The sum of the two numbers is: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "The difference of the two numbers is: " << result;
            break;
        case '*':
            result = num1*num2;
            cout << "The product of the two numbers is: " << result;
            break;
        case '/':
            result = num1/num2;
            cout << "The division of the two numbers is: " << result;
            break;
        default:
            cout << "Enter a valid response.";     
    }

    
    return 0;
}
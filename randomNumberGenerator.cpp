#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int num = rand(); //any random number generated
    int num1 = rand()%6; //for random number between 0 to 6
    int num2 = (rand()%6 +1); //for random number between 1 to 6  
    cout << num <<endl;
    cout << num1 <<endl;
    cout << num2 <<endl;
    return 0;

}
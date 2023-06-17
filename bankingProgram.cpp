#include <iostream>
using namespace std;

double balance = 0;
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    int choice;
    
    do{cout << "**************************" <<endl;
    cout << "Please enter your choice: " <<endl;
    cout << "**************************" <<endl;
    cout << "1. Show Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit" <<endl;
    cin >>choice;
    switch (choice)
    {
    case 1:
        showBalance(balance);
        break;
    case 2:
        balance += deposit();
        cout << "The current balance is: " << balance <<endl;
        break;
    case 3:
        balance -= withdraw(balance);
        cout << "The current balance is: " << balance <<endl;
        break;
    case 4:
        cout << "Thanks for visiting!" <<endl;  
        break;      
    default:
        cout << "Invalid input!" <<endl;
        break;
    }}while (choice != 4);
    return 0;
}

void showBalance(double balance){
    cout << "The available balance in your account is: " << balance <<endl;
}

double deposit(){
    double amount;
    cout << "Enter amount to be depositted: ";
    cin >> amount;
    if(amount>0){
        return amount;
    }
    else{
        cout << "Please enter a valid amount!" <<endl;
    }
    return 0;
}

double withdraw(double balance){
    double amount;
    cout << "Enter money to be withdrawn: ";
    cin >> amount;
    if (amount > balance){
        cout << "Insufficient funds!" <<endl;
    }
    else{
        return amount;
    }
    return 0;
}
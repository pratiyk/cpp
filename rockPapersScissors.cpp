#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice (char choice);
void chooseWinner (char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    computer = getComputerChoice();
    cout << "Your choice:";
    showChoice(player);
    cout << "\nComputer's choice:";
    showChoice(computer);
    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;
    cout << "*************************" <<endl;
    cout << "Rock Papers Scissors Game" <<endl;
    cout << "*************************" <<endl;
    do{cout << "Choose\n'r' for Rock\n'p' for Paper\n's' for Scissors" <<endl;
       cin >> player; 
    }while (player != 'r' && player != 's' && player != 'p');

    return player;
}

char getComputerChoice(){
    int choice;
    char computer;
    srand(time(NULL));
    choice = rand()%3 +1;

    switch(choice){
        case 1: 
            computer = 'r';
            break;
        case 2:
            computer = 's';
            break;
        case 3: 
            computer = 'p';
            break;
    }
    return computer;
}

void showChoice (char choice){
    switch (choice){
        case 'r':
        cout << "Rock" <<endl;
        break;
        case 's':
        cout << "Scissors" <<endl;
        break;
        case 'p':
        cout << "Paper" <<endl;
        break;
    }
}

void chooseWinner (char player, char computer){
    switch(player){
        case 'r':
        if(computer == 'r'){
            cout <<"Tie."<<endl;
        }
        else if(computer == 's'){
            cout <<"You Win!"<<endl;
        }
        else{
            cout <<"You Loose!"<<endl;
        }
        break;
        case 's':
        if(computer == 's'){
            cout <<"Tie."<<endl;
        }
        else if(computer == 'p'){
            cout <<"You Win!"<<endl;
        }
        else{
            cout <<"You Loose!"<<endl;
        }
        break;
        case 'p':
        if(computer == 'p'){
            cout <<"Tie."<<endl;
        }
        else if(computer == 'r'){
            cout <<"You Win!"<<endl;
        }
        else{
            cout <<"You Loose!"<<endl;
        }
        break;
    }
}
#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int num;
    int guess;
    int tries=0;
    num = rand()%50 +1;
    cout << "---------- Number Guessing Game ----------" <<endl;
    do{
        cout <<"Enter the guessed number(1-50): "<<endl;
        cin >>guess;
        
       
        tries++;

        if(num<guess){
            cout <<"Too High!!" <<endl;
        }
        else if(num>guess){
            cout <<"Too Low!!" <<endl;
        }
        else{
            cout<<"Correct Guess!!\nNumber of tries:"<<tries<<endl;
        }
    }while (guess !=num);
    return 0;
}
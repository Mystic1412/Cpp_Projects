#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){
    srand(time(0));
    int min, max, trys=5,guess;
    cout<<"What is your range?";
    cin>>min>>max;        
    int answer= min+rand()%max-min+1;
    
    cout<<"Enter a guess: ";
    cin>>guess;
    while(trys>0){
        if(guess == answer){
            cout<<"You win";
            return 0;
        }
        else{
            trys--;
            if(trys ==0){
                cout<<"You lost\nThe answer is "<<answer;
                return 0;
            }
            else if(guess<answer){
                cout<<"guess too low. Try again: ";
            }else{
                cout<<"guess too high. Try again: ";
            }
            cin>>guess; 
        }
    }
    return 0;
}
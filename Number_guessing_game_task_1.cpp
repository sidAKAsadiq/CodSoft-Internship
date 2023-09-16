/* This is Task no.1 of CodSoft C++ Internship - "Number guessing game"
   Author : Muhammad Sadiq
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int Random_number_generator(){
    srand(static_cast<int>(time(nullptr))); //Associating random number with time to make it different with each call

    int minimum_range = 1;
    int maximum_range = 100;    //The random number generated will be between 1-100

    int random_number = minimum_range + rand() % (maximum_range - minimum_range + 1);
    return random_number;

}

class Number_guessing_game{
private:
int random_number ;
int answer;
int attempts;
public:
Number_guessing_game(){
    random_number = Random_number_generator(); 
    attempts = 0; 
}
bool Play_game(){
    bool breaker = true;
        cout<<"Guess a number between 1-100 OR Press -1 to quit\n";
        cin>>answer;
    while(breaker){
        if(answer==-1){
            breaker = false;
            cout<<"Better Luck next time\n";
            cout<<"Total attempts : "<<attempts;
        }
        else if(answer==random_number){
            breaker = false;
            cout<<"Well done! , you guessed it right\n";
            cout<<"Total attempts : "<<attempts<<endl;
        }
        else{   
                attempts++;
                if(answer<1 || answer>100){
                    cout<<"Out of range answer, Try guessing between 1-100\n";
                }
                else if(answer >= (random_number/2) && answer<random_number){
                    cout<<"Almost there, Guess something a bit higher\n";
                }
                else if(answer <= (random_number/2) && answer<random_number){
                    cout<<"Too low, Guess something more higher\n";
                }
                else if(answer >= (random_number*2) && answer>random_number){
                    cout<<"Too high, Guess something more lower\n";
                }
                else if(answer <= (random_number*2) && answer>random_number){
                    cout<<"Almost there, Guess something a bit lower\n";
                }
                cin>>answer;
        }
    }

}


};

int main() {   
    Number_guessing_game n1;
    n1.Play_game();
    return 0;
}
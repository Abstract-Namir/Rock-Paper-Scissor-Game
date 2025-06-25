#include<iostream>
#include<ctime>
using namespace std;
char playerchoice();
void showchoice(char choice);
char computerchoice();
void winner(char player,char computer);
int main(){
    char player;
    char computer;
    player=playerchoice();
    cout<<"your choice: ";
    showchoice(player);

    computer=computerchoice();
    cout<<"computer choice: ";
    showchoice(computer);
     
    cout<<"Result: ";
    winner(player,computer);
    return 0;
}
char playerchoice(){
    char player;
    cout<<"Rock-Paper-Scissor GAME"<<endl;
    do{
    cout<<"**********************"<<endl;
    cout<<"choose one of the following"<<endl;
    cout<<"r: Rock"<<endl;
    cout<<"p: Paper"<<endl;
    cout<<"s: Scissor"<<endl;
    cin>>player;
    }while(player !='r' && player!='p' && player !='s');
 return player;
}
void showchoice(char choice){
switch(choice){
    case 'r': cout<<"Rock"<<endl;
             break;
    case 'p': cout<<"Paper"<<endl;
             break;             
    case 's': cout<<"Scissor"<<endl;
             break;

            }
}
char computerchoice(){
    srand(time(0));
    int num=rand()%3+1;
    switch(num){
        case 1: return 'r'; //here break is not necessory due to return value is there
        case 2: return 'p';
        case 3: return 's';
    }
    

    return 0;
}
void winner(char player , char computer){
    switch(player){
        case 'r': if(computer=='r'){
            cout<<"its a tie!"<<endl;
        }
        else if(computer=='p'){
            cout<<"you lose!"<<endl;
        }
        else{
            cout<<"you win!"<<endl;
        } 
        break;


        case 'p': if(computer=='p'){
            cout<<"its a tie!"<<endl;
        }
        else if(computer=='s'){
            cout<<"you lose!"<<endl;
        }
        else{
            cout<<"you win!"<<endl;
        } 
        break;

        
        case 's': if(computer=='s'){
            cout<<"its a tie!"<<endl;
        }
        else if(computer=='r'){
            cout<<"you lose!"<<endl;
        }
        else{
            cout<<"you win!"<<endl;
        } 
        break;
    }

}
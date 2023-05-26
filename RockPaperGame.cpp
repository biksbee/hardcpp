#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choise);
void chooseWinner(char player, char computer);


int main(){

    char player;
    char computer;

    do{
        player = getUserChoice();
        if(player != 'e'){
            std::cout << "Your choice: ";
            showChoice(player);

            computer = getComputerChoice();
            std::cout << "Computer's choice: ";
            showChoice(computer);

            chooseWinner(player, computer);
        }
        else 
            showChoice(player);
    }while(player != 'e');
    return 0;
}

char getUserChoice(){

    std::cout << "***********Welcome to ROCK PAPER SCISSORS GAME*******************\n";
    
    char player;
    do{
        std::cout << "Enter your choice \n r. ROCK \n p. PAPER \n s. SCISSORS \n e. Exit\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's' && player != 'e');
    
    return player;
}
char getComputerChoice(){

        srand(time(0));
        int num = rand() % 3 + 1;
        
        switch(num){
            case 1: return 'r';
                break;
            case 2: return 'p';
                break;
            case 3: return 's';
                break;
        }
}
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
        case 'e': std::cout << "Thanks for visiting!\n";
            break;
    }
}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
                    std::cout << "It's a tie!\n";
                }
                else if(computer == 'p'){
                    std::cout << "You Loooose!\n";
                } 
                else {
                    std::cout << "You WIN!\n";
                }
                break;
        case 'p': if(computer == 'r'){
                    std::cout << "You WIN!\n";
                }
                else if(computer == 'p'){
                    std::cout << "It's a tie!\n";
                }
                else{
                    std::cout << "Your Lose!\n";
                }
                break;
        case 's': if(computer == 'r'){
                    std::cout << "You Lose!\n";
                }
                else if(computer == 'p'){
                    std::cout << "You WIN!\n";
                }
                else{
                    std::cout << "It's a tie!\n";
                }
                break;
    }

}

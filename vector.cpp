#include <iostream>
 


int main(){


    const int SIZE = 99;
    std::string foods[SIZE]
    
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");

    for(std::string food : foods){
        std:cout << food << '\n';
    }


    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else {
            foods[i] = temp;
        }
    }


    std::cout << "You like the following food:\n";
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;
}
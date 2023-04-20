#include <iostream>
#include "dice.cpp"
#include <string>

void user_input()
{
    int nd, ns;
    bool keep_going = true;
    int decision;

    std::cout << "How many dice and sides? (Answers separated by a space)";
    while(keep_going)
    {
        std::cin >> nd >> ns;
        Dice dice = {nd, ns};

        std::cout << dice.get_ndice() << " " << dice.get_nside() << std::endl;
        
        dice.roll_dice(dice);

        std::cout << "Continue? 1 = Yes   0 = No" << std::endl;
        std::cin >> decision;

        if(decision == 0)
        {
            return;
        }

        std::cout << "How many dice and sides? (Answers separated by a space)";
    }
}

int main(int argc, char** argv){

    user_input();

    return 0;
}
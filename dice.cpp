#include <iostream>
#include "dice.h"
#include "time.h"

// Starting off with the constructor to make the dice
Dice::Dice(int ndice, int nsides)
{
    this->ndice = ndice;
    this->nsides = nsides;
}

// The destructor that will not be used (maybe)
Dice::~Dice()
{
}

// The function to return the value I ask for in the name
int Dice::get_nside()
{
    return nsides;
}

// Same as the function above
int Dice::get_ndice()
{
    return ndice;
}

// Function that will roll
void Dice::roll_dice(Dice dice)
{
    srand(time(NULL));
    for(int i = 0; i < dice.get_ndice(); i++)
    {
        dice.value = 1 + (rand() % dice.get_nside());
        dice.print_6s_die(dice, dice.value);
        dice.print_4s_8s_20s_die(dice, dice.value);
        dice.print_10s_100s_die(dice, dice.value);
        dice.print_12s_die(dice, dice.value);
    }
}

// Function to print out a graphic of a six-sided die
void Dice::print_6s_die(Dice dice, int value)
{
    if(dice.get_nside() != 6)
    {
        return;
    }
    std::cout << " _____\n" << "|     |\n" << "|  " << value << "  |\n"
    << "|_____|\n" << std::endl;
}

// Function to print out a graphic of a four, eight, and twenty sided die
void Dice::print_4s_8s_20s_die(Dice dice, int value)
{
    if(dice.get_nside() == 4 || dice.get_nside() == 8 || dice.get_nside() == 20)
    {
        std::cout << "   \u039B\n" << "  / \\\n" << " / ";
        if(value >= 10){
            std::cout << value << "\\\n" << "/_____\\" << std::endl;
        }else
        {
            std::cout << value << " \\\n" << "/_____\\" << std::endl;
        }
        
    }
    
}

// Funciton to print out a graphic of a ten and one hundred sided die
void Dice::print_10s_100s_die(Dice dice, int value)
{
    if(dice.get_nside() == 10 || dice.get_nside() == 100)
    {
        std::cout << "   \u039B\n" << "  / \\\n" << " /   \\\n" <<
        "/ ";

        if(value < 10)
        {
         std::cout << "00" << value;   
        }else if(value > 10 && value < 100)
        {
            std::cout << "0" << value;
        }else
        {
            std::cout << value;
        }

        std::cout << " \\\n" << " \\   /\n" << "  \\ /" << std::endl;
    }
}

// Function to print a twelve sided die
void Dice::print_12s_die(Dice dice, int value)
{
    if(dice.get_nside() == 12)
    {
        std::cout << "       \u039B\n" << "     /   \\\n" << "   /       \\\n"
        << " /           \\\n" << "\\     ";
        if(value < 10)
        {
            std::cout << "0" << value;
        }else
        {
            std::cout << value;
        }
        std::cout << "      /\n" << " \\           /\n" << "  \\         /\n"
        << "   \\_ _ _ _/" << std::endl;
    }
}
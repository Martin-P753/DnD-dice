#pragma once

// Gonna try out a DnD Dice progam starting with a dice class
class Dice
{
// Public functions that will be used later in the dice.cpp
// Declared in the header, will be defined in the cpp file
public:
    // Constructor and the destructor(the one with the ~)
    Dice(int ndice, int nsides);
    ~Dice();
    
    // Functions to get the values in the name of the variable
    int get_nside();
    int get_ndice();

    // Void function that will roll the dice
    void roll_dice(Dice Dice);

    // Void functions that will give a little graphic of the dice being rolled
    void print_6s_die(Dice dice, int value);
    void print_4s_8s_20s_die(Dice dice, int value);
    void print_10s_100s_die(Dice dice, int value);
    void print_12s_die(Dice dice, int value);

    
protected:
    // Values given to the dice itself
    int ndice;
    int nsides;

    // The value of the dice rolled
    int value;
};

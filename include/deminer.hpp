#ifndef __DEMINER_HPP__
#define __DEMINER_HPP__

/* #### INCLUDE #### */
#include "constant.hpp"

enum Box { VOID = 0, ONE = 1, TWO = 2, TREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, HEIGHT = 8, BOMB = 9 };

enum DisplayBox { HIDE = 0, VOID = 1, ONE = 2, TWO = 3, TREE = 4, FOUR = 5, FIVE = 6, SIX = 7, SEVEN = 8, HEIGHT = 9, FLAG = 10, BOMB = 11 };

struct Position
{
    int i = 0, j = 0;

    // implicit conversion
    operator int() const { return i + NB_CASE_X * j; }
    
    // explicit conversion
    explicit operator int*() const { return nullptr; }
};

class Deminer
{
public:
    Deminer();
    ~Deminer();

private:
    void addBomb(int &pos);

    Box grid[NB_CASE_X * NB_CASE_Y] = {Box::VOID};
    DisplayBox displayGrid[NB_CASE_X * NB_CASE_Y] = {DisplayBox::VOID};
};
ope
#endif // __DEMINER_HPP__
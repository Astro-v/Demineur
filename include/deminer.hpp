#ifndef __DEMINER_HPP__
#define __DEMINER_HPP__

/* #### INCLUDE #### */
#include "constant.hpp"
#include <stdlib.h>     
#include <time.h>      

enum class Box { VOID = 0, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, HEIGHT = 8, BOMB = 9 };

Box& operator++( Box &b );

enum class DisplayBox { HIDE = 0, VOID = 1, ONE = 2, TWO = 3, THREE = 4, FOUR = 5, FIVE = 6, SIX = 7, SEVEN = 8, HEIGHT = 9, FLAG = 10, BOMB = 11 };

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
    void createMap(Position &pos);

private:
    void addBomb(Position &pos);
    void increase(int &pos);

    Box _grid[NB_CASE_X * NB_CASE_Y] = {Box::VOID};
    DisplayBox _displayGrid[NB_CASE_X * NB_CASE_Y] = {DisplayBox::VOID};
};

#endif // __DEMINER_HPP__
#include "deminer.hpp"

Box& operator++( Box &box )
{
    switch (box)
    {
        case Box::VOID: return box = Box::ONE;
        case Box::ONE: return box = Box::TWO;
        case Box::TWO: return box = Box::THREE;
        case Box::THREE: return box = Box::FOUR;
        case Box::FOUR: return box = Box::FIVE;
        case Box::FIVE: return box = Box::SIX;
        case Box::SIX: return box = Box::SEVEN;
        case Box::SEVEN: return box = Box::HEIGHT;
        case Box::HEIGHT: return box;
        case Box::BOMB: return box;
    }
}


Deminer::Deminer()
{
    // Providing a seed value
    srand (time(NULL));
}

Deminer::~Deminer()
{

}

void Deminer::createMap(Position &pos)
{
    Position pos;
    int count = 0;
    do
    {  
        pos.i = rand() % NB_CASE_X;
        pos.j = rand() % NB_CASE_Y;

        
    } while (count != 10);
}

void Deminer::addBomb(Position &pos)
{
    _grid[pos] = Box::BOMB;
    if (pos.i > 0) {_grid[Position {pos.i - 1, pos.j}];}
    if (pos.j > 0) {_grid[Position {pos.i, pos.j - 1}];}
    if (pos.i < NB_CASE_X - 1) {_grid[Position {pos.i + 1, pos.j}];}
    if (pos.j < NB_CASE_Y - 1) {_grid[Position {pos.i, pos.j + 1}];}
    if (pos.i > 0 && pos.j > 0) {_grid[Position {pos.i - 1, pos.j - 1}];}
    if (pos.j > 0 && pos.i < NB_CASE_X - 1) {_grid[Position {pos.i + 1, pos.j - 1}];}
    if (pos.i < NB_CASE_X - 1 && pos.j < NB_CASE_Y - 1) {_grid[Position {pos.i + 1, pos.j + 1}];}
    if (pos.j < NB_CASE_Y - 1 && pos.i > 0) {_grid[Position {pos.i + 1, pos.j + 1}];}
}


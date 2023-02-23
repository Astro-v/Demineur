/*
- Demineur -
main.cpp
Valentin Michel
21/02/2023
*/

/* #### INCLUDE #### */
#include <iostream>
#include <stdio.h>
#include "deminer.hpp"

/* #### CORE #### */
int main()
{
    Position pos {2, 1};
    int res = static_cast<int>(pos);
    std::cout << res << std::endl;
    return 0;
}
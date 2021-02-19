//
// Created by danilamstr on 16.11.2019.
//

#ifndef NEWTETRIS_BUNCH_H
#define NEWTETRIS_BUNCH_H

#include <vector>
#include "Figure.h"
#include "Figure.cpp"
using namespace std;

#include "Figure.h"

class Bunch {
public:
    Bunch();
    Figure* getFigure();
    void AddInBunch();
    bool canMoveY();
    bool canMoveX();
    vector<Block> bunchInCanvas;
    void clearLine(float y);

private:
    Figure* current;
};


#endif //NEWTETRIS_BUNCH_H

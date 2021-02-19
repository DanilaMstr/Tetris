//
// Created by danilamstr on 16.11.2019.
//

#ifndef NEWTETRIS_FIGURE_H
#define NEWTETRIS_FIGURE_H

#include <vector>
#include <GL/glut.h>
using namespace std;

struct Block
{
    float x;
    float y;
    vector<float > colors;
};

class Figure {
public:
    Figure();
    void reset();
    Block getBlock(int k);
    vector<Block>* getVectorBlocks();
    vector<Block> blocks;
    float maxX;
    float maX0;
    float maxY;

};


#endif //NEWTETRIS_FIGURE_H

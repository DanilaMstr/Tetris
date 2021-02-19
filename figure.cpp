//
// Created by danilamstr on 16.11.2019.
//

#include "Figure.h"

Figure::Figure() {
    maxY = 60.0;
    maxX = 240.0;
    maX0 = 0.0;
    Block bl1, bl2, bl3, bl4;

    bl1.x = 150.0;
    bl1.y = 630.0;
    bl1.colors = {0.5,0.5,0.5};

    bl2.x = 180.0;
    bl2.y = 630.0;
    bl2.colors = {0.5,0.5,0.5};

    bl3.x = 150.0;
    bl3.y = 600.0;
    bl3.colors = {0.5,0.5,0.5};

    bl4.x = 180.0;
    bl4.y = 600.0;
    bl4.colors = {0.5,0.5,0.5};

    blocks.push_back(bl1);
    blocks.push_back(bl2);
    blocks.push_back(bl3);
    blocks.push_back(bl4);
}

void Figure::reset() {
    blocks.clear();
    int k = rand() % 8;
    switch (k) {
        case 1:{
            maxY = 90.0;
            maxX = 240.0;
            maX0 = 0.0;
            Block bl1, bl2, bl3, bl4;

            bl1.x = 150.0;
            bl1.y = 630.0;
            bl1.colors = {1.0,0.0,0.0};

            bl2.x = 150.0;
            bl2.y = 600.0;
            bl2.colors = {1.0,0.0,0.0};

            bl3.x = 150.0;
            bl3.y = 570.0;
            bl3.colors = {1.0,0.0,0.0};

            bl4.x = 180.0;
            bl4.y = 600.0;
            bl4.colors = {1.0,0.0,0.0};

            blocks.push_back(bl1);
            blocks.push_back(bl2);
            blocks.push_back(bl3);
            blocks.push_back(bl4);
        }
            break;
        case 2:{
            maxY = 60.0;
            maxX = 210.0;
            maX0 = 0.0;
            Block bl1, bl2, bl3, bl4;

            bl1.x = 150.0;
            bl1.y = 630.0;
            bl1.colors = {1.0, 1.0, 0.0};

            bl2.x = 150.0;
            bl2.y = 600.0;
            bl2.colors = {1.0, 1.0, 0.0};

            bl3.x = 180.0;
            bl3.y = 600.0;
            bl3.colors = {1.0, 1.0, 0.0};

            bl4.x = 210.0;
            bl4.y = 600.0;
            bl4.colors = {1.0, 1.0, 0.0};


            blocks.push_back(bl1);
            blocks.push_back(bl2);
            blocks.push_back(bl3);
            blocks.push_back(bl4);
        }
            break;
        case 3:{
            maxY = 30.0;
            maxX = 210.0;
            maX0 = 0.0;
            Block bl1, bl2, bl3, bl4;

            bl1.x = 150.0;
            bl1.y = 600.0;
            bl1.colors = {1.0, 0.0, 1.0};

            bl2.x = 180.0;
            bl2.y = 600.0;
            bl2.colors = {1.0, 0.0, 1.0};

            bl3.x = 210.0;
            bl3.y = 600.0;
            bl3.colors = {1.0, 0.0, 1.0};

            bl4.x = 210.0;
            bl4.y = 630.0;
            bl4.colors = {1.0, 0.0, 1.0};

            blocks.push_back(bl1);
            blocks.push_back(bl2);
            blocks.push_back(bl3);
            blocks.push_back(bl4);
        }
            break;
        case 4:{
            maxY = 90.0;
            maxX = 270.0;
            maX0 = 30.0;
            Block bl1, bl2, bl3, bl4;

            bl1.x = 180.0;
            bl1.y = 630.0;
            bl1.colors = {0.0, 1.0, 1.0};

            bl2.x = 180.0;
            bl2.y = 600.0;
            bl2.colors = {0.0, 1.0, 1.0};

            bl3.x = 150.0;
            bl3.y = 600.0;
            bl3.colors = {0.0, 1.0, 1.0};

            bl4.x = 150.0;
            bl4.y = 570.0;
            bl4.colors = {0.0, 1.0, 1.0};

            blocks.push_back(bl1);
            blocks.push_back(bl2);
            blocks.push_back(bl3);
            blocks.push_back(bl4);
        }
            break;
        case 5:
        {
            maxY = 90.0;
            maxX = 240.0;
            maX0 = 0.0;
            Block bl1, bl2, bl3, bl4;

            bl1.x = 150.0;
            bl1.y = 630.0;
            bl1.colors = {0.0, 1.0, 0.0};

            bl2.x = 150.0;
            bl2.y = 600.0;
            bl2.colors = {0.0, 1.0, 0.0};

            bl3.x = 180.0;
            bl3.y = 600.0;
            bl3.colors = {0.0, 1.0, 0.0};

            bl4.x = 180.0;
            bl4.y = 570.0;
            bl4.colors = {0.0, 1.0, 0.0};

            blocks.push_back(bl1);
            blocks.push_back(bl2);
            blocks.push_back(bl3);
            blocks.push_back(bl4);
        }
            break;
        case 6:
        {
            maxY = 30.0;
            maxX = 180.0;
            maX0 = 0.0;
            Block bl1, bl2, bl3, bl4;

            bl1.x = 150.0;
            bl1.y = 630.0;
            bl1.colors = {0.0, 0.0, 1.0};

            bl2.x = 180.0;
            bl2.y = 630.0;
            bl2.colors = {0.0, 0.0, 1.0};

            bl3.x = 210.0;
            bl3.y = 630.0;
            bl3.colors = {0.0, 0.0, 1.0};

            bl4.x = 240.0;
            bl4.y = 630.0;
            bl4.colors = {0.0, 0.0, 1.0};

            blocks.push_back(bl1);
            blocks.push_back(bl2);
            blocks.push_back(bl3);
            blocks.push_back(bl4);
        }
            break;
        case 7:
        {
            maxY = 60.0;
            maxX = 240.0;
            maX0 = 0.0;
            Block bl1, bl2, bl3, bl4;

            bl1.x = 150.0;
            bl1.y = 630.0;
            bl1.colors = {0.5,0.5,0.5};

            bl2.x = 180.0;
            bl2.y = 630.0;
            bl2.colors = {0.5,0.5,0.5};

            bl3.x = 150.0;
            bl3.y = 600.0;
            bl3.colors = {0.5,0.5,0.5};

            bl4.x = 180.0;
            bl4.y = 600.0;
            bl4.colors = {0.5,0.5,0.5};

            blocks.push_back(bl1);
            blocks.push_back(bl2);
            blocks.push_back(bl3);
            blocks.push_back(bl4);
        }
            break;
    }
}

Block Figure::getBlock(int k) {
    return blocks[k];
}

vector<Block> *Figure::getVectorBlocks() {
    return &blocks;
}

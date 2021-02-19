//
// Created by danilamstr on 16.11.2019.
//

#ifndef NEWTETRIS_CANVAS_H
#define NEWTETRIS_CANVAS_H

#include <vector>
#include <GL/glut.h>
#include "Bunch.h"
#include "Bunch.cpp"

class Canvas {
public:
    Canvas(int argc, char **argv);
    void run();

private:
    static void gameOver();
    static void drawCanvas();
    static void drawLineY(float temp);
    static void drawLineX(float temp);
    static void Reshape(int Width, int Height);
    static Canvas* singleton;
    static Bunch *bunch;
    static void drawBlock(Block& block);
    static void display();
    static void timeF(int value);
    static void keyboard(unsigned char key, int x, int y);
};


#endif //NEWTETRIS_CANVAS_H

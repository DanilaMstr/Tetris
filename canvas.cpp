//
// Created by danilamstr on 16.11.2019.
//

#include "Canvas.h"

Canvas *Canvas::singleton = nullptr;
Bunch  *Canvas::bunch = nullptr;

Canvas::Canvas(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(500, 200);
    glutInitWindowSize(300,600);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Tetris");
    glClearColor(0.0,0.0,0.0,0.0);
}

void Canvas::run() {
    singleton = this;
    Bunch* newBunch = new Bunch;
    bunch = newBunch;

    glutDisplayFunc(display);
    glutReshapeFunc(Reshape);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(200, timeF, 0);
    glutMainLoop();
}

void Canvas::display() {
    glClear(GL_COLOR_BUFFER_BIT);
        for (int i = 0; i < singleton->bunch->bunchInCanvas.size(); i++) {
            drawBlock(singleton->bunch->bunchInCanvas[i]);
        }
        for (int j = 0; j < singleton->bunch->getFigure()->blocks.size(); j++)
            drawBlock(singleton->bunch->getFigure()->blocks[j]);
        drawCanvas();
        glFlush();
        glutSwapBuffers();
}

void Canvas::drawBlock(Block &block) {
    glColor3f(block.colors[0], block.colors[1], block.colors[2]);
    glBegin(GL_QUADS);
    glVertex2f(block.x,        block.y);
    glVertex2f(block.x + 30.0, block.y);
    glVertex2f(block.x + 30.0, block.y - 30.0);
    glVertex2f(block.x,        block.y - 30.0);
    glEnd();
}

void Canvas::Reshape(int Width, int Height) {
    if (Height == 0)
    {
        Height = 1;
    }

    glViewport(0, 0, (GLsizei)Width, (GLsizei)Height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, (GLdouble)Width, 0.0, (GLdouble)Height);
}

void Canvas::timeF(int value) {
    if(singleton->bunch->canMoveY())
    {
        singleton->bunch->getFigure()->blocks[0].y -= 30.0;
        singleton->bunch->getFigure()->blocks[1].y -= 30.0;
        singleton->bunch->getFigure()->blocks[2].y -= 30.0;
        singleton->bunch->getFigure()->blocks[3].y -= 30.0;
    } else
    {
        if (singleton->bunch->getFigure()->blocks[0].y == 630.0)
            exit(EXIT_SUCCESS);
        else
        {
            singleton->bunch->AddInBunch();
        }


    }
    glutPostRedisplay();  // Redraw windows
    glutTimerFunc(200, timeF, 0);
}

void Canvas::keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case '4':
        {
            if (singleton->bunch->canMoveX() &&
                    singleton->bunch->getFigure()->blocks[0].x > singleton->bunch->getFigure()->maX0){
                singleton->bunch->getFigure()->blocks[0].x -= 30.0;
                singleton->bunch->getFigure()->blocks[1].x -= 30.0;
                singleton->bunch->getFigure()->blocks[2].x -= 30.0;
                singleton->bunch->getFigure()->blocks[3].x -= 30.0;
            }
        }
            break;
        case '6':
        {
            if (singleton->bunch->canMoveX() &&
                    singleton->bunch->getFigure()->blocks[0].x < singleton->bunch->getFigure()->maxX){
                singleton->bunch->getFigure()->blocks[0].x += 30.0;
                singleton->bunch->getFigure()->blocks[1].x += 30.0;
                singleton->bunch->getFigure()->blocks[2].x += 30.0;
                singleton->bunch->getFigure()->blocks[3].x += 30.0;
            }
        }
            break;
        case 'q': case 'Q':
            exit(EXIT_SUCCESS);
            break;
    }
}

void Canvas::drawLineX(float temp) {
    temp = temp * 30.0;
    glLineWidth(2);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(temp, 0.0);
    glVertex2f(temp, 630.0);
    glEnd();
}

void Canvas::drawLineY(float temp) {
    temp = temp * 30.0;
    glLineWidth(2);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0,   temp);
    glVertex2f(300.0, temp);
    glEnd();
}

void Canvas::drawCanvas() {
    for (float i = 1.0; i < 10.0; i++) {
        drawLineX(i);
    }
    for (float i = 1.0; i < 21.0; i++)
    {
        drawLineY(i);
    }
}

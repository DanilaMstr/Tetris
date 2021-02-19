//
// Created by danilamstr on 16.11.2019.
//

#include "Bunch.h"

Bunch::Bunch() {
    Figure *figure = new Figure;
    current = figure;
}

Figure *Bunch::getFigure() {
    return current;
}

void Bunch::AddInBunch() {
    for (int i = 0; i < current->blocks.size(); i++)
    bunchInCanvas.push_back(current->blocks[i]);

    clearLine(30.0);
    current->reset();
}

bool Bunch::canMoveY() {
  if (current->blocks[0].y - 30.0 < current->maxY)
      return false;
  else
  {
      for (int i = 0; i < current->blocks.size(); i++) {
          for (int j = 0; j < bunchInCanvas.size(); ++j) {
              if(current->blocks[i].y - 30.0 == bunchInCanvas[j].y &&
              current->blocks[i].x == bunchInCanvas[j].x)
                  return false;
          }
      }
  }
    return true;
}

bool Bunch::canMoveX() {
    for (int i = 0; i < current->blocks.size(); i++) {
        for (int j = 0; j < bunchInCanvas.size(); j++) {
            if((current->blocks[i].x - 30.0 == bunchInCanvas[j].x &&
            current->blocks[i].y == bunchInCanvas[j].y) ||
            (current->blocks[i].x + 30.0 == bunchInCanvas[j].x &&
            current->blocks[i].y == bunchInCanvas[j].y))
                return false;
            }
        }
    return true;
}

void Bunch::clearLine(float y) {
    for (int i = 0; i < bunchInCanvas.size() + 1; i++)
        if (bunchInCanvas[i].y == y)
            bunchInCanvas.erase(bunchInCanvas.begin() + i);
}

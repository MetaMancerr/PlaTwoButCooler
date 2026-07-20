#ifndef DOTSANDBOXES_H
#define DOTSANDBOXES_H

#include "../Game.h"

class DotsAndBoxes : public Game
{
public:
    DotsAndBoxes();

    void start() override;
    bool isGameOver() override;
    QString getWinner() override;
};

#endif // DOTSANDBOXES_H

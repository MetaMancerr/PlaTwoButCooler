#ifndef GAME_H
#define GAME_H

#include <QString>

class Game
{
public:
    virtual void start() = 0;
    virtual bool isGameOver() = 0;
    virtual QString getWinner() = 0;

    virtual ~Game() = default;
};

#endif
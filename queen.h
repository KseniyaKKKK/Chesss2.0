#ifndef QUEEN_H
#define QUEEN_H
#include <chesspiece.h>

class Queen: public ChessPiece, public QGraphicsRectItem
{
public:
    Queen(int x, int y, bool color);
    QImage *whiteImage = new QImage(":/images/queen-white.png");
    QImage *blackImage = new QImage(":/images/queen-black.png");
    bool color;
};

#endif // QUEEN_H

//
// Created by xilef on 1/9/2026.
//

#ifndef GRAPHICUS__02_CARRÉ_H
#define GRAPHICUS__02_CARRÉ_H
#include "Rectangle.h"


class Carré :public  Rectangle{
    public:
        Carré();
        Carré(float length, Coordonnee ancor);
        void SetLength(float length);
        void SetWidth(float width);
        float GetLength();
        float GetWidth();



};


#endif //GRAPHICUS__02_CARRÉ_H
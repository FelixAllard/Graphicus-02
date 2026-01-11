//
// Created by xilef on 1/9/2026.
//

#ifndef GRAPHICUS__02_RECTANGLE_H
#define GRAPHICUS__02_RECTANGLE_H
#include "Forme.h"


class Rectangle :Forme{
    public:
    Rectangle(float length, float width);
        Rectangle(float length, float width, Coordonnee ancor);
        void SetLength(float length);
        void SetWidth(float width);
        float GetLength();
        float GetWidth();


    private:
        float length__;
        float width__;

};


#endif //GRAPHICUS__02_RECTANGLE_H
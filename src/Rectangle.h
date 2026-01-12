//
// Created by xilef on 1/9/2026.
//

#ifndef GRAPHICUS__02_RECTANGLE_H
#define GRAPHICUS__02_RECTANGLE_H
#include "Forme.h"


class Rectangle : public Forme{
    public:
        Rectangle();
        Rectangle(float length, float width);
        Rectangle(float length, float width, Coordonnee ancor);
        void virtual SetLength(float length);
        void virtual SetWidth(float width);
        float virtual GetLength();
        float virtual GetWidth();
        double aire();


    private:

        float length__;
        float width__;

};


#endif //GRAPHICUS__02_RECTANGLE_H
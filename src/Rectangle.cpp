//
// Created by xilef on 1/9/2026.
//

#include "Rectangle.h"


Rectangle::Rectangle(float length, float width)
{
    length__ = length;
    width__ = width;
    ancrage = Coordonnee{0,0 };
}
Rectangle::Rectangle(float length, float width, Coordonnee ancor)
{

    length__ = length;
    width__ = width;
    ancrage = ancor;
}


void Rectangle::SetLength(float length) {
    length__ = length;
}

void Rectangle::SetWidth(float width) {
    width__ = width;
}

float Rectangle::GetLength() {
    return length__;
}

float Rectangle::GetWidth() {
    return width__;
}

//
// Created by xilef on 1/9/2026.
//

#include "Carré.h"

Carré::Carré() {
    Rectangle::SetWidth(1);
    Rectangle::SetLength(1);
    Rectangle::setAncrage(Coordonnee{0,0});
}
Carré::Carré(float length, Coordonnee ancor) {
    Rectangle::SetWidth(length);
    Rectangle::SetLength(length);
}
//Length and width are the same, so we set them both
void Carré::SetLength(float length) {
    Rectangle::SetLength(length);
    Rectangle::SetWidth(length);
}

void Carré::SetWidth(float width) {
    Rectangle::SetLength(width);
    Rectangle::SetWidth(width);
}


float Carré::GetLength() {

    return Rectangle::GetLength();
}

float Carré::GetWidth() {
    return Rectangle::GetWidth();
}

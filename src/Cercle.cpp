//
// Created by xilef on 1/9/2026.
//

#include "Cercle.h"
#include <numbers>
Cercle::Cercle() {
    rayon__ = 1;
    ancrage = Coordonnee{0,0};
}

Cercle::Cercle(float rayon, Coordonnee ancor) {
    rayon__ = rayon;
    ancrage = ancor;
}

void Cercle::SetRayon(float rayon) {
    rayon__ = rayon;
}

float Cercle::GetRayon() {
    return rayon__;
}

Coordonnee Cercle::GetAncor() {
    return ancrage;
}

void Cercle::SetAncor(Coordonnee ancor) {
    ancrage = ancor;
}
double Cercle::aire() {
    double area = std::numbers::pi * rayon__ * rayon__;
    return area;
}

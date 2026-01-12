//
// Created by xilef on 1/9/2026.
//

#include "Cercle.h"

Cercle::Cercle() {
    rayon__ = 1;
    ancrage = Coordonnee{0,0};
}

Cercle::Cercle(float rayon, Coordonnee ancor) {
    rayon__ = rayon;
    ancrage = ancor;
}

void Cercle::SetRayon(float rayon) {
}

float Cercle::GetRayon() {
}

Coordonnee Cercle::GetAncor() {
}

void Cercle::SetAncor(Coordonnee ancor) {
}

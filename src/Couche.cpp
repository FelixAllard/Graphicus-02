//
// Created by xilef on 1/11/2026.
//

#include "Couche.h"

Couche::Couche() {
}

bool Couche::AddForme(Forme *forme) {
    if (layerState__!= LayerState::active)
        return false;
    if (!forme) return false;
    formes.push_back(forme);
    return true;
}

Forme * Couche::RemoveForme(size_t index) {
    if (layerState__!= LayerState::active)
        return nullptr;

    if (index >= formes.size()) return nullptr;

    Forme* f = formes[index];
    formes.erase(formes.begin() + index);
    return f; // PAS delete
}

vector<Forme *> Couche::GetFormes() {
    return formes;
}

Forme * Couche::GetForme(size_t index) {

    if (index >= formes.size()) return nullptr;
    return formes[index];
}

double Couche::GetArea() {
    double area = 0;
    for (size_t i = 0; i < formes.size(); i++) {
        area += formes[i]->aire();
    }
    return area;
}

bool Couche::MoveFormes(int translationX, int translationY) {
    if (layerState__!= LayerState::active)
        return false;
    for (size_t i = 0; i < formes.size(); i++) {
        Coordonnee previousCoordinate =formes[i]->getAncrage();
        previousCoordinate.x += translationX;
        previousCoordinate.y += translationY;
        formes[i]->setAncrage(previousCoordinate);
    }
    return true;
}

bool Couche::ResetLayer() {
    try {
        for (Forme* f : formes) delete f;
        formes.clear();
        layerState__ = LayerState::initialisée;
        return true;
    }
    catch (...) {
        return false;
    }
    return true;

}

bool Couche::ChangeLayerState(LayerState layerState){


    try {
        layerState__ = layerState;
    }
    catch (...) {
        return false;
    }
    return true;
}


void Couche::DisplayLayer() {
    std::cout << "Layer state: ";
    switch(layerState__) {
        case LayerState::initialisée: std::cout << "Initialized"; break;
        case LayerState::active: std::cout << "Active"; break;
        case LayerState::inactive: std::cout << "Inactive"; break;
    }
    std::cout << "\nForms:\n";
    for (Forme* f : formes) {
        f->Display(); // assuming Forme has Display()
    }
}



Couche::~Couche() {
    ResetLayer();
}


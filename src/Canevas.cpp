//
// Created by xilef on 1/11/2026.
//

#include "Canevas.h"
#include "Canevas.h"
#include <iostream>

Canevas::Canevas(size_t nombreCouches) : indexCoucheActive(0) {
    couches.resize(nombreCouches);
    for (size_t i = 0; i < nombreCouches; ++i) {
        couches[i] = new Couche();
        if (i == 0)
            couches[i]->ChangeLayerState(LayerState::active);
        else
            couches[i]->ChangeLayerState(LayerState::initialisée);
    }
}

Canevas::~Canevas() {
    for (Couche* c : couches)
        delete c;
}

bool Canevas::ResetCouche(size_t index) {
    if (index >= couches.size()) return false;

    bool wasActive = (index == indexCoucheActive);
    couches[index]->ResetLayer();

    if (!wasActive)
        couches[index]->ChangeLayerState(LayerState::initialisée);

    return true;
}

bool Canevas::ResetCanevas() {
    for (size_t i = 0; i < couches.size(); ++i) {
        ResetCouche(i);
    }
    // Make sure the active layer remains active
    couches[indexCoucheActive]->ChangeLayerState(LayerState::active);
    return true;
}

bool Canevas::ActiverCouche(size_t index) {
    if (index >= couches.size()) return false;

    // deactivate current active layer
    couches[indexCoucheActive]->ChangeLayerState(LayerState::initialisée);

    indexCoucheActive = index;
    couches[indexCoucheActive]->ChangeLayerState(LayerState::active);
    return true;
}

bool Canevas::AjouterForme(Forme* f) {
    if (!f) return false;
    return couches[indexCoucheActive]->AddForme(f);
}

bool Canevas::RetirerForme(size_t index) {
    Forme* f = couches[indexCoucheActive]->RemoveForme(index);
    return f != nullptr;
}

double Canevas::AireTotale() const {
    double total = 0;
    for (Couche* c : couches) {
        total += c->GetArea();
    }
    return total;
}

bool Canevas::Translater(int dx, int dy) {
    return couches[indexCoucheActive]->MoveFormes(dx, dy);
}

void Canevas::Afficher(std::ostream& os) const {
    os << "Canevas avec " << couches.size() << " couches\n";
    for (size_t i = 0; i < couches.size(); ++i) {
        os << "Couche " << i << ":\n";
        couches[i]->DisplayLayer();
        os << "\n";
    }
}

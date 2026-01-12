//
// Created by xilef on 1/11/2026.
//

#include "Vecteur.h"

Vecteur::Vecteur() : taille(0), capacite(1) {
    data = new Forme*[capacite]; // capacité initiale = 1
}

Vecteur::~Vecteur() {
    Vider();                     // détruit toutes les formes
    delete[] data;               // libère le tableau
}

bool Vecteur::Ajouter(Forme* f) {
    if (!f) return false;

    if (taille >= capacite) {
        DoublerCapacite();       // double la capacité si nécessaire
    }

    data[taille++] = f;
    return true;
}

Forme* Vecteur::Retirer(size_t index) {
    if (index >= taille) return nullptr;

    Forme* f = data[index];

    // décale tous les éléments après index
    for (size_t i = index; i < taille - 1; ++i) {
        data[i] = data[i + 1];
    }

    --taille;
    return f; // la forme n'est pas détruite
}

Forme* Vecteur::Obtenir(size_t index) {
    if (index >= taille) return nullptr;
    return data[index];
}

void Vecteur::Vider() {
    for (size_t i = 0; i < taille; ++i) {
        delete data[i];          // détruit les formes
    }
    taille = 0;
}

bool Vecteur::EstVide() const {
    return taille == 0;
}

size_t Vecteur::Taille() const {
    return taille;
}

size_t Vecteur::Capacite() const {
    return capacite;
}

void Vecteur::DoublerCapacite() {
    capacite *= 2;
    Forme** nouveau = new Forme*[capacite];

    // copie les anciennes formes
    for (size_t i = 0; i < taille; ++i) {
        nouveau[i] = data[i];
    }

    delete[] data;
    data = nouveau;
}

void Vecteur::Afficher(std::ostream& os) const {
    os << "Vecteur (taille=" << taille << ", capacite=" << capacite << ")\n";
    for (size_t i = 0; i < taille; ++i) {
        data[i]->Display(); // suppose que Forme a Display()
    }
}
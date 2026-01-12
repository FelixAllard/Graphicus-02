//
// Created by xilef on 1/11/2026.
//

#ifndef GRAPHICUS__02_VECTEUR_H
#define GRAPHICUS__02_VECTEUR_H


#include <iostream>
#include "forme.h"

class Vecteur {
public:
    Vecteur();                  // constructeur
    ~Vecteur();                 // destructeur

    bool Ajouter(Forme* f);     // ajouter une forme
    Forme* Retirer(size_t index); // retirer une forme
    Forme* Obtenir(size_t index); // obtenir une forme

    void Vider();               // vide le vecteur (et détruit les formes)
    bool EstVide() const;       // vrai si vide
    size_t Taille() const;      // nombre d'éléments
    size_t Capacite() const;    // capacité actuelle

    void Afficher(std::ostream& os) const;

private:
    void DoublerCapacite();     // double la capacité

    Forme** data;               // tableau dynamique de Forme*
    size_t taille;              // nombre actuel d'éléments
    size_t capacite;            // nombre max d'éléments
};


#endif //GRAPHICUS__02_VECTEUR_H
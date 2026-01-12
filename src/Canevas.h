//
// Created by xilef on 1/11/2026.
//

#ifndef GRAPHICUS__02_CANEVAS_H
#define GRAPHICUS__02_CANEVAS_H

#include <vector>
#include "Couche.h"

class Canevas {
public:
    Canevas(size_t nombreCouches); // constructeur avec N couches
    ~Canevas();

    bool ResetCouche(size_t index);
    bool ResetCanevas();

    bool ActiverCouche(size_t index);

    bool AjouterForme(Forme* f);
    bool RetirerForme(size_t index);

    double AireTotale() const;

    bool Translater(int dx, int dy);

    void Afficher(std::ostream& os) const;

private:
    std::vector<Couche*> couches;
    size_t indexCoucheActive;
};



#endif //GRAPHICUS__02_CANEVAS_H
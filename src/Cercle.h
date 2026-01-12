//
// Created by xilef on 1/9/2026.
//

#ifndef GRAPHICUS__02_CERCLE_H
#define GRAPHICUS__02_CERCLE_H
#include "Forme.h"


class Cercle : public Forme{
    public:
        Cercle();
        Cercle(float rayon, Coordonnee ancor);
        void SetRayon(float rayon);
        float GetRayon();
        Coordonnee GetAncor();
        void SetAncor(Coordonnee ancor);
    private:
        float rayon__;
};


#endif //GRAPHICUS__02_CERCLE_H
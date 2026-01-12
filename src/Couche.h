//
// Created by xilef on 1/11/2026.
//

#ifndef GRAPHICUS__02_COUCHE_H
#define GRAPHICUS__02_COUCHE_H

#include <vector>
#include "forme.h"
#include "ObjectType/LayerState.h"
class Couche {

    public:
        Couche();

        /// Elle permet l’ajout d’une forme à la suite des autres formes déjà présente.
        /// @param forme La forme à ajouter est spécifiée par son pointeur.
        /// @return Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
        bool AddForme(Forme* forme);

        /// Elle permet le retrait d’une forme
        /// @param index La forme à retirer est spécifiée par son index dans le vecteur.
        ///@return Si l’opération est une réussite, alors la valeur de retour est le pointeur sur la forme en question. Si l’opération
        ///est un échec, comme avec un index invalide, un pointeur nul est retourné. La forme retirée de la couche
        ///n’est pas détruite.
        Forme* RemoveForme(size_t index);

        ///
        /// @return
        vector<Forme*> GetFormes();


        /// Elle permet d’obtenir une forme stockée. La forme à obtenir est spécifiée par son index dans le vecteur.
        /// @param index Index in the vector
        /// @return Si l’opération est une réussite, alors la valeur de retour est le pointeur sur la forme en question. Si
        ///l’opération est un échec, comme avec un index invalide, un pointeur nul est retourné. La forme n’est pas
        ///retirée du vecteur et elle n’est pas détruite.
        Forme* GetForme(size_t index);

        /// Elle offre la possibilité d’obtenir l’aire totale. L’aire totale de la couche est définie comme la somme des
        ///aires des formes qui la compose.
        /// @return  La valeur de retour, l’aire totale, est un nombre réel.
        double GetArea();
    ///Elle offre la possibilité de translater. La translation d’une couche est réalisée en faisant la translation de tout les formes de la couche.
    ///@param translationX Les valeurs de translation horizontale
    ///@param translationY Les valeurs de translation verticale
    ///@return  Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
        bool MoveFormes(int translationX, int translationY);



        /// Elle offre la possibilité de réinitialiser. L’état de la couche est donc ramené à son état initial, comme lors de sa création. Cette opération vide donc le vecteur et toutes les formes sont détruites.
        /// @return Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
        bool ResetLayer() ;
        /// Elle offre la possibilité de changer l’état.  L’état désiré est spécifié en paramètre.  Les détails sur les états et la manière dont ils affectent les opérations de la couche sont donnés un peu plus loin.
        ///@param layerState Les états possibles d’une couche sont : initialisée, active et inactive.
        ///@return Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
        bool ChangeLayerState(LayerState layerState);

        ///Elle permet l’affichage du contenu, donc de toutes ses formes. L’endroit à afficher (le flot) est spécifié en
        ///paramètre.
        void DisplayLayer();
        ~Couche();
    private:
        std::vector<Forme*> formes;
        LayerState layerState__;
};


#endif //GRAPHICUS__02_COUCHE_H
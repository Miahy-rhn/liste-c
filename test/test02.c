#include <stdio.h>
#include <stdlib.h>
#include "../lib/liste-c.h"

// Fonction pour afficher la liste reçue en argument
void affiche(ListeC liste) {
    int taille = sizeLC(liste);
    printf("Contenu de la liste (taille %d) : ", taille);
    
    for (int i = 0; i < taille; i++) {
        printf("%d", getLC(liste, i));
        if (i < taille - 1) {
            printf(", "); // Ajoute une virgule entre les éléments
        }
    }
    
}

int main() {
    // 1. Création de la liste
    ListeC maListe = createLC();
    
    // 2. Remplissage avec 32, 24, 5 et 7
    addLC(maListe, 32);
    addLC(maListe, 24);
    addLC(maListe, 5);
    addLC(maListe, 7);
    
    // 3. Affichage
    printf("Test 02 : Manipulation de la liste\n");
    affiche(maListe);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "../lib/liste-c.h"

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
    // Initialisation identique à test02
    ListeC maListe = createLC();
    addLC(maListe, 32);
    addLC(maListe, 24);
    addLC(maListe, 5);
    addLC(maListe, 7);
    printf("Liste initiale : ");
    affiche(maListe);

    // 1. Remplacer la valeur à la position 1 par -15
    replaceLC(maListe, -15, 1);
    printf("Après remplacement (pos 1 par -15) : ");
    affiche(maListe);

    // 2. Insérer 0 à la pos 2, puis 64 à la pos 1
    insertLC(maListe, 0, 2);
    insertLC(maListe, 64, 1);
    printf("Après insertions (0 à pos 2, 64 à pos 1) : ");
    affiche(maListe);

    // 3. Supprimer la valeur à la position 3
    removeLC(maListe, 3);
    printf("Après suppression (valeur à pos 3) : ");
    affiche(maListe);

    return 0;
}
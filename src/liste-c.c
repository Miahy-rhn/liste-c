#include "liste-c.h"
#include <stdlib.h> 

/**
 * Structure interne d'un noeud de la liste
 */
struct st_nodeLC {
    int value;                // La donnée stockée (entier)
    struct st_nodeLC *next;   // Pointeur vers le noeud suivant
};

/**
 * Alias de type pour manipuler des pointeurs de noeuds plus facilement
 */
typedef struct st_nodeLC * NodeLC;


struct st_listeC {
    NodeLC head;    // Pointeur vers le premier nœud de la liste
    int size;       // Champ ajouté pour avoir la taille en temps constant O(1)
};
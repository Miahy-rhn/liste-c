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

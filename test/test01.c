#include <stdio.h>
#include <stdlib.h>
#include "../lib/liste-c.h"

int main() {
    // On appelle la fonction versionLC() définie dans le header
    printf("Version de la librairie liste-c : %s\n", versionLC());
    
    return 0;
}
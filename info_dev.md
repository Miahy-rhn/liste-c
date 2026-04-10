# Réimplémentation de la librairie liste-c

## Intro
Ce projet consiste en une réécriture complète de la librairie **liste-c**. 

### Pourquoi cette réimplémentation ?
Lors de tests de performance et de fiabilité effectués avec l'outil `AddressSanitizer` (cible `bench_test02`), il a été mis en évidence que la version originale de la librairie ne permet pas une gestion complète du cycle de vie de la mémoire. 

L'absence d'une fonction de libération (type `deleteLC`) provoque des fuites de mémoire systématiques à la fin des programmes. Cette nouvelle version vise à :
* Intégrer une gestion rigoureuse de la mémoire.
* Ajouter la fonction `deleteLC(...)` pour libérer proprement les listes.
* Optimiser les performances globales de la structure.

### Dépôt distant
Le suivi du développement est disponible ici : https://github.com/Miahy-rhn/liste-c/tree/dev

## La directive #pragma once

Lors de la réimplémentation, la directive `#pragma once` a été maintenue en tête du fichier `liste-c.h`. Son rôle est crucial pour la compilation :

* **Éviter les inclusions multiples :** Dans un projet C, plusieurs fichiers `.c` peuvent inclure le même fichier `.h`. Sans protection, le compilateur lirait plusieurs fois les mêmes définitions de structures ou de fonctions, provoquant des erreurs de type "redefinition of...".
* **Optimisation :** Cette directive indique au préprocesseur de ne lire le fichier qu'une seule fois, même s'il est appelé plusieurs fois dans la chaîne de compilation. Cela accélère légèrement le temps de compilation.
* **Modernité :** Bien que non standard (contrairement aux traditionnels `#ifndef`, `#define`, `#endif`), elle est supportée par la quasi-totalité des compilateurs modernes (GCC, Clang, MSVC) et est plus simple à écrire, évitant les erreurs de frappe dans les noms de macros.
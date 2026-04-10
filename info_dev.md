# Réimplémentation de la librairie liste-c

## Introduction
Ce projet consiste en une réécriture complète de la librairie **liste-c**. 

### Pourquoi cette réimplémentation ?
Lors de tests de performance et de fiabilité effectués avec l'outil `AddressSanitizer` (cible `bench_test02`), il a été mis en évidence que la version originale de la librairie ne permet pas une gestion complète du cycle de vie de la mémoire. 

L'absence d'une fonction de libération (type `deleteLC`) provoque des fuites de mémoire systématiques à la fin des programmes. Cette nouvelle version vise à :
* Intégrer une gestion rigoureuse de la mémoire.
* Ajouter la fonction `deleteLC(...)` pour libérer proprement les listes.
* Optimiser les performances globales de la structure.

### Dépôt distant
Le suivi du développement est disponible ici : https://github.com/Miahy-rhn/liste-c/tree/dev
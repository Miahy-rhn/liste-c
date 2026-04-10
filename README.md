## La librairie : ListeC

Une implémentation des listes chainées en C.


# Fork Avril 2026

Cette version de la librairie est un fork de la librairie originale.

* **Dépôt d'origine** : https://github.com/Miahy-rhn/liste-c.git
* **État du projet** : En cours de réimplémentation complète pour corriger des problèmes de gestion mémoire (leaks).
* **Détails techniques** : Pour plus d'informations sur les motivations et les choix techniques de cette réécriture, veuillez consulter le fichier [info_dev.md](info_dev.md).

## API de la librairie liste-c

L'API permet de manipuler une liste dynamique d'entiers. Voici le détail des fonctions disponibles :

### Gestion de la mémoire
* **createLC()** : Alloue dynamiquement la structure de contrôle de la liste. Doit être impérativement libérée par `deleteLC`.
* **deleteLC(liste)** : Parcourt la liste pour libérer chaque maillon ainsi que la structure principale. C'est la solution aux fuites mémoire identifiées précédemment.

### Consultation
* **versionLC()** : Utile pour vérifier la compatibilité et l'origine de la librairie (actuellement en phase de réimplémentation).
* **sizeLC(liste)** : Donne la taille actuelle. Pratique pour les boucles de parcours.
* **getLC(liste, index)** : Accède à une donnée. Attention, l'index doit être valide.

### Manipulation
* **addLC(liste, valeur)** : L'opération de base pour remplir la liste par la fin.
* **insertLC / replaceLC / removeLC** : Permettent un contrôle précis sur la structure en fonction de l'index spécifié.
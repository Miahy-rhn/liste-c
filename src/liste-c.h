#pragma once
#include <stdlib.h>

char* versionLC();

struct st_listeC;
typedef struct st_listeC * ListeC;

ListeC createLC();					
int sizeLC(ListeC liste);
void addLC(ListeC liste, int value);	
int getLC(ListeC liste, int pos);	

void replaceLC(ListeC liste, int value, int pos);	
void insertLC(ListeC liste, int value, int pos);	
void removeLC(ListeC liste, int pos);

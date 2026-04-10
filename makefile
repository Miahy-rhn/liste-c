# Chemins
LIB_DIR = lib
TEST_DIR = test
SRC_DIR = src  # Nouveau dossier source

CC = gcc
CFLAGS = -Wall -Wextra -I$(SRC_DIR) -I$(LIB_DIR)

# On définit l'objet de notre nouvelle implémentation
NEW_OBJ = $(SRC_DIR)/liste-c.o
# On garde l'ancien pour comparaison si besoin
OLD_OBJ = $(LIB_DIR)/liste-c.o

EXECS = test01 test02 test03

all: $(EXECS)

# Règle pour compiler notre nouvelle implémentation
$(SRC_DIR)/liste-c.o: $(SRC_DIR)/liste-c.c $(SRC_DIR)/liste-c.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/liste-c.c -o $(SRC_DIR)/liste-c.o

# On modifie les tests pour qu'ils utilisent NOTRE nouvel objet
test01: $(TEST_DIR)/test01.c $(NEW_OBJ)
	$(CC) $(CFLAGS) $(TEST_DIR)/test01.c $(NEW_OBJ) -o test01

test02: $(TEST_DIR)/test02.c $(NEW_OBJ)
	$(CC) $(CFLAGS) $(TEST_DIR)/test02.c $(NEW_OBJ) -o test02

test03: $(TEST_DIR)/test03.c $(NEW_OBJ)
	$(CC) $(CFLAGS) $(TEST_DIR)/test03.c $(NEW_OBJ) -o test03

# Exécution de tous les tests à la suite
test: all
	@echo "--- Lancement du Test 01 ---"
	./test01
	@echo "\n--- Lancement du Test 02 ---"
	./test02
	@echo "\n--- Lancement du Test 03 ---"
	./test03


# Nouvelle cible avec Address Sanitizer
bench_test02: $(TEST_DIR)/test02.c $(LIB_OBJ)
	$(CC) $(CFLAGS) -g -fsanitize=address $(TEST_DIR)/test02.c $(LIB_OBJ) -o bench_test02

# Mettre à jour le clean pour supprimer aussi cet exécutable
clean:
	rm -f $(EXECS) bench_test02


# Aide pour l'utilisateur
help:
	@echo "Possibilités offertes par ce Makefile :"
	@echo "  make         : Compile les trois programmes (test01, test02, test03)"
	@echo "  make test    : Compile et lance l'exécution de tous les tests"
	@echo "  make bench_test02 : Compile test02 avec détection de fuites mémoire"
	@echo "  make clean   : Supprime les exécutables générés"
	@echo "  make help    : Affiche ce message d'aide"
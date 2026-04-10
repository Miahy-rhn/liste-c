# Chemins
LIB_DIR = lib
TEST_DIR = test

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -I$(LIB_DIR)

# Cibles
all: test01

# Compilation de l'exécutable test01
# On lie directement le fichier objet .o
test01: $(TEST_DIR)/test01.c $(LIB_DIR)/liste-c.o
	$(CC) $(CFLAGS) $(TEST_DIR)/test01.c $(LIB_DIR)/liste-c.o -o test01

# Règle pour lancer le test
test: test01
	./test01

# Nettoyage des fichiers générés
clean:
	rm -f test01
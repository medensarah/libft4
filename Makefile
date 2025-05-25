
# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = .

# Règle par défaut
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library created: $(NAME)"

# Compilation des fichiers sources
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

# Nettoyage des fichiers objets
clean:
	@rm -f $(OBJS)
	@echo "Cleaned objects"

# Nettoyage complet (objets + bibliothèque)
fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned all"

# Recréer la bibliothèque
re: fclean all
	@echo "Rebuild complete"

# Compilation des fichiers de test
test:
	@$(CC) $(CFLAGS) $(SRCS) -o test
	@echo "Test executable created"

# Règle pour vérifier les fuites mémoire
leaks:
	@valgrind --leak-check=full --show-leak-kinds=all ./test

.PHONY: all clean fclean re test leaks

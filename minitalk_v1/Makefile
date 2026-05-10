CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I inc -I inc/libft -I inc/printf/src

LIBFT_DIR   = inc/libft
PRINTF_DIR  = inc/printf/src

LIBFT       = $(LIBFT_DIR)/libft.a
PRINTF      = $(PRINTF_DIR)/libftprintf.a

SERVER  = server
CLIENT  = client

SRC_S   = src/server.c
SRC_C   = src/client.c
HEADER  = inc/minitalk.h

all: $(LIBFT) $(PRINTF) $(SERVER) $(CLIENT)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(SERVER): $(SRC_S) $(HEADER) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -o $(SERVER) $(SRC_S) $(LIBFT) $(PRINTF)

$(CLIENT): $(SRC_C) $(HEADER) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -o $(CLIENT) $(SRC_C) $(LIBFT) $(PRINTF)

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean

fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean
	$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re

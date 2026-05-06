CC = cc
CFLAGS = -Wall -Wextra -Werror -I inc

FILES = 

SERVER = server
CLIENT = client

SRC_S = src/server.c
SRC_C = src/client.c
HEADER = inc/minitalk.h

all: $(SERVER) $(CLIENT)

$(SERVER): $(SRC_S)
		$(CC) $(CFLAGS) -o $(SERVER) $(SRC_S)

$(CLIENT): $(SRC_C)
		$(CC) $(CFLAGS) -o $(CLIENT) $(SRC_C)

clean:
		@echo "No .o Files"

fclean: clean
		$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re
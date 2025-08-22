CC      := gcc
CFLAGS  := -Wall -Wextra -O2 -std=c11
BIN     := pin

SRC := main.c storage.c
OBJ := $(SRC:.c=.o)

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BIN)


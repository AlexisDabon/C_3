CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11

SRCS = 01_crypto_alert.c \
       02_crypto_id.c \
       03_crypto_vol.c \
       04_crypto_portefeuille.c 

EXECS = $(SRCS:.c=)

all: $(EXECS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECS)

re: clean all

.PHONY: all clean re

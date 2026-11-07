CC := gcc
CFLAGS := -Wall -Wextra -Werror
PGDIR := code
SRCS := $(PGDIR)/calculator.c $(PGDIR)/guessing_game.c $(PGDIR)/program_loader.c $(PGDIR)/average.c $(PGDIR)/transformations.c
OBJS := $(SRCS:.c=.o)

.PHONY: build clean

build: program_loader

program_loader: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

/code/%.o: /code/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJS) program_loader program_loader.exe

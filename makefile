CC := gcc
PGDIR := code
SRCS := $(PGDIR)/calculator.c $(PGDIR)/guessing_game.c $(PGDIR)/program_loader.c $(PGDIR)/average.c
OBJS := $(SRCS:.c=.o)

.PHONY: build clean

build: program_loader

program_loader: $(OBJS)
	$(CC) -o $@ $^

/code/%.o: /code/%.c
	$(CC) -c -o $@ $<

clean:
	rm -rf $(OBJS) program_loader program_loader.exe

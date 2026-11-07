CC := gcc
CFLAGS := -Wall -Wextra -Werror
PGDIR := code
SRCS := $(wildcard $(PGDIR)/*.c)
OBJS := $(SRCS:.c=.o)

.PHONY: build clean

build: program_loader

program_loader: $(OBJS)
	$(CC) $(CFLAGS) -lncurses -o $@ $^

/code/%.o: /code/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJS) program_loader program_loader.exe

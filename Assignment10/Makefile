CC=gcc
CFLAGS=-z execstack -fno-stack-protector -fno-pie -w -O0 -m32 -static -D_FORTIFY_SOURCE=0

objects = exploitme
all: $(objects)

$(objects): %: %.c
        $(CC) $(CFLAGS) -o $@ $<

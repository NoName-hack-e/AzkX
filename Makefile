

sources = $(wildcard src/*.c)

obj = $(sources:.c=.o)

exec = src/AzkX.c

out = out/AzkX.o




$(exec): $(objects)
	gcc $(objects) -o $(out) $(exec)

%.o: %.c include/%.h
	gcc -o out/$(obj) src/$(obj)

install:
	make
	cp ./hello.out /out
clean:
	-rm out/*.o
	-rm *.out
	-rm *.o
	-rm src/*.o
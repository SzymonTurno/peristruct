.PHONY: all clean

all: dev.h
	./generator/check_header.sh regs dev

clean:
	rm -f dev.h

dev.h:
	./generator/gen_header.sh dev

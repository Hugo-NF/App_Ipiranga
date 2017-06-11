PRINCIPAL=main

IDIR =../include
CC=g++
EXT = cpp
CFLAGS=-Wall -g -fprofile-arcs -ftest-coverage -I $(IDIR) 

GCOVDIR=gcov_files
ODIR=obj
LDIR =../lib

LIBS=-lm ../lib/libgtest.a ../lib/libsqlite3.a -lgtest -lpthread -ldl -l sqlite3

_DEPS = User.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = $(PRINCIPAL).o User.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.$(EXT) $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(PRINCIPAL): $(OBJ)
	$(CC) -o $@ $^ $(LIBS) $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(ODIR)/* *~ core $(INCDIR)/*~ 

	

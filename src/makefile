PRINCIPAL=main

IDIR =../include
CC=g++
EXT = cpp
CFLAGS=-Wall -g -fprofile-arcs -ftest-coverage -I $(IDIR) 

GCOVDIR=gcov_files
ODIR=obj
LDIR =../lib

LIBS=-lm ../lib/libgtest.a ../lib/libsqlite3.a -lgtest -lpthread -ldl -l sqlite3

_DEPS = User.hpp Account.hpp Callbacks.hpp Search.hpp Security.hpp Ads.hpp Advertise.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = $(PRINCIPAL).o User.o Account.o Callbacks.o Search.o Security.o Ads.o Advertise.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.$(EXT) $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(PRINCIPAL): $(OBJ)
	$(CC) -o $@ $^ $(LIBS) $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(ODIR)/* *~ core $(INCDIR)/*~

.PHONY: reset
reset:
	make clean
	rm -f teste
	rm -f $(GCOVDIR)/*

.PHONY: gcov
gcov:
	mv $(ODIR)/*.gcda $(GCOVDIR)
	mv $(ODIR)/*.gcno $(GCOVDIR)
	cp $(PRINCIPAL).$(EXT) $(GCOVDIR)
	cp User.cpp $(GCOVDIR)
	cp Account.cpp $(GCOVDIR)
	cp Callbacks.cpp $(GCOVDIR)
	cp Search.cpp $(GCOVDIR)
	cp Security.cpp $(GCOVDIR)
	cp Ads.cpp $(GCOVDIR)
	cp Advertise.cpp $(GCOVDIR)

.PHONY: cppcheck
cppcheck:
	cppcheck --enable=warning *.cpp

.PHONY: run_gcov
run_gcov:
	cd $(GCOVDIR)
	gcov *.cpp
	

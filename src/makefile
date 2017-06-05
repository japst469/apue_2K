IDIR = ../include
LDIR = ../lib
ODIR = obj

CC=g++
CFLAGS=-I $(IDIR)

LIBS = 

_DEPS = ourhdr.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = journal.o err.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

jj: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

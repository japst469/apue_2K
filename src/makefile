IDIR = ../include
LDIR = ../lib
ODIR = obj

CC=cc
CFLAGS=-I $(IDIR)

LIBS = 

_DEPS = ourhdr.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = prog1_5.o err.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

prog: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

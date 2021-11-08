CXX = g++
CXXFLAGS = -std=c++14 -Wall
EXEC = TicTacToeGame
PROJ_DIR = src
OBJ_DIR = build
LIBS=-lm

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o prettyprint.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

${EXEC}: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean
clean:
	@echo "Cleaning...."
	rm -dRf ${OBJ_DIR}
	rm -f ${EXEC} 

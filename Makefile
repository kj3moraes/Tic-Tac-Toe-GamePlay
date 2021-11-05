CXX = g++
CXXFLAGS = -std=c++14 -g -Wall -Werror=vla -MMD
EXEC = TicTacToeGame
OBJECTS = main.o prettyprint.o player.o easy.o intermediate.o hard.o human.o 
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
  ${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}
  
-include ${DEPENDS}

.PHONY: clean
clean:
  rm ${OBJECTS} ${EXEC} ${DEPENDS}

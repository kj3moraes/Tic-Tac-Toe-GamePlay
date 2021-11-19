CXX = g++
CXXFLAGS = -std=c++14 -Wall -g
EXEC = TicTacToeGame
PROJ_DIR = src
OPPONENTS_DIR = src/opponents
ENGINES_DIR = src/opponents/engines
OBJ_DIR = build
OBJ = main.o board.o result.o regularopps.o engines.o
CLS = prettyprint.cc services/board.cc services/result.cc opponents/player.cc opponents/human.cc opponents/engines/engine.cc opponents/engines/easy.cc opponents/engines/medium.cc opponents/engines/hard.cc main.cc
HEADERS = prettyprint.h services/board.h services/result.h opponents/player.h opponents/human.h opponents/engines/engine.h opponents/engines/easy.h opponents/engines/medium.h opponents/engines/hard.h
ENGINES = engine.h engine.cc easy.h easy.h medium.h medium.cc hard.h hard.cc
OTHER_OPS = player.h player.cc human.h human.cc

${EXEC}: ${CLS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${CLS} -o ${EXEC}
	
.PHONY: clean
clean:
	@echo "Cleaning...."
	rm -f ${EXEC} 

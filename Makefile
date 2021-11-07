CXX = g++
CXXFLAGS = -std=c++14 -Wall
EXEC = TicTacToeGame
PROJECT_DIR = ./src
OBJECT_DIR = ./build
OBJECTS = ${OBJECT_DIR}/*

${EXEC}: ${OBJECTS}
  ${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

.PHONY: clean
clean:
	@echo "Cleaning...."
	rm ${OBJECTS} ${EXEC} 

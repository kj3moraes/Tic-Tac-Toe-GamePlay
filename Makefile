CXX = g++
CXXFLAGS = -std=c++14 -Wall
EXEC = TicTacToeGame
PROJ_DIR = src
ENGINE_DIR = src/opponents/
OBJ_DIR = build
OBJ = main.o engines.o board.o result.o

${EXEC}: ${OBJ}
	${CXX ${CXXFLAGS} ${OBJ} -o ${EXEC}

main.o : ${PROJ_DIR}/main.cc
	@echo "Building the final executable"
	${CXX} ${CXXFLAGS} -c main.cc -o main.o

engines.o : ${ENGINE_DIR}/player.cc ${ENGINE_DIR}/player.cc ${ENGINE_DIR}/human.cc ${ENGINE_DIR}/easy.cc ${ENGINE_DIR}/medium.cc ${ENGINE_DIR}/hard.cc
	${CXX} ${CXXFLAGS} -c ${ENGINE_DIR}/player.cc ${ENGINE_DIR}/player.cc ${ENGINE_DIR}/human.cc ${ENGINE_DIR}/easy.cc ${ENGINE_DIR}/medium.cc ${ENGINE_DIR}/hard.cc -o engines.o

board.o : ${PROJ_DIR}/services/board.cc
	${CXX} ${CXXFLAGS} -c board.cc -o board.o

result.o : ${PROJ_DIR}/services/result.cc
	${CXX} ${CXXFLAGS} -c result.cc -o result.o	

.PHONY: clean
clean:
	@echo "Cleaning...."
	rm -f ${EXEC} 

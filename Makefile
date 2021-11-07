CXX = g++
CXXFLAGS = -std=c++14 -Wall
EXEC = TicTacToeGame
PROJ_DIR = src
OBJ_DIR = build

${EXEC}: ${OBJ_DIR}/m_${EXEC}.o ${OBJ_DIR}/f_${EXEC}.o
	${CXX} ${CXXFLAGS} -o $@ $^

${OBJ_DIR}/%.o : ${PROJ_DIR}/%.c
	${CXX} ${CXXFLAGS} -c $< ${INCL} -o $@

.PHONY: clean
clean:
	@echo "Cleaning...."
	rm -dRf ${OBJ_DIR}
	rm -f ${EXEC} 

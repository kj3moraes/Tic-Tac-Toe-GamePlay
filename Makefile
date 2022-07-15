CXX = g++
CXXFLAGS = -std=c++14 -Wall -g

SRC_FILES=$("wildcard ")

${EXEC}: ${CLS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${CLS} -o ${EXEC}
	
.PHONY: clean
clean:
	@echo "Cleaning...."
	rm -f ${EXEC} 

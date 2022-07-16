# Compiler and Linker
CXX				:= g++

# Target executable
TARGET			:= TicTacToe

# Directories
SRC_DIR			:= src
OBJ_DIR			:= build
INCLUDE_DIR		:= include
TARGET_DIR		:= bin

# Extensions
SRC_EXT 		:= cc
DEP_EXT 		:= d
OBJ_EXT			:= o

# Flags and Libraries
CXX_FLAGS 		:= -std=c++14 -Wall -g -O0
LIB_FLAGS 		:= -lm -lncurses
INC_FLAGS 		:= -I$(INCLUDE_DIR) -I/usr/local/include
INC_DEP			:= -I$(INCLUDE_DIR)

# ------------------------------------------------------------------------------
# Do not edit below this line
# ------------------------------------------------------------------------------

SOURCES     := $(shell find $(SRC_DIR) -type f -name *.$(SRC_EXT))
OBJECTS     := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.$(SRC_EXT)=.$(OBJ_EXT)))

# Default Make
all: resources $(TARGET)

# Remake the executable
remake: cleaner all

# Make the directories
directories:
	mkdir -p $(TARGET_DIR)
	mkdir -p $(OBJ_DIR)

#Clean only Objecst
clean:
	@echo "Cleaning...."
	rm -f ${EXEC} 

#Full Clean, Objects and Binaries
cleaner: clean
    @$(RM) -rf $(TARGET_DIR)

#Pull in dependency info for *existing* .o files
-include $(OBJECTS:.$(OBJ_EXT)=.$(DEP_EXT))

#Link
$(TARGET): $(OBJECTS)
    $(CC) -o $(TARGETDIR)/$(TARGET) $^ $(LIB)

#Compile
$(BUILDDIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT)
    @mkdir -p $(dir $@)
    $(CXX) $(CXX_FLAGS) $(INC) -c -o $@ $<
    @$(CXX) $(CXX_FLAGS) $(INC_DEP) -MM $(SRC_DIR)/$*.$(SRC_EXT) > $(OBJ_DIR)/$*.$(DEP_EXT)
    @cp -f $(OBJ_DIR)/$*.$(DEP_EXT) $(OBJ_DIR)/$*.$(DEP_EXT).tmp
    @sed -e 's|.*:|$(OBJ_DIR)/$*.$(OBJ_EXT):|' < $(BUILD_DIR)/$*.$(DEP_EXT).tmp > $(OBJ_DIR)/$*.$(DEP_EXT)
    @sed -e 's/.*://' -e 's/\\$$//' < $(OBJ_DIR)/$*.$(DEP_EXT).tmp | fmt -1 | sed -e 's/^ *//' -e 's/$$/:/' >> $(OBJ_DIR)/$*.$(DEPEXT)
    @rm -f $(OBJ_DIR)/$*.$(DEP_EXT).tmp

#Non-File Targets
.PHONY: all remake clean cleaner resources

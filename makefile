SRC = src
INC = include
OBJ = obj
BIN = bin

all: $(BIN)/TextUI

$(BIN)/TextUI: $(OBJ)/TextUI.o $(OBJ)/RubikCube.o
	g++ -o $(BIN)/TextUI $(OBJ)/TextUI.o $(OBJ)/RubikCube.o

$(OBJ)/TextUI.o: $(SRC)/TextUI.cpp $(INC)/RubikCube.hpp $(INC)/Side.hpp $(INC)/Colors.h
	g++ -o $(OBJ)/TextUI.o -c $(SRC)/TextUI.cpp -I$(INC)

$(OBJ)/RubikCube.o: $(SRC)/RubikCube.cpp $(INC)/RubikCube.hpp $(INC)/Side.hpp $(INC)/Colors.h
	g++ -o $(OBJ)/RubikCube.o -c $(SRC)/RubikCube.cpp -I$(INC)
	
clean:
	rm $(OBJ)/* $(BIN)/*

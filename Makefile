CXX := g++
CXXFLAGS := -g -std=c++11 -Wall -Wextra -c
LD := g++
LDFLAGS := -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio

EXE := bullet-hell
OBJ := obj/game.o obj/main.o

all: $(EXE)

clean:
	rm -f $(OBJ) $(EXE)

$(EXE): obj/ $(OBJ)
	$(LD) $(LDFLAGS) $(OBJ) -o $@

obj/:
	mkdir $@

obj/%.o: src/%.cc src/%.h
	$(CXX) $(CXXFLAGS) $< -o $@

obj/%.o: src/%.cc
	$(CXX) $(CXXFLAGS) $< -o $@

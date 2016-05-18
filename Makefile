CXX := g++
CXXFLAGS := -g -std=c++11 -Wall -Wextra -c
LD := g++
LDFLAGS := -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio

EXE := bullet-hell
OBJ := obj/widget.o obj/button.o obj/menu.o obj/play.o obj/game.o obj/main.o

all: $(EXE)

clean:
	@echo "Cleaning..."
	@rm -f $(OBJ) $(EXE)

$(EXE): obj/ $(OBJ)
	@echo "Linking executable $@"
	@$(LD) $(LDFLAGS) $(OBJ) -o $@

obj/:
	@echo "Creating directory $@"
	@mkdir $@

obj/%.o: src/%.cc src/%.h
	@echo "CXX $<"
	@$(CXX) $(CXXFLAGS) $< -o $@

obj/%.o: src/%.cc
	@echo "CXX $<"
	@$(CXX) $(CXXFLAGS) $< -o $@

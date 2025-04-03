TARGET = logger

CXX = c++

CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

HEADERS = $(wildcard *.hpp)

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
PURPLE = \033[35m
CYAN   = \033[36m
RESET  = \033[0m

all : $(TARGET)

$(TARGET): $(OBJ)
	@echo "$(CYAN)Linking object files into executable: $(TARGET) $(RESET)"
	@$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)
	@echo "$(GREEN)Build completed successfully!$(RESET)"

%.o: %.cpp $(HEADERS) Makefile
	@echo "$(BLUE)Compiling: $<$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $<
	@echo "$(GREEN)Compilation of $< finished!$(RESET)"

clean:
	@echo "$(YELLOW)Cleaning up object files and txt...$(RESET)"
	@rm -f $(OBJ) $(wildcard *.txt)
	@echo "$(RED)Clean up complete.$(RESET)"

fclean: clean
	@echo "$(YELLOW)Cleaning up executable...$(RESET)"
	@rm -f $(TARGET)
	@echo "$(RED)Clean up complete.$(RESET)"

re: fclean all

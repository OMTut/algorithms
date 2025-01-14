# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./src -I./algorithms

# Directories
SRC_DIR = src
ALG_DIR = algorithms
BUILD_DIR = build
BIN_DIR = bin

# Output executable
TARGET = $(BIN_DIR)/AlgorithmStudy

# Source Files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
ALG_FILES = $(wildcard $(ALG_DIR)/*.cpp)
OBJ_FILES = $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(notdir $(SRC_FILES) $(ALG_FILES)))

# Default target
all: setup $(TARGET)

# CREAT directories
setup:
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)

# Build target
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile Source Files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(ALG_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -l $@

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Phony targets
.PHONY: all clean setup
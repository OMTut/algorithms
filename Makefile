# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./src

# Directories
SRC_DIR = src
ALG_DIR = $(SRC_DIR)/algorithms
TEST_DIR = $(SRC_DIR)/tests
BUILD_DIR = build
BIN_DIR = bin

# Output executable
TARGET = $(BIN_DIR)/AlgorithmStudy.exe

# Source Files
SRC_FILES := $(shell dir /s /b $(SRC_DIR)\*.cpp 2>nul)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(subst \,/,$(SRC_FILES)))

# Default target
all: setup $(TARGET)

# Create directories
setup:
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)

# Build target
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ_FILES)

# Compile Source Files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(dir $@) mkdir $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
	@if exist $(BIN_DIR) rmdir /s /q $(BIN_DIR)

# Phony targets
.PHONY: all clean setup

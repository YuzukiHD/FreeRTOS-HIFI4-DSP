
BUILD_DIR=$(CURDIR)/build

APP = bin2array

CSRC    = bin2array.c
CXXSRC  =

COBJS   = $(addprefix $(BUILD_DIR)/,$(CSRC:.c=.o))
CXXOBJS = $(addprefix $(BUILD_DIR)/,$(CXXSRC:.cpp=.opp))

INCLUDES = -I includes -I ../lib
CFLAGS   = -O2 -std=gnu99 $(INCLUDES)
CXXFLAGS = -O2 -std=gnu++11 $(INCLUDES)

CC  ?= gcc
CXX ?= g++

all: tools
tools: $(BUILD_DIR) $(APP)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf build
	rm -f $(APP)

$(BUILD_DIR)/%.o : %.c
	echo "  CC    $<"
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.opp : %.cpp
	echo "  CXX   $<"
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(APP): $(COBJS)
	$(CC) $(CFLAGS) $(BUILD_DIR)/bin2array.o -o $(APP)

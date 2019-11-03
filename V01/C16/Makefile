OUT ?= out
CC = g++
CFLAGS += -L$(LIB)

progs := IntStack Array
libs = fibonacci

OUT_PROGS = $(addprefix $(OUT)/, $(progs))
INSTALL_LIBS = $(addprefix $(LIB)/, lib$(libs).so)

# $(foreach prog, $(progs), $(eval $(OUT)/$(prog):$(prog)))
.PHONY: all clean
all: $(INSTALL_LIBS) $(OUT_PROGS)

$(OUT):
	@mkdir -pv $@

$(LIB)/libfibonacci.so: fibonacci.cpp
	@mkdir -pv $(LIB)
	$(CC) -fPIC -shared -o $@ $<

$(OUT)/IntStack: IntStack.cpp $(LIB)/libfibonacci.so $(OUT)
	$(CC) $(CFLAGS) -lfibonacci -o $@ $<

$(OUT)/Array: Array.cpp $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	@rm -rvf $(OUT_PROGS)
	@rm -rvf $(OUT)

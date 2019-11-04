OUT ?= out
CC = g++
CFLAGS += -L$(LIB)

progs := IntStack Array Array2 StackTemplateTest Array3 \
    TStackTest

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

$(OUT)/Array2: Array2.cpp $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

$(OUT)/StackTemplateTest: StackTemplateTest.cpp fibonacci.cpp $(OUT)
	$(CC) $(CFLAGS) -o $@ $< fibonacci.cpp

$(OUT)/Array3: Array3.cpp $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

$(OUT)/TStackTest: TStackTest.cpp $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	@rm -rvf $(OUT_PROGS)
	@rm -rvf $(OUT)

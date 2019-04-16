OUT ?= out

progs := MemberClass MinTest Tolower PartialOrder PartialOrder2 \
	Sortable NobloatTest Lookup Lookup2 FriendScope FriendScope2 \
	FriendScope3 Box1 Box2 BearCorner BearCorner2 CountedClass \
	CountedClass2 CountedClass3 Factorial Fibonacci Power \
	Accumulate Unroll Max Conditionals StaticAssert1 \
	StaticAssert2 MyVector MyVector2 MinMain


OUT_PROGS = $(addprefix $(OUT)/, $(progs))

# $(foreach prog, $(progs), $(eval $(OUT)/$(prog):$(prog)))
.PHONY: all clean
all: $(OUT_PROGS)

$(OUT):
	@mkdir -pv $@

$(OUT)/MemberClass: MemberClass.cpp $(OUT)
	g++ -o $@ $<

$(OUT)/MinTest: MinTest.cpp
	g++ -o $@ $<

$(OUT)/Tolower: Tolower.cpp StrTolower.cpp
	# g++ -o $@ $^

$(OUT)/PartialOrder: PartialOrder.cpp
	g++ -o $@ $<

$(OUT)/PartialOrder2: PartialOrder2.cpp
	g++ -o $@ $^

$(OUT)/Sortable: Sortable.cpp Sortable.h Urand.h
	g++ -o $@ $^

$(OUT)/NobloatTest: NobloatTest.cpp Nobloat.h
	g++ -o $@ $^

$(OUT)/Lookup: Lookup.cpp
	g++ -o $@ $^

$(OUT)/Lookup2: Lookup2.cpp
	g++ -o $@ $^

$(OUT)/FriendScope: FriendScope.cpp
	g++ -o $@ $^

$(OUT)/FriendScope2: FriendScope2.cpp
	g++ -o $@ $^

$(OUT)/FriendScope3: FriendScope3.cpp
	g++ -o $@ $^

$(OUT)/Box1: Box1.cpp
	g++ -o $@ $^

$(OUT)/Box2: Box2.cpp
	g++ -o $@ $^

$(OUT)/BearCorner: BearCorner.cpp
	g++ -o $@ $^

$(OUT)/BearCorner2: BearCorner2.cpp
	g++ -o $@ $^

$(OUT)/CountedClass: CountedClass.cpp
	g++ -o $@ $^

$(OUT)/CountedClass2: CountedClass2.cpp
	g++ -o $@ $^

$(OUT)/CountedClass3: CountedClass3.cpp
	g++ -o $@ $^

$(OUT)/Factorial: Factorial.cpp
	g++ -o $@ $^

$(OUT)/Fibonacci: Fibonacci.cpp
	g++ -o $@ $^

$(OUT)/Power: Power.cpp
	g++ -o $@ $^

$(OUT)/Accumulate: Accumulate.cpp
	g++ -o $@ $^

$(OUT)/Unroll: Unroll.cpp
	g++ -o $@ $^

$(OUT)/Max: Max.cpp
	g++ -o $@ $^

$(OUT)/Conditionals: Conditionals.cpp
	g++ -o $@ $^

$(OUT)/StaticAssert1: StaticAssert1.cpp
	g++ -o $@ $^

$(OUT)/StaticAssert2: StaticAssert2.cpp
	g++ -fpermissive -o $@ $^

$(OUT)/MyVector: MyVector.cpp
	g++ -o $@ $^

$(OUT)/MyVector2: MyVector2.cpp
	g++ -o $@ $^

$(OUT)/MinMain: MinMain.cpp UseMin1.cpp UseMin2.cpp MinInstances.cpp
	g++ -o $@ $^

$(OUT)/CopyInts: CopyInts.cpp
	g++ -o $@ $^

$(OUT)/CopyStrings: CopyStrings.cpp
	g++ -o $@ $^

clean:
	@rm -rvf $(OUT_PROGS)
	@rm -rvf $(OUT)

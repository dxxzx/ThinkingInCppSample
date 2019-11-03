OUT ?= out

progs := CopyInts CopyStrings CopyVector InsertVector CopyInts2 \
	CopyStrings2 ReplaceStrings CopyInts3 CopyIntsToFile \
	CopyIntsFromFile GreaterThanN CopyInts4 CountNotEqual \
	FBinder BinderValue PtrFun1 PtrFun2 MemFun1 MemFun2 \
	FindBlanks MemFun3 ComposeTry ComposeFinal FillGenerateTest \
	Counting Manipulations SearchReplace Comparison Removing \


OUT_PROGS = $(addprefix $(OUT)/, $(progs))

# $(foreach prog, $(progs), $(eval $(OUT)/$(prog):$(prog)))
.PHONY: all clean
all: $(OUT)
	make $(OUT_PROGS)

$(OUT):
	@mkdir -pv $@

$(OUT)/CopyInts: CopyInts.cpp
	g++ -o $@ $<

$(OUT)/CopyStrings: CopyStrings.cpp
	g++ -o $@ $^

$(OUT)/CopyVector: CopyVector.cpp
	g++ -o $@ $^

$(OUT)/InsertVector: InsertVector.cpp
	g++ -o $@ $^

$(OUT)/CopyInts2: CopyInts2.cpp
	g++ -o $@ $^

$(OUT)/CopyStrings2: CopyStrings2.cpp
	g++ -o $@ $^

$(OUT)/ReplaceStrings: ReplaceStrings.cpp
	g++ -o $@ $^

$(OUT)/CopyInts3: CopyInts3.cpp
	g++ -o $@ $^

$(OUT)/CopyIntsToFile: CopyIntsToFile.cpp
	g++ -o $@ $^

$(OUT)/CopyIntsFromFile: CopyIntsFromFile.cpp
	g++ -o $@ $^

$(OUT)/GreaterThanN: GreaterThanN.cpp
	g++ -o $@ $^

$(OUT)/CopyInts4: CopyInts4.cpp
	g++ -o $@ $^

$(OUT)/CountNotEqual: CountNotEqual.cpp
	g++ -o $@ $^

$(OUT)/FBinder: FBinder.cpp Generators.cpp
	g++ -o $@ $^

$(OUT)/BinderValue: BinderValue.cpp
	g++ -o $@ $^

$(OUT)/PtrFun1: PtrFun1.cpp
	g++ -o $@ $^

$(OUT)/PtrFun2: PtrFun2.cpp
	g++ -o $@ $^

$(OUT)/MemFun1: MemFun1.cpp
	g++ -o $@ $^

$(OUT)/MemFun2: MemFun2.cpp
	g++ -o $@ $^

$(OUT)/FindBlanks: FindBlanks.cpp
	g++ -o $@ $^

$(OUT)/MemFun3: MemFun3.cpp
	g++ -o $@ $^

$(OUT)/ComposeTry: ComposeTry.cpp
	g++ -o $@ $^

$(OUT)/ComposeFinal: ComposeFinal.cpp
	g++ -o $@ $^

$(OUT)/FillGenerateTest: FillGenerateTest.cpp
	g++ -o $@ $^

$(OUT)/Counting: Counting.cpp Generators.cpp
	g++ -o $@ $^

$(OUT)/Manipulations: Manipulations.cpp Generators.cpp
	g++ -o $@ $^

$(OUT)/SearchReplace: SearchReplace.cpp
	g++ -o $@ $^

$(OUT)/Comparison: Comparison.cpp
	g++ -o $@ $^

$(OUT)/Removing: Removing.cpp Generators.cpp
	g++ -o $@ $^

clean:
	@rm -rvf $(OUT_PROGS)
	@rm -rvf $(OUT)

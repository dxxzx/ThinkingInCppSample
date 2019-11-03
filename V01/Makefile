subdirs := C16

out := out
libs := lib

.PHONY: all clean
all:
	@mkdir -pv $(PWD)/$(out)
	$(foreach subdir, $(subdirs), OUT=$(PWD)/$(out)/$(subdir) LIB=$(PWD)/$(libs) make -C $(subdir);)

clean:
	$(foreach subdir, $(subdirs), OUT=$(PWD)/$(out)/$(subdir) LIB=$(PWD)/$(libs) make -C $(subdir) clean;)
	@rm -rvf $(PWD)/$(out)
	@rm -rvf $(libs)
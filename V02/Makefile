subdirs := C05 C06

out := out

.PHONY: all clean
all:
	@mkdir -pv $(PWD)/$(out)
	$(foreach subdir, $(subdirs), OUT=$(PWD)/$(out)/$(subdir) make -C $(subdir);)

clean:
	$(foreach subdir, $(subdirs), OUT=$(PWD)/$(out)/$(subdir) make -C $(subdir) clean;)
	@rm -rvf $(PWD)/$(out)
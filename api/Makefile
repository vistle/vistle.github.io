VISTLE_DIR=$(HOME)/vistle

all:
	echo "Use 'make update' in order to recreate Doxygen docs and commit to repository"

update: module renderer

outofdate:

module: Doxyfile.module Doxyfile.include outofdate
	$(RM) -r module
	VISTLE_DIR=$(VISTLE_DIR) doxygen Doxyfile.module
	git add module && git commit -m "update auto-generated docs" module

renderer: Doxyfile.renderer Doxyfile.include module.doxytags outofdate
	$(RM) -r renderer
	VISTLE_DIR=$(VISTLE_DIR) doxygen Doxyfile.renderer
	git add renderer && git commit -m "update auto-generated docs" renderer

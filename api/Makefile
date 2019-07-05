VISTLE_DIR=$(HOME)/vistle

all:
	echo "Use 'make update' in order to recreate Doxygen docs and commit to repository"

update:
	$(RM) -r doxygen
	VISTLE_DIR=$(VISTLE_DIR) doxygen
	git add doxygen && git commit -m "update auto-generated docs" doxygen

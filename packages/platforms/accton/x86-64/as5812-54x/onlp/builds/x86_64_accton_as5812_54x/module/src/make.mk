###############################################################################
#
# 
#
###############################################################################

LIBRARY := x86_64_accton_as5812_54x
$(LIBRARY)_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/lib.mk
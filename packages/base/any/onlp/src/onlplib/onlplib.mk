
###############################################################################
#
# Inclusive Makefile for the onlplib module.
#
# Autogenerated 2015-10-12 20:50:57.003782
#
###############################################################################
onlplib_BASEDIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
include $(onlplib_BASEDIR)/module/make.mk
include $(onlplib_BASEDIR)/module/auto/make.mk
include $(onlplib_BASEDIR)/module/src/make.mk
include $(onlplib_BASEDIR)/utest/_make.mk

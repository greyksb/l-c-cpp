###########################################################################
# Template for Makefile
# Author: greyksb (ksb) greyksb@yahoo.com greyksb@gmail.com
# Date 		: 08.01.2013
# Modified	: 10.01.2013
#                 19.01.2013		  
#                 22.01.2013		  
###########################################################################
# Project's section
#**************************************************************************
#DIR_PRJ_ROOT := $(shell pwd)
DIR_PRJ_ROOT :=.

#********************* config section for your project ********************
PRJ_NAME := gcc-l-c-cpp

# prj type C or CPP or C_CPP
PRJ_TYPE := C_CPP

#************************ tools config section ****************************

SHELL = /bin/bash
CC = gcc
CXX = g++
RM = rm -fv

# compile mode and options for compilers, preprocessor and linker
C_MODE := DEBUG  # DEBUG or RELEASE

CFLAGS_DEBUG = -std=c99 -g -O0 -Wall -pipe 
CFLAGS_RELEASE = -std=c99 -O3 -pipe
CXXFLAGS_DEBUG = -g -O0 -Wall -pipe
CXXFLAGS_RELEASE = -O3 -pipe 
CPPFLAGS =  
#LDFLAGS = --static
#LDFLAGS = --static

# list of using libs for linker
# set like: -lncurses -lpanel -lxml ...
LIBS = 


#-------------------------------------------------------------------------
# Directories

# if you work in only one dir set nothing for bin debug and release subdir
DIR_BIN = /gcc
DIR_DEBUG = /debug
DIR_RELEASE = /release

# for current dir set . (dot)
DIR_SRC := $(DIR_PRJ_ROOT)/src 
#$(DIR_PRJ_ROOT)/src/dir1 $(DIR_PRJ_ROOT)/src/dir2


# extornal include and libs
# path for youself include dir in project
DIR_INCLUDE := $(DIR_PRJ_ROOT)/include

# path's for extornal (nonstd) include
# example for additional include: -I/opt/some_pkg/include
ADD_INCLUDE = 


# libs

# path for youself libs 
# set space or nothing if you don't using youself libs
# example DIR_LIB := $(DIR_PRJ_ROOT)/lib
DIR_LIB := 


# path's for external nonstd libs
# examle for additional lib path: -L/opt/somepkg/lib
ADD_LIB_P =


#****************** end of project config section ************************

#*************************************************************************
# end of project section
##########################################################################



#***************** autoconfiguring project's subsection *****************
ifdef DIR_INCLUDE
      PRJ_INCLUDE = -I$(DIR_INCLUDE)
else
      PRJ_INCLUDE =
endif

I_INCLUDE = $(PRJ_INCLUDE) $(ADD_INCLUDE)

ifdef  DIR_LIB
       PRJ_LIB = -L$(DIR_LIB)
else
       PRJ_LIB = 
endif

# output dir
ifeq ($(C_MODE), RELEASE)
     DIR_OUT := $(DIR_PRJ_ROOT)$(DIR_BIN)$(DIR_RELEASE)
else
     DIR_OUT := $(DIR_PRJ_ROOT)$(DIR_BIN)$(DIR_DEBUG)
endif

# Main target name
TARGET := $(DIR_OUT)/$(PRJ_NAME)


ifeq ($(PRJ_TYPE),C)
     GCC = $(CC)
else
     GCC = $(CXX)
endif


VPATH = $(DIR_SRC) $(DIR_INCLUDE) $(DIR_OUT)

# std FLAGS

ifeq ($(C_MODE), RELEASE)
     CFLAGS = $(CFLAGS_RELEASE)
     CXXFLAGS = $(CXXFLAGS_RELEASE)
else
     CFLAGS = $(CFLAGS_DEBUG)
     CXXFLAGS = $(CXXFLAGS_DEBUG)
endif

ALL_LDFLAGS = $(LDFLAGS) $(PRJ_LIB) $(ADD_LIB_P) $(LIBS)

#******************* end of tools config section **************


#************************ make section ************************

# Objective files

dirsc := $(addsuffix /*.c,$(DIR_SRC))
SRC_C := $(wildcard $(dirsc))				# List of all c-files 

dirscpp := $(addsuffix /*.cpp,$(DIR_SRC))
SRC_CPP := $(wildcard $(dirscpp))			# List of all c-files 


OBJ_C := $(notdir $(patsubst %.c,%.o,$(SRC_C))) 	# List of obj from c files
OBJ_CPP := $(notdir $(patsubst %.cpp,%.o,$(SRC_CPP)))	# List of obj from cpp files

ifeq ($(PRJ_TYPE),C)
     OBJ  := $(OBJ_C)
endif

ifeq ($(PRJ_TYPE),CPP)
     OBJ  := $(OBJ_CPP)
endif

ifeq ($(PRJ_TYPE),C_CPP)
     OBJ :=  $(OBJ_C) $(OBJ_CPP)
endif


#
# SUFFIXES and Implicit rules
#
.SUFFIXES:				# Delete the default suffixes
.SUFFIXES: .o .c .cc .cpp .h 		# Define our suffix list

%.o:%.c
	$(CC) -c $(I_INCLUDE) -MMD $(CPPFLAGS) $(CFLAGS) $< -o $@ 2>log.$@

%.o:%.cpp
	$(CXX) -c $(I_INCLUDE) -MMD $(CPPFLAGS) $(CXXFLAGS) $< -o $@ 2>log.$@

#
# Build rule
#
$(TARGET) : $(OBJ)
	$(GCC) -o $@ $(OBJ) $(ALL_LDFLAGS) 2>log.ld
	cat -n log.*  

#
# List of dependancies
#
DEP = $(wildcard *.d) 
include $(DEP)

#
# Other rules
#
.PHONY : cleanlogs showlogs clean   

clean :
	$(RM) $(OBJ) $(DEP) $(TARGET) log.*
cleanlogs :
	$(RM) log.*
showlogs :
	cat -n log.*  

#***************  end of make section **********************************

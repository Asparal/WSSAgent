#############################################################################
# Makefile for building: WSSAgent
# Generated by qmake (2.01a) (Qt 4.8.7) on: dim. d�c. 10 09:02:55 2017
# Project:  WSSAgent.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile WSSAgent.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4 -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		datafetcher.cpp \
		mainobject.cpp \
		socketudp.cpp \
		sockettcp.cpp \
		crypt.cpp \
		serveur.cpp moc_datafetcher.cpp \
		moc_mainobject.cpp \
		moc_socketudp.cpp \
		moc_sockettcp.cpp \
		moc_serveur.cpp
OBJECTS       = main.o \
		datafetcher.o \
		mainobject.o \
		socketudp.o \
		sockettcp.o \
		crypt.o \
		serveur.o \
		moc_datafetcher.o \
		moc_mainobject.o \
		moc_socketudp.o \
		moc_sockettcp.o \
		moc_serveur.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		WSSAgent.pro
QMAKE_TARGET  = WSSAgent
DESTDIR       = 
TARGET        = WSSAgent

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: WSSAgent.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtNetwork.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile WSSAgent.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtNetwork.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile WSSAgent.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/WSSAgent1.0.0 || $(MKDIR) .tmp/WSSAgent1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/WSSAgent1.0.0/ && $(COPY_FILE) --parents datafetcher.h mainobject.h socketudp.h sockettcp.h crypt.h serveur.h .tmp/WSSAgent1.0.0/ && $(COPY_FILE) --parents main.cpp datafetcher.cpp mainobject.cpp socketudp.cpp sockettcp.cpp crypt.cpp serveur.cpp .tmp/WSSAgent1.0.0/ && (cd `dirname .tmp/WSSAgent1.0.0` && $(TAR) WSSAgent1.0.0.tar WSSAgent1.0.0 && $(COMPRESS) WSSAgent1.0.0.tar) && $(MOVE) `dirname .tmp/WSSAgent1.0.0`/WSSAgent1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/WSSAgent1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_datafetcher.cpp moc_mainobject.cpp moc_socketudp.cpp moc_sockettcp.cpp moc_serveur.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_datafetcher.cpp moc_mainobject.cpp moc_socketudp.cpp moc_sockettcp.cpp moc_serveur.cpp
moc_datafetcher.cpp: datafetcher.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) datafetcher.h -o moc_datafetcher.cpp

moc_mainobject.cpp: crypt.h \
		datafetcher.h \
		sockettcp.h \
		serveur.h \
		socketudp.h \
		mainobject.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) mainobject.h -o moc_mainobject.cpp

moc_socketudp.cpp: crypt.h \
		socketudp.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) socketudp.h -o moc_socketudp.cpp

moc_sockettcp.cpp: crypt.h \
		serveur.h \
		sockettcp.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) sockettcp.h -o moc_sockettcp.cpp

moc_serveur.cpp: serveur.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) serveur.h -o moc_serveur.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.cpp mainobject.h \
		crypt.h \
		datafetcher.h \
		sockettcp.h \
		serveur.h \
		socketudp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

datafetcher.o: datafetcher.cpp datafetcher.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o datafetcher.o datafetcher.cpp

mainobject.o: mainobject.cpp mainobject.h \
		crypt.h \
		datafetcher.h \
		sockettcp.h \
		serveur.h \
		socketudp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainobject.o mainobject.cpp

socketudp.o: socketudp.cpp socketudp.h \
		crypt.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o socketudp.o socketudp.cpp

sockettcp.o: sockettcp.cpp sockettcp.h \
		crypt.h \
		serveur.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sockettcp.o sockettcp.cpp

crypt.o: crypt.cpp crypt.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o crypt.o crypt.cpp

serveur.o: serveur.cpp serveur.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o serveur.o serveur.cpp

moc_datafetcher.o: moc_datafetcher.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_datafetcher.o moc_datafetcher.cpp

moc_mainobject.o: moc_mainobject.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainobject.o moc_mainobject.cpp

moc_socketudp.o: moc_socketudp.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_socketudp.o moc_socketudp.cpp

moc_sockettcp.o: moc_sockettcp.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_sockettcp.o moc_sockettcp.cpp

moc_serveur.o: moc_serveur.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_serveur.o moc_serveur.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:




AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

lib_LTLIBRARIES = liboctetos-physical.la


liboctetos_physical_la_CXXFLAGS = 
liboctetos_physical_la_LIBADD =  
liboctetos_physical_la_SOURCES = Atom.cc gen/names.cc gen/symbols.cc gen/props.cc gen/qnum.cc


octetos_physical_includedir = $(includedir)/octetos/physical
octetos_physical_include_HEADERS = Atom.hh

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = octetos-physical.pc

EXTRA_DIST = octetos-physical.pc.in
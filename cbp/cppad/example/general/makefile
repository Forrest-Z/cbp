# makefile.in generated by automake 1.15 from makefile.am.
# example/general/makefile.  Generated from makefile.in by configure.

# Copyright (C) 1994-2014 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/cppad
pkgincludedir = $(includedir)/cppad
pkglibdir = $(libdir)/cppad
pkglibexecdir = $(libexecdir)/cppad
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = x86_64-pc-linux-gnu
check_PROGRAMS = general$(EXEEXT)
subdir = example/general
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
LIBRARIES = $(noinst_LIBRARIES)
ARFLAGS = cru
AM_V_AR = $(am__v_AR_$(V))
am__v_AR_ = $(am__v_AR_$(AM_DEFAULT_VERBOSITY))
am__v_AR_0 = @echo "  AR      " $@;
am__v_AR_1 = 
libeigen_a_AR = $(AR) $(ARFLAGS)
libeigen_a_LIBADD =
am__libeigen_a_SOURCES_DIST = eigen_det.cpp eigen_array.cpp
#am_libeigen_a_OBJECTS = libeigen_a-eigen_det.$(OBJEXT) \
#	libeigen_a-eigen_array.$(OBJEXT)
libeigen_a_OBJECTS = $(am_libeigen_a_OBJECTS)
am__general_SOURCES_DIST = mul_level_adolc.cpp mul_level_adolc_ode.cpp \
	abort_recording.cpp fabs.cpp acos.cpp acosh.cpp ad_assign.cpp \
	ad_ctor.cpp add.cpp add_eq.cpp ad_fun.cpp ad_in_c.cpp \
	ad_input.cpp ad_output.cpp asin.cpp asinh.cpp atan2.cpp \
	atan.cpp atanh.cpp azmul.cpp base_alloc.hpp base_require.cpp \
	bender_quad.cpp bool_fun.cpp capacity_order.cpp \
	change_param.cpp check_for_nan.cpp compare_change.cpp \
	compare.cpp complex_poly.cpp cond_exp.cpp cos.cpp cosh.cpp \
	div.cpp div_eq.cpp equal_op_seq.cpp erf.cpp general.cpp \
	exp.cpp expm1.cpp for_one.cpp for_two.cpp forward.cpp \
	forward_dir.cpp forward_order.cpp fun_assign.cpp fun_check.cpp \
	hes_lagrangian.cpp hes_lu_det.cpp hes_minor_det.cpp \
	hessian.cpp hes_times_dir.cpp independent.cpp integer.cpp \
	interface2c.cpp interp_onetape.cpp interp_retape.cpp \
	jac_lu_det.cpp jac_minor_det.cpp jacobian.cpp log10.cpp \
	log1p.cpp log.cpp lu_ratio.cpp lu_vec_ad.cpp lu_vec_ad.hpp \
	lu_vec_ad_ok.cpp mul.cpp mul_eq.cpp mul_level.cpp \
	mul_level_ode.cpp near_equal_ext.cpp number_skip.cpp \
	numeric_type.cpp num_limits.cpp ode_stiff.cpp ode_taylor.cpp \
	opt_val_hes.cpp par_var.cpp poly.cpp pow.cpp pow_int.cpp \
	print_for.cpp reverse_checkpoint.cpp reverse_one.cpp \
	reverse_three.cpp reverse_two.cpp rev_one.cpp rev_two.cpp \
	rosen_34.cpp runge45_2.cpp seq_property.cpp sign.cpp sin.cpp \
	sinh.cpp sqrt.cpp stack_machine.cpp sub.cpp sub_eq.cpp tan.cpp \
	tanh.cpp tape_index.cpp unary_minus.cpp unary_plus.cpp \
	value.cpp var2par.cpp vec_ad.cpp
#am__objects_1 = mul_level_adolc.$(OBJEXT) \
#	mul_level_adolc_ode.$(OBJEXT)
am_general_OBJECTS = $(am__objects_1) abort_recording.$(OBJEXT) \
	fabs.$(OBJEXT) acos.$(OBJEXT) acosh.$(OBJEXT) \
	ad_assign.$(OBJEXT) ad_ctor.$(OBJEXT) add.$(OBJEXT) \
	add_eq.$(OBJEXT) ad_fun.$(OBJEXT) ad_in_c.$(OBJEXT) \
	ad_input.$(OBJEXT) ad_output.$(OBJEXT) asin.$(OBJEXT) \
	asinh.$(OBJEXT) atan2.$(OBJEXT) atan.$(OBJEXT) atanh.$(OBJEXT) \
	azmul.$(OBJEXT) base_require.$(OBJEXT) bender_quad.$(OBJEXT) \
	bool_fun.$(OBJEXT) capacity_order.$(OBJEXT) \
	change_param.$(OBJEXT) check_for_nan.$(OBJEXT) \
	compare_change.$(OBJEXT) compare.$(OBJEXT) \
	complex_poly.$(OBJEXT) cond_exp.$(OBJEXT) cos.$(OBJEXT) \
	cosh.$(OBJEXT) div.$(OBJEXT) div_eq.$(OBJEXT) \
	equal_op_seq.$(OBJEXT) erf.$(OBJEXT) general.$(OBJEXT) \
	exp.$(OBJEXT) expm1.$(OBJEXT) for_one.$(OBJEXT) \
	for_two.$(OBJEXT) forward.$(OBJEXT) forward_dir.$(OBJEXT) \
	forward_order.$(OBJEXT) fun_assign.$(OBJEXT) \
	fun_check.$(OBJEXT) hes_lagrangian.$(OBJEXT) \
	hes_lu_det.$(OBJEXT) hes_minor_det.$(OBJEXT) hessian.$(OBJEXT) \
	hes_times_dir.$(OBJEXT) independent.$(OBJEXT) \
	integer.$(OBJEXT) interface2c.$(OBJEXT) \
	interp_onetape.$(OBJEXT) interp_retape.$(OBJEXT) \
	jac_lu_det.$(OBJEXT) jac_minor_det.$(OBJEXT) \
	jacobian.$(OBJEXT) log10.$(OBJEXT) log1p.$(OBJEXT) \
	log.$(OBJEXT) lu_ratio.$(OBJEXT) lu_vec_ad.$(OBJEXT) \
	lu_vec_ad_ok.$(OBJEXT) mul.$(OBJEXT) mul_eq.$(OBJEXT) \
	mul_level.$(OBJEXT) mul_level_ode.$(OBJEXT) \
	near_equal_ext.$(OBJEXT) number_skip.$(OBJEXT) \
	numeric_type.$(OBJEXT) num_limits.$(OBJEXT) \
	ode_stiff.$(OBJEXT) ode_taylor.$(OBJEXT) opt_val_hes.$(OBJEXT) \
	par_var.$(OBJEXT) poly.$(OBJEXT) pow.$(OBJEXT) \
	pow_int.$(OBJEXT) print_for.$(OBJEXT) \
	reverse_checkpoint.$(OBJEXT) reverse_one.$(OBJEXT) \
	reverse_three.$(OBJEXT) reverse_two.$(OBJEXT) \
	rev_one.$(OBJEXT) rev_two.$(OBJEXT) rosen_34.$(OBJEXT) \
	runge45_2.$(OBJEXT) seq_property.$(OBJEXT) sign.$(OBJEXT) \
	sin.$(OBJEXT) sinh.$(OBJEXT) sqrt.$(OBJEXT) \
	stack_machine.$(OBJEXT) sub.$(OBJEXT) sub_eq.$(OBJEXT) \
	tan.$(OBJEXT) tanh.$(OBJEXT) tape_index.$(OBJEXT) \
	unary_minus.$(OBJEXT) unary_plus.$(OBJEXT) value.$(OBJEXT) \
	var2par.$(OBJEXT) vec_ad.$(OBJEXT)
general_OBJECTS = $(am_general_OBJECTS)
general_LDADD = $(LDADD)
am__DEPENDENCIES_1 =
general_DEPENDENCIES = $(am__DEPENDENCIES_1) $(am__DEPENDENCIES_1) \
	$(am__DEPENDENCIES_1) $(am__DEPENDENCIES_1)
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = 
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
AM_V_CXX = $(am__v_CXX_$(V))
am__v_CXX_ = $(am__v_CXX_$(AM_DEFAULT_VERBOSITY))
am__v_CXX_0 = @echo "  CXX     " $@;
am__v_CXX_1 = 
CXXLD = $(CXX)
CXXLINK = $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) \
	-o $@
AM_V_CXXLD = $(am__v_CXXLD_$(V))
am__v_CXXLD_ = $(am__v_CXXLD_$(AM_DEFAULT_VERBOSITY))
am__v_CXXLD_0 = @echo "  CXXLD   " $@;
am__v_CXXLD_1 = 
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(libeigen_a_SOURCES) $(general_SOURCES)
DIST_SOURCES = $(am__libeigen_a_SOURCES_DIST) \
	$(am__general_SOURCES_DIST)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
am__DIST_COMMON = $(srcdir)/makefile.in $(top_srcdir)/depcomp
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ABS_TOP_BUILDDIR = /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git
ABS_TOP_SRCDIR = /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git
ACLOCAL = ${SHELL} /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/missing aclocal-1.15
ADOLC_DIR = 
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AR = ar
AUTOCONF = ${SHELL} /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/missing autoconf
AUTOHEADER = ${SHELL} /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/missing autoheader
AUTOMAKE = ${SHELL} /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/missing automake-1.15
AWK = mawk
BOOST_DIR = 
BOOST_INCLUDE = 
BTHREAD_LIB = 
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = 
CPP = gcc -E
CPPAD_IPOPT_LD_PATH = /lib
CPPAD_IPOPT_LIBS = -L /lib -lipopt
CPPFLAGS = 
CXX = g++
CXXDEPMODE = depmode=gcc3
CXXFLAGS = 
CXX_FLAGS = 
CXX_FLAGS_EIGEN = 
CXX_FLAGS_FADBAD = 
CYGPATH_W = echo

# -----------------------------------------------------------------------------
# CppAD: C++ Algorithmic Differentiation: Copyright (C) 2003-17 Bradley M. Bell
#
# CppAD is distributed under multiple licenses. This distribution is under
# the terms of the
#                     Eclipse Public License Version 1.0.
#
# A copy of this license is included in the COPYING file of this distribution.
# Please visit http://www.coin-or.org/CppAD/ for information on other licenses.
# -----------------------------------------------------------------------------
# automake input file
#
# CppAD puts all it's preprocessor definitions in the cppad/configure.hpp
DEFS = 
DEPDIR = .deps
DL_LIB = -ldl
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EIGEN_DIR = 
EIGEN_INCLUDE = 
EXEEXT = 
FADBAD_DIR = 
FC = 
FCFLAGS = 
FCLIBS = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
IPOPT_DIR = 
LDFLAGS = 
LIBOBJS = 
LIBS = 
LTLIBOBJS = 
MAINT = #
MAKEINFO = ${SHELL} /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/missing makeinfo
MAX_NUM_THREADS = 
MKDIR_P = /bin/mkdir -p
OBJEXT = o
OPENMP_FLAGS = 
PACKAGE = cppad
PACKAGE_BUGREPORT = cppad@list.coin-or.org
PACKAGE_NAME = cppad
PACKAGE_STRING = cppad 20180226
PACKAGE_TARNAME = cppad
PACKAGE_URL = 
PACKAGE_VERSION = 20180226
PATH_SEPARATOR = :
POSTFIX_DIR = 
PTHREAD_LIB = -lpthread
RANLIB = ranlib
SACADO_DIR = 
SET_MAKE = 
SHELL = /bin/bash
STRIP = 
TAPE_ADDR_TYPE = 
TAPE_ID_TYPE = 
VERSION = 20180226
abs_builddir = /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/example/general
abs_srcdir = /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/example/general
abs_top_builddir = /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git
abs_top_srcdir = /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_FC = 
adolc_prefix = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
cppad_SOURCE_DIR = /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git
cppad_abs_includedir = ${prefix}/include
cppad_boostvector = 0
cppad_compiler_is_gnucxx = 0
cppad_cplusplus_201100_ok = 0
cppad_cppadvector = 1
cppad_cxx_flags = -g -O0
cppad_deprecated_01 = 0
cppad_description = Differentiation of C++ Algorithms
cppad_eigenvector = 0
cppad_has_adolc = 0
cppad_has_boost = 0
cppad_has_colpack = 0
cppad_has_eigen = 0
cppad_has_fadbad = 0
cppad_has_gettimeofday = 1
cppad_has_ipopt = 0
cppad_has_mkstemp = 1
cppad_has_sacado = 0
cppad_has_tmpnam_s = 0
cppad_max_num_threads = 48
cppad_pkgconfig_cflags = -I/home/idriver/include
cppad_pkgconfig_libs = 
cppad_pkgconfig_requires = 
cppad_prefix = NONE
cppad_stdvector = 0
cppad_tape_addr_type = unsigned int
cppad_tape_id_type = unsigned int
cppad_url = http://www.coin-or.org/CppAD
cppad_version = 20180226
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
eigen_prefix = 
exec_prefix = ${prefix}
have_pkg_config = yes
host = x86_64-pc-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/idriver/sehs/src/kernel/ivplanning/ivpathplanner/src/avoidObsModel/cbp/cppad.git/install-sh
ipopt_prefix = 
is_pod_specialize_11 = 
is_pod_specialize_98 = template <> inline bool is_pod<size_t>(void) { return true; }
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /home/idriver
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
ADOLC_SRC_FILES = 
# -------------------------------------------------------------------------
#ADOLC_SRC_FILES = mul_level_adolc.cpp mul_level_adolc_ode.cpp
ADOLC_EXTRA_FILES = mul_level_adolc.cpp mul_level_adolc_ode.cpp
#ADOLC_EXTRA_FILES = 
ADOLC_LIB = 
#ADOLC_LIB = -ladolc -lColPack -L$(ADOLC_DIR)/lib -L$(ADOLC_DIR)/lib64
ADOLC_FLAGS = 
#ADOLC_FLAGS = -I$(ADOLC_DIR)/include
EIGEN_EXTRA_FILES = eigen_det.cpp eigen_array.cpp
# -------------------------------------------------------------------------
# make a special library so can have it's own compile flags (see configure.ac)
#EIGEN_EXTRA_FILES = 
#EIGEN_EXTRA_FILES = eigen_det.cpp eigen_array.cpp
#noinst_LIBRARIES = libeigen.a
#libeigen_a_SOURCES = eigen_det.cpp eigen_array.cpp
EIGEN_LIB = 
#EIGEN_LIB = -L. -leigen
#EIGEN_LIB = 
EIGEN_FLAGS = 
#EIGEN_FLAGS = 
#EIGEN_FLAGS = 
#libeigen_a_CXXFLAGS = \
#	-g $(CXX_FLAGS_EIGEN) \
#	-I$(EIGEN_DIR)/include

# -------------------------------------------------------------------------
# autotools does not support use of colpack
EXTRA_DIST = \
	$(ADOLC_EXTRA_FILES) \
	$(EIGEN_EXTRA_FILES)

AM_CXXFLAGS = -g $(ADOLC_FLAGS) $(EIGEN_FLAGS) $(CXX_FLAGS)
#
#AM_CXXFLAGS = -EHsc -g $(ADOLC_FLAGS) $(EIGEN_FLAGS) $(CXX_FLAGS)
#
AM_CPPFLAGS = \
	-I. \
	-I$(top_srcdir) \
	$(BOOST_INCLUDE) \
	$(EIGEN_INCLUDE) \
	$(ADOLC_FLAGS) \
	$(EIGEN_FLAGS)

#
LDADD = $(ADOLC_LIB)  $(BTHREAD_LIB) $(EIGEN_LIB) $(PTHREAD_LIB)
#
general_SOURCES = \
	$(ADOLC_SRC_FILES) \
	\
	abort_recording.cpp \
	fabs.cpp \
	acos.cpp \
	acosh.cpp \
	ad_assign.cpp \
	ad_ctor.cpp \
	add.cpp \
	add_eq.cpp \
	ad_fun.cpp \
	ad_in_c.cpp \
	ad_input.cpp \
	ad_output.cpp \
	asin.cpp \
	asinh.cpp \
	atan2.cpp \
	atan.cpp \
	atanh.cpp \
	azmul.cpp \
	base_alloc.hpp \
	base_require.cpp \
	bender_quad.cpp \
	bool_fun.cpp \
	capacity_order.cpp \
	change_param.cpp \
	check_for_nan.cpp \
	compare_change.cpp \
	compare.cpp \
	complex_poly.cpp \
	cond_exp.cpp \
	cos.cpp \
	cosh.cpp \
	div.cpp \
	div_eq.cpp \
	equal_op_seq.cpp \
	erf.cpp \
	general.cpp \
	exp.cpp \
	expm1.cpp \
	for_one.cpp \
	for_two.cpp \
	forward.cpp \
	forward_dir.cpp \
	forward_order.cpp \
	fun_assign.cpp \
	fun_check.cpp \
	hes_lagrangian.cpp \
	hes_lu_det.cpp \
	hes_minor_det.cpp \
	hessian.cpp \
	hes_times_dir.cpp \
	independent.cpp \
	integer.cpp \
	interface2c.cpp\
	interp_onetape.cpp\
	interp_retape.cpp\
	jac_lu_det.cpp \
	jac_minor_det.cpp \
	jacobian.cpp \
	log10.cpp \
	log1p.cpp \
	log.cpp \
	lu_ratio.cpp \
	lu_vec_ad.cpp \
	lu_vec_ad.hpp \
	lu_vec_ad_ok.cpp \
	mul.cpp \
	mul_eq.cpp \
	mul_level.cpp \
	mul_level_ode.cpp \
	near_equal_ext.cpp \
	number_skip.cpp \
	numeric_type.cpp \
	num_limits.cpp \
	ode_stiff.cpp \
	ode_taylor.cpp \
	opt_val_hes.cpp \
	par_var.cpp \
	poly.cpp \
	pow.cpp \
	pow_int.cpp \
	print_for.cpp \
	reverse_checkpoint.cpp \
	reverse_one.cpp \
	reverse_three.cpp \
	reverse_two.cpp \
	rev_one.cpp \
	rev_two.cpp \
	rosen_34.cpp \
	runge45_2.cpp \
	seq_property.cpp \
	sign.cpp \
	sin.cpp \
	sinh.cpp \
	sqrt.cpp \
	stack_machine.cpp \
	sub.cpp \
	sub_eq.cpp \
	tan.cpp \
	tanh.cpp \
	tape_index.cpp \
	unary_minus.cpp \
	unary_plus.cpp \
	value.cpp \
	var2par.cpp \
	vec_ad.cpp

all: all-am

.SUFFIXES:
.SUFFIXES: .cpp .o .obj
$(srcdir)/makefile.in: # $(srcdir)/makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign example/general/makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign example/general/makefile
makefile: $(srcdir)/makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

clean-noinstLIBRARIES:
	-test -z "$(noinst_LIBRARIES)" || rm -f $(noinst_LIBRARIES)

libeigen.a: $(libeigen_a_OBJECTS) $(libeigen_a_DEPENDENCIES) $(EXTRA_libeigen_a_DEPENDENCIES) 
	$(AM_V_at)-rm -f libeigen.a
	$(AM_V_AR)$(libeigen_a_AR) libeigen.a $(libeigen_a_OBJECTS) $(libeigen_a_LIBADD)
	$(AM_V_at)$(RANLIB) libeigen.a

clean-checkPROGRAMS:
	-test -z "$(check_PROGRAMS)" || rm -f $(check_PROGRAMS)

general$(EXEEXT): $(general_OBJECTS) $(general_DEPENDENCIES) $(EXTRA_general_DEPENDENCIES) 
	@rm -f general$(EXEEXT)
	$(AM_V_CXXLD)$(CXXLINK) $(general_OBJECTS) $(general_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/abort_recording.Po
include ./$(DEPDIR)/acos.Po
include ./$(DEPDIR)/acosh.Po
include ./$(DEPDIR)/ad_assign.Po
include ./$(DEPDIR)/ad_ctor.Po
include ./$(DEPDIR)/ad_fun.Po
include ./$(DEPDIR)/ad_in_c.Po
include ./$(DEPDIR)/ad_input.Po
include ./$(DEPDIR)/ad_output.Po
include ./$(DEPDIR)/add.Po
include ./$(DEPDIR)/add_eq.Po
include ./$(DEPDIR)/asin.Po
include ./$(DEPDIR)/asinh.Po
include ./$(DEPDIR)/atan.Po
include ./$(DEPDIR)/atan2.Po
include ./$(DEPDIR)/atanh.Po
include ./$(DEPDIR)/azmul.Po
include ./$(DEPDIR)/base_require.Po
include ./$(DEPDIR)/bender_quad.Po
include ./$(DEPDIR)/bool_fun.Po
include ./$(DEPDIR)/capacity_order.Po
include ./$(DEPDIR)/change_param.Po
include ./$(DEPDIR)/check_for_nan.Po
include ./$(DEPDIR)/compare.Po
include ./$(DEPDIR)/compare_change.Po
include ./$(DEPDIR)/complex_poly.Po
include ./$(DEPDIR)/cond_exp.Po
include ./$(DEPDIR)/cos.Po
include ./$(DEPDIR)/cosh.Po
include ./$(DEPDIR)/div.Po
include ./$(DEPDIR)/div_eq.Po
include ./$(DEPDIR)/equal_op_seq.Po
include ./$(DEPDIR)/erf.Po
include ./$(DEPDIR)/exp.Po
include ./$(DEPDIR)/expm1.Po
include ./$(DEPDIR)/fabs.Po
include ./$(DEPDIR)/for_one.Po
include ./$(DEPDIR)/for_two.Po
include ./$(DEPDIR)/forward.Po
include ./$(DEPDIR)/forward_dir.Po
include ./$(DEPDIR)/forward_order.Po
include ./$(DEPDIR)/fun_assign.Po
include ./$(DEPDIR)/fun_check.Po
include ./$(DEPDIR)/general.Po
include ./$(DEPDIR)/hes_lagrangian.Po
include ./$(DEPDIR)/hes_lu_det.Po
include ./$(DEPDIR)/hes_minor_det.Po
include ./$(DEPDIR)/hes_times_dir.Po
include ./$(DEPDIR)/hessian.Po
include ./$(DEPDIR)/independent.Po
include ./$(DEPDIR)/integer.Po
include ./$(DEPDIR)/interface2c.Po
include ./$(DEPDIR)/interp_onetape.Po
include ./$(DEPDIR)/interp_retape.Po
include ./$(DEPDIR)/jac_lu_det.Po
include ./$(DEPDIR)/jac_minor_det.Po
include ./$(DEPDIR)/jacobian.Po
include ./$(DEPDIR)/libeigen_a-eigen_array.Po
include ./$(DEPDIR)/libeigen_a-eigen_det.Po
include ./$(DEPDIR)/log.Po
include ./$(DEPDIR)/log10.Po
include ./$(DEPDIR)/log1p.Po
include ./$(DEPDIR)/lu_ratio.Po
include ./$(DEPDIR)/lu_vec_ad.Po
include ./$(DEPDIR)/lu_vec_ad_ok.Po
include ./$(DEPDIR)/mul.Po
include ./$(DEPDIR)/mul_eq.Po
include ./$(DEPDIR)/mul_level.Po
include ./$(DEPDIR)/mul_level_adolc.Po
include ./$(DEPDIR)/mul_level_adolc_ode.Po
include ./$(DEPDIR)/mul_level_ode.Po
include ./$(DEPDIR)/near_equal_ext.Po
include ./$(DEPDIR)/num_limits.Po
include ./$(DEPDIR)/number_skip.Po
include ./$(DEPDIR)/numeric_type.Po
include ./$(DEPDIR)/ode_stiff.Po
include ./$(DEPDIR)/ode_taylor.Po
include ./$(DEPDIR)/opt_val_hes.Po
include ./$(DEPDIR)/par_var.Po
include ./$(DEPDIR)/poly.Po
include ./$(DEPDIR)/pow.Po
include ./$(DEPDIR)/pow_int.Po
include ./$(DEPDIR)/print_for.Po
include ./$(DEPDIR)/rev_one.Po
include ./$(DEPDIR)/rev_two.Po
include ./$(DEPDIR)/reverse_checkpoint.Po
include ./$(DEPDIR)/reverse_one.Po
include ./$(DEPDIR)/reverse_three.Po
include ./$(DEPDIR)/reverse_two.Po
include ./$(DEPDIR)/rosen_34.Po
include ./$(DEPDIR)/runge45_2.Po
include ./$(DEPDIR)/seq_property.Po
include ./$(DEPDIR)/sign.Po
include ./$(DEPDIR)/sin.Po
include ./$(DEPDIR)/sinh.Po
include ./$(DEPDIR)/sqrt.Po
include ./$(DEPDIR)/stack_machine.Po
include ./$(DEPDIR)/sub.Po
include ./$(DEPDIR)/sub_eq.Po
include ./$(DEPDIR)/tan.Po
include ./$(DEPDIR)/tanh.Po
include ./$(DEPDIR)/tape_index.Po
include ./$(DEPDIR)/unary_minus.Po
include ./$(DEPDIR)/unary_plus.Po
include ./$(DEPDIR)/value.Po
include ./$(DEPDIR)/var2par.Po
include ./$(DEPDIR)/vec_ad.Po

.cpp.o:
	$(AM_V_CXX)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CXX)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXXCOMPILE) -c -o $@ $<

.cpp.obj:
	$(AM_V_CXX)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.obj$$||'`;\
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ `$(CYGPATH_W) '$<'` &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CXX)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXXCOMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

libeigen_a-eigen_det.o: eigen_det.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -MT libeigen_a-eigen_det.o -MD -MP -MF $(DEPDIR)/libeigen_a-eigen_det.Tpo -c -o libeigen_a-eigen_det.o `test -f 'eigen_det.cpp' || echo '$(srcdir)/'`eigen_det.cpp
	$(AM_V_at)$(am__mv) $(DEPDIR)/libeigen_a-eigen_det.Tpo $(DEPDIR)/libeigen_a-eigen_det.Po
#	$(AM_V_CXX)source='eigen_det.cpp' object='libeigen_a-eigen_det.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -c -o libeigen_a-eigen_det.o `test -f 'eigen_det.cpp' || echo '$(srcdir)/'`eigen_det.cpp

libeigen_a-eigen_det.obj: eigen_det.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -MT libeigen_a-eigen_det.obj -MD -MP -MF $(DEPDIR)/libeigen_a-eigen_det.Tpo -c -o libeigen_a-eigen_det.obj `if test -f 'eigen_det.cpp'; then $(CYGPATH_W) 'eigen_det.cpp'; else $(CYGPATH_W) '$(srcdir)/eigen_det.cpp'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/libeigen_a-eigen_det.Tpo $(DEPDIR)/libeigen_a-eigen_det.Po
#	$(AM_V_CXX)source='eigen_det.cpp' object='libeigen_a-eigen_det.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -c -o libeigen_a-eigen_det.obj `if test -f 'eigen_det.cpp'; then $(CYGPATH_W) 'eigen_det.cpp'; else $(CYGPATH_W) '$(srcdir)/eigen_det.cpp'; fi`

libeigen_a-eigen_array.o: eigen_array.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -MT libeigen_a-eigen_array.o -MD -MP -MF $(DEPDIR)/libeigen_a-eigen_array.Tpo -c -o libeigen_a-eigen_array.o `test -f 'eigen_array.cpp' || echo '$(srcdir)/'`eigen_array.cpp
	$(AM_V_at)$(am__mv) $(DEPDIR)/libeigen_a-eigen_array.Tpo $(DEPDIR)/libeigen_a-eigen_array.Po
#	$(AM_V_CXX)source='eigen_array.cpp' object='libeigen_a-eigen_array.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -c -o libeigen_a-eigen_array.o `test -f 'eigen_array.cpp' || echo '$(srcdir)/'`eigen_array.cpp

libeigen_a-eigen_array.obj: eigen_array.cpp
	$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -MT libeigen_a-eigen_array.obj -MD -MP -MF $(DEPDIR)/libeigen_a-eigen_array.Tpo -c -o libeigen_a-eigen_array.obj `if test -f 'eigen_array.cpp'; then $(CYGPATH_W) 'eigen_array.cpp'; else $(CYGPATH_W) '$(srcdir)/eigen_array.cpp'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/libeigen_a-eigen_array.Tpo $(DEPDIR)/libeigen_a-eigen_array.Po
#	$(AM_V_CXX)source='eigen_array.cpp' object='libeigen_a-eigen_array.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(libeigen_a_CXXFLAGS) $(CXXFLAGS) -c -o libeigen_a-eigen_array.obj `if test -f 'eigen_array.cpp'; then $(CYGPATH_W) 'eigen_array.cpp'; else $(CYGPATH_W) '$(srcdir)/eigen_array.cpp'; fi`

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
	$(MAKE) $(AM_MAKEFLAGS) $(check_PROGRAMS)
check: check-am
all-am: makefile $(LIBRARIES)
installdirs:
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-checkPROGRAMS clean-generic clean-noinstLIBRARIES \
	mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am:

.MAKE: check-am install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am check check-am clean \
	clean-checkPROGRAMS clean-generic clean-noinstLIBRARIES \
	cscopelist-am ctags ctags-am distclean distclean-compile \
	distclean-generic distclean-tags distdir dvi dvi-am html \
	html-am info info-am install install-am install-data \
	install-data-am install-dvi install-dvi-am install-exec \
	install-exec-am install-html install-html-am install-info \
	install-info-am install-man install-pdf install-pdf-am \
	install-ps install-ps-am install-strip installcheck \
	installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic pdf pdf-am ps ps-am tags tags-am uninstall \
	uninstall-am

.PRECIOUS: makefile


test: check
	./general

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:

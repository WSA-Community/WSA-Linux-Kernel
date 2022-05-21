cmd_arch/x86/tools/relocs_common.o := clang -Wp,-MMD,arch/x86/tools/.relocs_common.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./tools/include  -c -o arch/x86/tools/relocs_common.o arch/x86/tools/relocs_common.c

source_arch/x86/tools/relocs_common.o := arch/x86/tools/relocs_common.c

deps_arch/x86/tools/relocs_common.o := \
  arch/x86/tools/relocs.h \
  tools/include/tools/le_byteshift.h \

arch/x86/tools/relocs_common.o: $(deps_arch/x86/tools/relocs_common.o)

$(deps_arch/x86/tools/relocs_common.o):

cmd_arch/x86/tools/relocs_32.o := clang -Wp,-MMD,arch/x86/tools/.relocs_32.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./tools/include  -c -o arch/x86/tools/relocs_32.o arch/x86/tools/relocs_32.c

source_arch/x86/tools/relocs_32.o := arch/x86/tools/relocs_32.c

deps_arch/x86/tools/relocs_32.o := \
  arch/x86/tools/relocs.h \
  tools/include/tools/le_byteshift.h \
  arch/x86/tools/relocs.c \

arch/x86/tools/relocs_32.o: $(deps_arch/x86/tools/relocs_32.o)

$(deps_arch/x86/tools/relocs_32.o):

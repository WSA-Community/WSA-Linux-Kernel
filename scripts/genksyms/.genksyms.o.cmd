cmd_scripts/genksyms/genksyms.o := clang -Wp,-MMD,scripts/genksyms/.genksyms.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89       -c -o scripts/genksyms/genksyms.o scripts/genksyms/genksyms.c

source_scripts/genksyms/genksyms.o := scripts/genksyms/genksyms.c

deps_scripts/genksyms/genksyms.o := \
  scripts/genksyms/genksyms.h \

scripts/genksyms/genksyms.o: $(deps_scripts/genksyms/genksyms.o)

$(deps_scripts/genksyms/genksyms.o):

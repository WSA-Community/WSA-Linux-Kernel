cmd_scripts/genksyms/parse.tab.o := clang -Wp,-MMD,scripts/genksyms/.parse.tab.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89      -I ./scripts/genksyms -c -o scripts/genksyms/parse.tab.o scripts/genksyms/parse.tab.c

source_scripts/genksyms/parse.tab.o := scripts/genksyms/parse.tab.c

deps_scripts/genksyms/parse.tab.o := \
  scripts/genksyms/genksyms.h \

scripts/genksyms/parse.tab.o: $(deps_scripts/genksyms/parse.tab.o)

$(deps_scripts/genksyms/parse.tab.o):

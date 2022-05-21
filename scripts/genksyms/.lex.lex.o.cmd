cmd_scripts/genksyms/lex.lex.o := clang -Wp,-MMD,scripts/genksyms/.lex.lex.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89      -I ./scripts/genksyms -c -o scripts/genksyms/lex.lex.o scripts/genksyms/lex.lex.c

source_scripts/genksyms/lex.lex.o := scripts/genksyms/lex.lex.c

deps_scripts/genksyms/lex.lex.o := \
  scripts/genksyms/genksyms.h \
  scripts/genksyms/parse.tab.h \
  scripts/genksyms/keywords.c \

scripts/genksyms/lex.lex.o: $(deps_scripts/genksyms/lex.lex.o)

$(deps_scripts/genksyms/lex.lex.o):

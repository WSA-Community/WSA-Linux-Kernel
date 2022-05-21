cmd_scripts/genksyms/parse.tab.c := bison --version >/dev/null; bison -o scripts/genksyms/parse.tab.c --defines=scripts/genksyms/parse.tab.h -t -l scripts/genksyms/parse.y 2>/dev/null

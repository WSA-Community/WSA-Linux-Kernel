cmd_scripts/asn1_compiler := clang -Wp,-MMD,scripts/.asn1_compiler.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89      -I./include   -o scripts/asn1_compiler scripts/asn1_compiler.c   

source_scripts/asn1_compiler := scripts/asn1_compiler.c

deps_scripts/asn1_compiler := \
  include/linux/asn1_ber_bytecode.h \
  include/linux/asn1.h \

scripts/asn1_compiler: $(deps_scripts/asn1_compiler)

$(deps_scripts/asn1_compiler):

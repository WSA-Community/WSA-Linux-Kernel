cmd_usr/gen_init_cpio := clang -Wp,-MMD,usr/.gen_init_cpio.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o usr/gen_init_cpio usr/gen_init_cpio.c   

source_usr/gen_init_cpio := usr/gen_init_cpio.c

deps_usr/gen_init_cpio := \

usr/gen_init_cpio: $(deps_usr/gen_init_cpio)

$(deps_usr/gen_init_cpio):

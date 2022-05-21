cmd_scripts/selinux/genheaders/genheaders := clang -Wp,-MMD,scripts/selinux/genheaders/.genheaders.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./include/uapi -I./include -I./security/selinux/include    -o scripts/selinux/genheaders/genheaders scripts/selinux/genheaders/genheaders.c   

source_scripts/selinux/genheaders/genheaders := scripts/selinux/genheaders/genheaders.c

deps_scripts/selinux/genheaders/genheaders := \
  security/selinux/include/classmap.h \
  include/uapi/linux/capability.h \
  include/uapi/linux/types.h \
  include/uapi/linux/posix_types.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/uapi/linux/socket.h \
  security/selinux/include/initial_sid_to_string.h \

scripts/selinux/genheaders/genheaders: $(deps_scripts/selinux/genheaders/genheaders)

$(deps_scripts/selinux/genheaders/genheaders):

cmd_usr/initramfs_data.o := clang -Wp,-MMD,usr/.initramfs_data.o.d  -nostdinc -isystem /usr/lib/llvm-12/lib/clang/12.0.1/include -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -Qunused-arguments -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -no-integrated-as -Werror=unknown-warning-option -m64 -DCONFIG_X86_X32_ABI -DCC_USING_NOP_MCOUNT -DCC_USING_FENTRY    -c -o usr/initramfs_data.o usr/initramfs_data.S

source_usr/initramfs_data.o := usr/initramfs_data.S

deps_usr/initramfs_data.o := \
    $(wildcard include/config/64bit.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \

usr/initramfs_data.o: $(deps_usr/initramfs_data.o)

$(deps_usr/initramfs_data.o):

# WSA-Linux-Kernel
Mirror for the Windows Subsystem for Android (WSA) kernel source code, and superuser.

## Branches
- [master](https://github.com/WSA-Community/WSA-Linux-Kernel/tree/master): (Default) Description and solutions
- [source](https://github.com/WSA-Community/WSA-Linux-Kernel/tree/source): Windows Subsystem for Android kernel source code
- [kernelsu](https://github.com/WSA-Community/WSA-Linux-Kernel/tree/kernelsu): Windows Subsystem for Android kernel with [Kernel-Assisted Superuser](https://github.com/MlgmXyysd/kernel-assisted-superuser) patched source code

## GitHub Actions
This repository uses GitHub Actions to automatically build kernel images from source.

[![WSA Kernel Build](https://github.com/WSA-Community/WSA-Linux-Kernel/actions/workflows/build_source.yml/badge.svg)](https://github.com/WSA-Community/WSA-Linux-Kernel/actions/workflows/build_source.yml)
- x86_64
- arm64

 [![WSA Kernel Build (Superuser)](https://github.com/WSA-Community/WSA-Linux-Kernel/actions/workflows/build_kernelsu.yml/badge.svg)](https://github.com/WSA-Community/WSA-Linux-Kernel/actions/workflows/build_kernelsu.yml)
- X86_64 - Superuser
- arm64 - Superuser

## wsa-kernelsu-addons
Automatically add stuffs required by kernelsu for WSA kernel tree. From inside a kernelsu-patched kernel tree of yours:
```
curl -LsS "https://raw.githubusercontent.com/WSA-Community/WSA-Linux-Kernel/master/wsa-kernelsu-addons.sh" | bash -
```

## Kernel source commit history
The repository only mirrors the official source code provided by Microsoft. Microsoft does not provide an official commit history.

However, according to [alk3pInjection](https://github.com/alk3p/), the WSA kernel source code is a merge of Android Common Kernel on top of WSL2.

For more details, please refer to [alk3p/WSA-Linux-Kernel](https://github.com/alk3p/WSA-Linux-Kernel).

## Credits
- [MlgmXyysd](https://github.com/MlgmXyysd/)
- [alk3pInjection](https://github.com/alk3p/)
- [LibXZR](https://github.com/libxzr/)
- [Shelling](https://github.com/cjybyjk/)
- [Jason A. Donenfeld](https://github.com/zx2c4/) - [Original Kernel-Assisted Superuser](https://git.zx2c4.com/kernel-assisted-superuser/)
- [Microsoft LLC.](https://thirdpartysource.microsoft.com/) - Remote kernel source code

## License
Kernel source code (source and kernelsu branch) is licensed under the GPL v2.

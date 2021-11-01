#!/bin/bash
#
# Copyright (C) 2002-2022 Jim Wu <mlgmxyysd@meowcat.org>. All Rights Reserved.
#

if ! [[ -d .git && -f configs/wsa/config-wsa-5.10 && -f configs/wsa/config-wsa-arm64-5.10 ]]; then
	echo "[!] Please run this from the top level of your kernel tree." >&2
	exit 1
fi

config_patch="#
# Kernel-Assisted Superuser
#
# Jim.Wu, 2021/10/25
#
CONFIG_ASSISTED_SUPERUSER=y
# end of Kernel-Assisted Superuser"

echo "[+] Patching"

#
# Config patch
#
# Jim.Wu, 2021/10/25
#
grep -q CONFIG_ASSISTED_SUPERUSER=y configs/wsa/config-wsa-5.10 || echo "${config_patch}" >> configs/wsa/config-wsa-5.10
grep -q CONFIG_ASSISTED_SUPERUSER=y configs/wsa/config-wsa-arm64-5.10 || echo "${config_patch}" >> configs/wsa/config-wsa-arm64-5.10

echo "[+] Committing"
git add configs/wsa/config-wsa-5.10 configs/wsa/config-wsa-arm64-5.10
git commit -s -m "android: Add superuser addons" configs/wsa/config-wsa-5.10 configs/wsa/config-wsa-arm64-5.10

echo "[+] Done!"


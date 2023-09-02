savedcmd_/home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.o :=  gcc-12 -Wp,-MMD,/home/azamat/rtl8812au/core/mesh/.rtw_mesh_hwmp.o.d -nostdinc -I/usr/src/linux-headers-6.3.0-kali1-common/arch/arm64/include -I./arch/arm64/include/generated -I/usr/src/linux-headers-6.3.0-kali1-common/include -I./include -I/usr/src/linux-headers-6.3.0-kali1-common/arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I/usr/src/linux-headers-6.3.0-kali1-common/include/uapi -I./include/generated/uapi -include /usr/src/linux-headers-6.3.0-kali1-common/include/linux/compiler-version.h -include /usr/src/linux-headers-6.3.0-kali1-common/include/linux/kconfig.h -include /usr/src/linux-headers-6.3.0-kali1-common/include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -DCC_USING_PATCHABLE_FUNCTION_ENTRY -DKASAN_SHADOW_SCALE_SHIFT= -fmacro-prefix-map=/usr/src/linux-headers-6.3.0-kali1-common/= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -funsigned-char -std=gnu11 -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -mabi=lp64 -fno-asynchronous-unwind-tables -fno-unwind-tables -mbranch-protection=pac-ret -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=2048 -fstack-protector-strong -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-dangling-pointer -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fno-stack-clash-protection -fpatchable-function-entry=4,2 -falign-functions=8 -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wcast-function-type -Wno-stringop-truncation -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -Wno-array-bounds -Wno-alloc-size-larger-than -Wimplicit-fallthrough=5 -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -g -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1336 -fno-pie -O3 -Wno-unused-variable -Wno-unused-label -Wno-unused-function -Wno-implicit-fallthrough -Wno-cast-function-type -Wno-unknown-pragmas -Wno-address -Wno-vla -g -I/home/azamat/rtl8812au/include -I/usr/src/linux-headers-6.3.0-kali1-common//home/azamat/rtl8812au/include -I/home/azamat/rtl8812au/hal/phydm -I/usr/src/linux-headers-6.3.0-kali1-common//home/azamat/rtl8812au/hal/phydm -DDRV_NAME=\"rtl88XXau\" -I/home/azamat/rtl8812au/platform -I/usr/src/linux-headers-6.3.0-kali1-common//home/azamat/rtl8812au/platform -I/home/azamat/rtl8812au/hal/btc -I/usr/src/linux-headers-6.3.0-kali1-common//home/azamat/rtl8812au/hal/btc -DCONFIG_RTL8812A -DCONFIG_RTL8821A -DCONFIG_RTL8814A -DCONFIG_MP_INCLUDED -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8814au.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE=1 -DCONFIG_TXPWR_BY_RATE_EN=0 -DCONFIG_TXPWR_LIMIT=1 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_IEEE80211W -DHIGH_ACTIVE_HST2DEV=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_WIFI_MONITOR -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_NETIF_SG -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -I/home/azamat/rtl8812au/hal/phydm  -DMODULE  -DKBUILD_BASENAME='"rtw_mesh_hwmp"' -DKBUILD_MODNAME='"88XXau"' -D__KBUILD_MODNAME=kmod_88XXau -c -o /home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.o /home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.c  

source_/home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.o := /home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.c

deps_/home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.o := \
    $(wildcard include/config/RTW_MESH) \
    $(wildcard include/config/RTW_MESH_ON_DMD_GANN) \
    $(wildcard include/config/RTW_MESH_ADD_ROOT_CHK) \
  /usr/src/linux-headers-6.3.0-kali1-common/include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  /usr/src/linux-headers-6.3.0-kali1-common/include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  /usr/src/linux-headers-6.3.0-kali1-common/include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/FUNCTION_ALIGNMENT) \
    $(wildcard include/config/CC_IS_GCC) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  /usr/src/linux-headers-6.3.0-kali1-common/include/linux/compiler_attributes.h \
  /usr/src/linux-headers-6.3.0-kali1-common/include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/SHADOW_CALL_STACK) \
    $(wildcard include/config/KCOV) \
  /usr/src/linux-headers-6.3.0-kali1-common/arch/arm64/include/asm/compiler.h \

/home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.o: $(deps_/home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.o)

$(deps_/home/azamat/rtl8812au/core/mesh/rtw_mesh_hwmp.o):

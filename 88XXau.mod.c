#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4f0fdbb6, "skb_pull" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9f55a6cb, "usb_free_coherent" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x80fdbba9, "cfg80211_sinfo_alloc_tid_stats" },
	{ 0x999e8297, "vfree" },
	{ 0xaf0c3046, "wiphy_register" },
	{ 0xf7e2386, "cfg80211_remain_on_channel_expired" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4d24402, "iwe_stream_add_point" },
	{ 0xc4bbdb72, "__netdev_alloc_skb" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x92c856a3, "iwe_stream_add_event" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x31f97805, "cfg80211_del_sta_sinfo" },
	{ 0x2449cf64, "netif_tx_stop_all_queues" },
	{ 0x7e8191c6, "seq_release" },
	{ 0xf440b14c, "wiphy_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9fe18d, "usb_autopm_get_interface" },
	{ 0x68ffbc6b, "filp_open" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x80a6b95, "usb_reset_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b079231, "alt_cb_patch_nops" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x3a0ed160, "usb_alloc_urb" },
	{ 0x8919006, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x161d5c18, "single_open" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49a50cc8, "napi_schedule_prep" },
	{ 0xd13e713d, "param_ops_int" },
	{ 0x5059c896, "usb_control_msg" },
	{ 0x1c329485, "cfg80211_ch_switch_notify" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x12520a58, "filp_close" },
	{ 0x637bda71, "usb_put_dev" },
	{ 0x604dd0f9, "cfg80211_ch_switch_started_notify" },
	{ 0xc08827d1, "ieee80211_get_channel_khz" },
	{ 0x5a921311, "strncmp" },
	{ 0x581a02d1, "skb_clone" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x854979ae, "cfg80211_ready_on_channel" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0xd89d9299, "skb_put" },
	{ 0x97630356, "kernel_read" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xa916b694, "strnlen" },
	{ 0x3d153a90, "proc_get_parent_data" },
	{ 0xcd9144fe, "device_set_wakeup_capable" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x9c800454, "kmalloc_trace" },
	{ 0xf531d3d, "__netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x424b4aaf, "seq_open" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf2a76da8, "wiphy_free" },
	{ 0x43b56b0f, "param_array_ops" },
	{ 0x4a881875, "wiphy_new_nm" },
	{ 0xb9a9f5bf, "kmalloc_caches" },
	{ 0x746cd1c6, "cfg80211_get_bss" },
	{ 0xa6257a2f, "complete" },
	{ 0x3a94743a, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb141d18, "netif_napi_add_weight" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xe9ff6c5f, "init_net" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xafdb6e9a, "kthread_stop" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x9c7bee2f, "kernel_write" },
	{ 0x9253a5b4, "cfg80211_disconnected" },
	{ 0xaec62299, "netif_tx_wake_queue" },
	{ 0x3ac002a6, "cfg80211_michael_mic_failure" },
	{ 0xd05f0039, "device_wakeup_enable" },
	{ 0xcd054f92, "skb_dequeue" },
	{ 0x6beba7b2, "usb_deregister" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x34188a7b, "netif_rx" },
	{ 0x4e7ace3f, "cfg80211_ibss_joined" },
	{ 0x9166fada, "strncpy" },
	{ 0xdeb568a9, "skb_copy_bits" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3e46185e, "param_ops_charp" },
	{ 0x1121ace7, "skb_copy" },
	{ 0xc1900365, "seq_lseek" },
	{ 0x563cb1cc, "register_netdevice" },
	{ 0xb62fd689, "wake_up_process" },
	{ 0xd4690fcf, "kthread_create_on_node" },
	{ 0x43afadee, "ieee80211_radiotap_iterator_init" },
	{ 0x467441e9, "param_ops_uint" },
	{ 0x64e0b593, "usb_get_dev" },
	{ 0x38e9542b, "netif_carrier_off" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xf098e75d, "seq_read" },
	{ 0xa131f3bd, "_dev_info" },
	{ 0xea3ac3f0, "napi_complete_done" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1066ecec, "cfg80211_scan_done" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9dc725c5, "remove_proc_entry" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x64fa4332, "cfg80211_roamed" },
	{ 0x7eefb460, "cfg80211_put_bss" },
	{ 0x9e363ad4, "register_netdev" },
	{ 0xf0de651d, "dev_addr_mod" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xcf2a6966, "up" },
	{ 0x7f4a5bcc, "cfg80211_connect_done" },
	{ 0xdb21204d, "skb_trim" },
	{ 0x1bbec1bf, "kill_pid" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x1a1f4511, "skb_push" },
	{ 0x1000e51, "schedule" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0xa5ab3ca3, "usb_alloc_coherent" },
	{ 0x86c6e0c7, "find_vpid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7dd52700, "proc_create_data" },
	{ 0x14f06a65, "__dev_kfree_skb_any" },
	{ 0x984f677d, "cfg80211_unlink_bss" },
	{ 0x31cf3e27, "netif_carrier_on" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xb907c682, "usb_kill_urb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x75910cca, "dev_alloc_name" },
	{ 0x7acb86ed, "ieee80211_radiotap_iterator_next" },
	{ 0x122c3a7e, "_printk" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdfae9f04, "cfg80211_inform_bss_frame_data" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf49236d, "flush_signals" },
	{ 0xf9a482f9, "msleep" },
	{ 0x31e5893f, "unregister_netdev" },
	{ 0xd17c7a73, "cfg80211_new_sta" },
	{ 0x368fe226, "usb_free_urb" },
	{ 0x5176cc6e, "alloc_etherdev_mqs" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x760a0f4f, "yield" },
	{ 0xd09e6c58, "netif_receive_skb" },
	{ 0xfb400554, "usb_submit_urb" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb79ce34b, "__pskb_copy_fclone" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xae180e15, "unregister_netdevice_queue" },
	{ 0x6c07a76b, "free_netdev" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x97f0ad3e, "napi_disable" },
	{ 0xc2489f2, "cfg80211_rx_mgmt_ext" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x803d9731, "wiphy_apply_custom_regulatory" },
	{ 0xc9bb90b, "dev_get_by_name" },
	{ 0xd1154be1, "proc_mkdir_data" },
	{ 0x4829a47e, "memcpy" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfa2dba55, "skb_queue_tail" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfeb916b7, "napi_enable" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x65ba735b, "__stack_chk_fail" },
	{ 0x11346ecc, "cfg80211_mgmt_tx_status_ext" },
	{ 0xe68da9ae, "single_release" },
	{ 0xa74032d, "napi_gro_receive" },
	{ 0x6ae4d1a1, "cfg80211_external_auth_request" },
	{ 0xf6c8fa63, "eth_type_trans" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcb7266eb, "__napi_schedule" },
	{ 0xfd3ee7ca, "usb_register_driver" },
	{ 0x401721d7, "module_layout" },
};

MODULE_INFO(depends, "usbcore,cfg80211");

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2604p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0823d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0411p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p029Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0953d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p011Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p011Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p6249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1852d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9054d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p809Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p809Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA834d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA833d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3750EB1A5D6DE2ECED25112");

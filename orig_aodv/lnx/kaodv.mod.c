#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2996440, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x12abd86a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xec2ac905, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub_return) },
	{ 0x2de3052, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6cf0c18d, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x389bdeba, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0x9095855b, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0xb7c642a1, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0xb31df86f, __VMLINUX_SYMBOL_STR(__icmp_send) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc7dc1736, __VMLINUX_SYMBOL_STR(in_dev_finish_destroy) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x15511dcb, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1f7386be, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_add) },
	{ 0xddf8cdd0, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa58dee99, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x1ea06663, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x9040e77c, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xebf5be26, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x360ff19f, __VMLINUX_SYMBOL_STR(down) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x9332ceb5, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x6cf84426, __VMLINUX_SYMBOL_STR(nf_register_net_hook) },
	{ 0xa873a473, __VMLINUX_SYMBOL_STR(nf_unregister_net_hook) },
	{ 0x95ac88ae, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xe4297f9c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x14da7fd, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xbbb5fd24, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x52f4673b, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0x3908fab5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x445f18ce, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x6833b30a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa00bbe81, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x11bdc118, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbbae972, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x996a58e4, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0xf378d078, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


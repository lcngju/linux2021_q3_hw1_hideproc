#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
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
__used __section(__versions) = {
	{ 0xa4b86400, "module_layout" },
	{ 0x31ca542f, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5739c63, "cdev_init" },
	{ 0x779a18af, "kstrtoll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x8b58c8f8, "device_create" },
	{ 0xe007de41, "kallsyms_lookup_name" },
	{ 0xd2198226, "cdev_add" },
	{ 0xc8f162c9, "ftrace_set_filter_ip" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb3a666c0, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x58f03b99, "register_ftrace_function" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xcaed4f8, "__class_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8915AF80FB56207AAABC3CB");

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init test_module_init(void)
{
    printk(KERN_INFO "test_module: Hello from kernel 6.1!\\n");
    return 0;
}

static void __exit test_module_exit(void)
{
    printk(KERN_INFO "test_module: Goodbye from kernel 6.1!\\n");
}

module_init(test_module_init);
module_exit(test_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple test module for kernel 6.1");
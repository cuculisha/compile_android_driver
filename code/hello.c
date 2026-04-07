#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Example");
MODULE_DESCRIPTION("Test module for kernel 4.14.186");

static int __init my_init(void)
{
    printk(KERN_INFO "Hello from kernel 4.14.186 module\n");
    printk(KERN_INFO "Kernel release: %s\n", UTS_RELEASE);
    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_INFO "Goodbye from kernel 4.14.186 module\n");
}

module_init(my_init);
module_exit(my_exit);
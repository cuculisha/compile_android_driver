#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/utsname.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Example");
MODULE_DESCRIPTION("Test module for kernel 6.1.118");

static int __init my_init(void)
{
    printk(KERN_INFO "Hello from kernel 6.1.118 module\n");
    printk(KERN_INFO "Kernel release: %s\n", init_uts_ns.name.release);
    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_INFO "Goodbye from kernel 6.1.118 module\n");
}

module_init(my_init);
module_exit(my_exit);

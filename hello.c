/*
 * hello.c : simple kernel module
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init (void)
{
        printk (KERN_INFO "HELLO WORLD!\n");

        return (0);
}

static void __exit hello_exit (void)
{
        printk (KERN_INFO "Goodbye from Hello World\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Curtis Wald <curtis.wald@nxp.com>");
MODULE_DESCRIPTION("Hello World Module Example");
MODULE_LICENSE("GPL");

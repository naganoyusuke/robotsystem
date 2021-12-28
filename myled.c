#include <linux/module.h>   
MODULE_AUTHOR("Ryuichi Ueda and Yusuke Nagano");
MODULE_DESCRIPTION("driver for LED control");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.0.1");
static int __init init_mod(void)
{
       printk(KERN_INFO "%s is loaded.\n", __FILE__);
       return 0;
}

static void __exit cleanup_mod(void)
{
        printk(KERN_INFO "%s is unlodead.\n",__FILE__);
}

module_init(init_mod);
module_exit(cleanup_mod);

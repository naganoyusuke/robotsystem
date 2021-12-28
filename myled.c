#includo<linux/module.h>

static int _init init_mod(void)
{
       printk(KERN_INFO"%s is loaded.\n", __FILE__):
       return 0;
}

static void__exit cleanup_mod(void)
{
        printk(KERN_INFO"%s is unlodead.\n"__FILE__);
}

module_init(init_mod);
module_exit(cleanup_mod);

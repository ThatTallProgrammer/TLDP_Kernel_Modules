#include <linux/module.h> // needed for all modules
#include <linux/kernel.h> // needed for KERN_INFO

/*
 * Function: init_module
 * ---------------------
 * required function to initialize module
 * after kernel 2.3.1 any name can be used
 * called when module is insmodded into the kernel space
 * registers a handler with the kernel or replaces kernel functions
 *
 * return: 0 if successfully loaded and !0 otherwise
 */
int init_module(void){

  printk(KERN_INFO "Hello World 1\n"); // printk is designed to log info or give warnings

return 0;
}

/*
 * Function: cleanup_module
 * ------------------------
 * function is called when module is rmmodded
 * section to hold code that undoes what init_module does
 *   so that the module can be unloaded safely
 */
void cleanup_module(void){

  printk(KERN_INFO "Goodbye World 1\n");

}


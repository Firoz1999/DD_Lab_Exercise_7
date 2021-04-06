# DD_Lab_Exercise_7

Get base address of recently loaded kernel module in kernel's virtual address space from file ~/proc/modules using command "tail /proc/modules".
Here highlighted one is realtek module whose base address is (0xffffffffc03d6000) in kernel's virtual address space.
![Get_Virtual_address_of_Realtek_kernel_module](https://user-images.githubusercontent.com/35663501/113764837-208d6700-9739-11eb-9aae-31900abf2521.png)

Running the code.c file (resulting into seg fault)
![output](https://user-images.githubusercontent.com/35663501/113765343-c345e580-9739-11eb-9ca8-f44658cbd155.png)

Checking the log files

![syslog](https://user-images.githubusercontent.com/35663501/113765429-deb0f080-9739-11eb-8fe5-a2f0593b409a.png)

Here, we could see segfault at address 0xffffffffc03d6000 with error code 5
error code 5 means - reading from a memory area that is mapped but not readable, this is probably because it's pointing somewhere in the kernel's area of the address space.

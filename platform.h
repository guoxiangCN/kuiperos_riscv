#ifndef __KUIPEROS_PLATFORM_H__
#define __KUIPEROS_PLATFORM_H__

#define MAXNUM_CPU 8

/*
 * MemoryMap
 * see https://github.com/qemu/qemu/blob/master/hw/riscv/virt.c, virt_memmap[]
 * 0x00001000 -- boot ROM, provided by qemu
 * 0x02000000 -- CLINT
 * 0x0C000000 -- PLIC
 * 0x10000000 -- UART0
 * 0x10001000 -- virtio disk
 * 0x80000000 -- boot ROM jumps here in machine mode, where we load our kernel
 */
#define UART0 0x10000000L

#endif

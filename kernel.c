#include "defs.h"
#include "riscv.h"
#include "task.h"

void delay(uint64_t n)
{
	while(n != 0){
		asm volatile("nop");
		n--;
	}
}

static BOOL g_kernel_started_ = FALSE;

void kmain(void)
{
	uart_init();

		
	printf("kuiperos_riscv booting...\n");
	printf("ARCH: riscv32_ima");


	mem_page_init();
	sched_init();
	schedule();

	panic("unreach code");
}

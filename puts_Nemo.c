void puts_Nemo(char * str)
{
	char *str2 = str;
	while ( *str2 != 0 ){
		asm("movq $0,%%rdi \n\t"
			"movq %0,%%rsi \n\t"
			"movq $1,%%rdx \n\t"
			"movq $1,%%rax \n\t"
			"syscall"
			:
			:"g"(str2)
			:"%rdi","%rsi","%rdx","%rax"
			);
		str2++;
	}
}

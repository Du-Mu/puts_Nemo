void putc_Nemo(char * str)
{
	char *str2 = str;
	while ( *(str2++) != 0 )
		asm("movl $0,%%ebx \n\t"
			"movl %0,%%ecx \n\t"
			"movl $1,%%edx \n\t"
			"movl $4,%%eax \n\t"
			"int $0x80 \n\t"
			:
			:"r"(str2)
			:"%eax","%ebx","%ecx","%edx"
			);

}
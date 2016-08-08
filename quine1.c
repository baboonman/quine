#include<stdio.h>
int	main(void)
{
	char *s = "#include<stdio.h>%cint%cmain(void)%c{%c%cchar *s = %c%s%c;%c%cprintf(s,10,9,10,10,9,34,s,34,10,9,10,9,10,10);%c%creturn (0);%c}%c";
	printf(s,10,9,10,10,9,34,s,34,10,9,10,9,10,10);
	return (0);
}

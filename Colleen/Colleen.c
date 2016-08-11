#include <stdio.h>

void	print_quine(char *s)
{
	printf(s,10,10,9,10,10,9,10,10,10,10,9,10,10,10,9,9,10,10,9,10,9,9,10,9,10,9,34,s,34,10,9,10,9,10,10);
}

/*
	First comment.
*/

int		main(void)
{
	/*
		Second comment.
	*/
	char *s = "#include <stdio.h>%c%cvoid%cprint_quine(char *s)%c{%c%cprintf(s,10,10,9,10,10,9,10,10,10,10,9,10,10,10,9,9,10,10,9,10,9,9,10,9,10,9,34,s,34,10,9,10,9,10,10);%c}%c%c/*%c%cFirst comment.%c*/%c%cint%c%cmain(void)%c{%c%c/*%c%c%cSecond comment.%c%c*/%c%cchar *s = %c%s%c;%c%cprint_quine(s);%c%creturn (0);%c}%c";
	print_quine(s);
	return (0);
}

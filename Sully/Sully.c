#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *s = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c%cchar *s = %c%s%c;%cchar *sc = %c%s%c;%cchar *sf = %c%s%c;%c%cint%c%cmain(void)%c{%c%cint i = %d;%c%cchar f[10];%c%cchar comp[62];%c%cif (strcmp(__FILE__, %cSully.c%c)) {--i;}%c%csprintf(comp,sc,i,i,i);%c%csprintf(f,sf,i);%c%cFILE *fp = fopen(f,%cw%c);%c%cfprintf(fp,s,10,10,10,10,34,s,34,10,34,sc,34,10,34,sf,34,10,10,9,9,10,10,9,i,10,9,10,9,10,9,34,34,10,9,10,9,10,9,34,34,10,9,10,9,10,9,10,9,9,10,9,10,10);%c%cfclose(fp);%c%cif (i > 0)%c%c%csystem(comp);%c%creturn (0);%c}%c";
char *sc = "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c && ./Sully_%d";
char *sf = "Sully_%d.c";

int		main(void)
{
	int i = 5;
	char f[10];
	char comp[62];
	if (strcmp(__FILE__, "Sully.c")) {--i;}
	sprintf(comp,sc,i,i,i);
	sprintf(f,sf,i);
	FILE *fp = fopen(f,"w");
	fprintf(fp,s,10,10,10,10,34,s,34,10,34,sc,34,10,34,sf,34,10,10,9,9,10,10,9,i,10,9,10,9,10,9,34,34,10,9,10,9,10,9,34,34,10,9,10,9,10,9,10,9,9,10,9,10,10);
	fclose(fp);
	if (i > 0)
		system(comp);
	return (0);
}

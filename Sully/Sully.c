#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *s = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c%cchar *s = %c%s%c;%cchar *sc = %c%s%c;%cchar *sf = %c%s%c;%cchar *se = %c%s%c;%c%cint%c%cmain(void)%c{%c%cint i = %d;%c%cchar f[10];%c%cchar comp[72];%c%cchar exec[16];%c%cif (strcmp(__FILE__, %cSully.c%c)) {--i;}%c%csprintf(f,sf,i);%c%csprintf(exec,se,i);%c%cif (i > 0)%c%c%csprintf(comp,sc,i,i,exec);%c%celse%c%c%csprintf(comp,sc,i,i,%c%c);%c%cFILE *fp = fopen(f,%cw%c);%c%cfprintf(fp,s,10,10,10,10,34,s,34,10,34,sc,34,10,34,sf,34,10,34,se,34,10,10,9,9,10,10,9,i,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10,9,10,9,9,10,9,10,9,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,10,10);%c%cfclose(fp);%c%csystem(comp);%c%creturn (0);%c}%c";
char *sc = "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c %s";
char *sf = "Sully_%d.c";
char *se = "&& ./Sully_%d";

int		main(void)
{
	int i = 5;
	char f[10];
	char comp[72];
	char exec[16];
	if (strcmp(__FILE__, "Sully.c")) {--i;}
	sprintf(f,sf,i);
	sprintf(exec,se,i);
	if (i > 0)
		sprintf(comp,sc,i,i,exec);
	else
		sprintf(comp,sc,i,i,"");
	FILE *fp = fopen(f,"w");
	fprintf(fp,s,10,10,10,10,34,s,34,10,34,sc,34,10,34,sf,34,10,34,se,34,10,10,9,9,10,10,9,i,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10,9,10,9,9,10,9,10,9,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,10,10);
	fclose(fp);
	system(comp);
	return (0);
}

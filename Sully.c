#include <stdio.h>
#include <stdlib.h>
#define O(x)char*s=#x;x
#define Q(x) O(x)
Q(
int		main(void)
{
	int i = 5;
	char comp[62];
	sprintf(comp, "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c && ./Sully_%d",i,i,i);
	char f[10];
	sprintf(f, "Sully_%d.c",i);
	FILE *fp = fopen(f,"w");
	fprintf(fp,"#include <stdio.h>\n#include <stdlib.h>\n#define O(x)char*s=#x;x\n#define Q(x) O(x)\nQ(%s)",s);
	fclose(fp);
	if (i > 6)
		system(comp);
	return (0);
}
)

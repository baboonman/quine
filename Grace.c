/*
	comment
*/
#include <stdio.h>
#define O(x)char*s=#x;x
#define WF(f,m)FILE*fp=fopen(#f,#m);
#define FT(x)int main(){WF(Grace_kid.c,w)O(x)}
FT(fprintf(fp,"/*\n\tcomment\n*/\n#include <stdio.h>\n#define O(x)char*s=#x;x\n#define WF(f,m)FILE*fp=fopen(#f,#m);\n#define FT(x)int main(){WF(Grace_kid.c,w)O(x)}\nFT(%s)\n",s);fclose(fp);return(0);)

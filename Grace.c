#include <stdio.h>
#define D(x)char*s=x;
#define WF(x,s)FILE*fp=fopen(#x,#s);
#define FT(x)int main(){WF(Grace_kid.c,w)D("#include <stdio.h>%c#define D(x)char*s=#x;%c#define WF(x,s)FILE*fp=fopen(#x,#s);%c#define FT(x)int main(){WF(Grace_kid.c,w)D(%s)(x);fclose(fp);return(0);}%cFT(fprintf(fp,s,10,10,10,s,10,10))%c")(x);fclose(fp);return(0);}
FT(fprintf(fp,s,10,10,10,s,10,10))

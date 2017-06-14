/*
   Hello
*/
#include <fcntl.h>
#include <stdio.h>
#define FT(x)int main() {PRINTF return(0);}
#define STR "/*%c   Hello%c*/%c#include <fcntl.h>%c#include <stdio.h>%c#define FT(x)int main() {PRINTF return(0);}%c#define STR %c%s%c%c#define PRINTF dprintf(open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR), STR, 10, 10, 10, 10, 10, 10, 34, STR, 34, 10, 34, 34, 10, 10);%cFT(void)%c"
#define PRINTF dprintf(open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR), STR, 10, 10, 10, 10, 10, 10, 34, STR, 34, 10, 34, 34, 10, 10);
FT(void)

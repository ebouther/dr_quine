/*Hello*/
#include <fcntl.h>
#include <stdio.h>
#define DEF_1 int main() {PRINTF return(0);}
#define STR "/*Hello*/%c#include <fcntl.h>%c#include <stdio.h>%c#define DEF_1 int main() {PRINTF return(0);}%c#define STR %c%s%c%c#define PRINTF dprintf(open(%cgrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR), STR, 10, 10, 10, 10, 34, STR, 34, 10, 34, 34, 10, 10);%cDEF_1%c"
#define PRINTF dprintf(open("grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR), STR, 10, 10, 10, 10, 34, STR, 34, 10, 34, 34, 10, 10);
DEF_1

#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int i = 5;
char *filename = malloc(sizeof(11));
bzero(filename, 11);
strcat(filename, "Sully_X.c");
filename[6] = '0' + i;
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
char*str="#include <stdio.h>%c#include <fcntl.h>%c#include <string.h>%c#include <stdlib.h>%c#include <unistd.h>%cint main()%c{%cint i = %d;%cchar *filename = malloc(sizeof(11));%cbzero(filename, 11);%cstrcat(filename, %cSully_X.c%c);%cfilename[6] = '0' + i;%cint fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);%cchar*str=%c%s%c;%cdprintf(fd, str, 10, 10, 10, 10, 10, 10, 10, i - 1, 10, 10, 10, 34, 34, 10, 10, 10, 34, str, 34, 10, 10, 34, 34, 34, 34, 10, 34, 34, 34, 34, 10, 10, 10);%cexecl(%c/usr/bin/gcc%c, %cgcc%c, filename, NULL);%cexecl(%c./a.out%c, %ca.out%c, NULL);%creturn (0);%c}%c";
dprintf(fd, str, 10, 10, 10, 10, 10, 10, 10, i - 1, 10, 10, 10, 34, 34, 10, 10, 10, 34, str, 34, 10, 10, 34, 34, 34, 34, 10, 34, 34, 34, 34, 10, 10, 10);
execl("/usr/bin/gcc", "gcc", filename, NULL);
execl("./a.out", "a.out", NULL);
return (0);
}

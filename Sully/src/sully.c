#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int i = 5;
if(getenv("child"))i--;
char *filename = malloc(sizeof(11));
bzero(filename, 11);
strcat(filename, "Sully_X.c");
filename[6] = '0' + i;
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
char*str="#include <stdio.h>%c#include <fcntl.h>%c#include <string.h>%c#include <stdlib.h>%c#include <unistd.h>%cint main()%c{%cint i = %d;%cif(getenv(%cchild%c))i--;%cchar *filename = malloc(sizeof(11));%cbzero(filename, 11);%cstrcat(filename, %cSully_X.c%c);%cfilename[6] = '0' + i;%cint fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);%cchar*str=%c%s%c;%cdprintf(fd, str, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 34, str, 34, 10, 10, 34, 34, 10, 10, 10);%cchar *exec;asprintf(&exec, %c/usr/bin/gcc %%s -o sully_%%d && env -i child=1 ./sully_%%d%c, filename, i, i);if(i>0)system(exec);%creturn (0);%c}%c";
dprintf(fd, str, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10, 34, str, 34, 10, 10, 34, 34, 10, 10, 10);
char *exec;asprintf(&exec, "/usr/bin/gcc %s -o sully_%d && env -i child=1 ./sully_%d", filename, i, i);if(i>0)system(exec);
return (0);
}

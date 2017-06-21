#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int i = 5;
if(i <= 0)return(0);if(getenv("child"))i--;
char *filename = NULL;
asprintf(&filename, "Sully_%d.c", i);
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
char*str="#include <stdio.h>%c#include <fcntl.h>%c#include <string.h>%c#include <stdlib.h>%c#include <unistd.h>%cint main()%c{%cint i = %d;%cif(i <= 0)return(0);if(getenv(%cchild%c))i--;%cchar *filename = NULL;%casprintf(&filename, %cSully_%%d.c%c, i);%cint fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);%cchar*str=%c%s%c;%cdprintf(fd, str, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, str, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10);%cchar *exec;asprintf(&exec, %c/usr/bin/gcc %%s -o Sully_%%d%c, filename, i);system(exec);%casprintf(&exec, %cenv -i child=1 ./Sully_%%d%c, i);if(i>0)system(exec);%creturn (0);%c}%c";
dprintf(fd, str, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, str, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10);
char *exec;asprintf(&exec, "/usr/bin/gcc %s -o Sully_%d", filename, i);system(exec);
asprintf(&exec, "env -i child=1 ./Sully_%d", i);if(i>0)system(exec);
return (0);
}

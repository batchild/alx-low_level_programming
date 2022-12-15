#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


int main(void)

{
int w;
w = write(STDOUT_FILEND, "and that piece of art is usedul\" - Dora Korpar, 2015-10-19\n", 10);
if(w < 0)
{
 perror("Writing error: ");
}
return(1);
}

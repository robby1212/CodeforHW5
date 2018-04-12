#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

bool eof ( int fd )
{
    char buf[200];
    size_t nbytes;
    nbytes = sizeof(buf);
    
    if ( (read(fd, buf, nbytes)) != -1 )
    {
       printf("Something\n"); 
    }
}

int main () {
    printf("End of File Test\n");
    int fd = open("test.txt", O_RDONLY);

    if ( eof ( fd ) )
    {
        printf("EOF returned true\n");
    }
    else 
    {
        printf("EOF returned false\n");
    }
    return 0;
}

#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    if ((pid=fork())==0) 
    {
        printf("child\n");
    }
    else if (pid>0) 
    {
        wait(1);
        printf("parent\n");
    }
    return 0;
}

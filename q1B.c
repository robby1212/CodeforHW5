#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;
int status = 0;
    if ((pid=fork())==0) 
    {
        printf("child\n");
    }
    else if (pid>0) 
    {
        printf("parent\n");
    }

    wait(2);

    return 0;
}

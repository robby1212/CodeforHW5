#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    printf("Open File\n");
    int fd = open("test.txt", O_WRONLY | O_APPEND);

    lseek(fd, 0, SEEK_SET);
    write(fd, "abc", 3);
    close(fd);
}

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int fd;
    char * foo = "/tmp/foo";

    /* create the FIFO (named pipe) */
    mkfifo(foo, 0777);

    /* write "Hello" to the Foo Process */
    fd = open(foo, O_WRONLY);
    write(fd, "Hello", sizeof("Hello"));
    close(fd);

    /* remove the FIFO */
    unlink(foo);

    return 0;
}

#include "apue.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
    int n;
    char buf[BUFSIZ];

    while ((n = read(STDIN_FILENO, buf, BUFSIZ)) > 0)
        if (write(STDOUT_FILENO, buf, n) != n)
            err_sys("write error");

    if (n < 0)
        err_sys("read error");

    exit(0);
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    write(1, "exam\n", 5);

    return 0;
}

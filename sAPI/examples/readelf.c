/*!
 * \file readelf.c
 *
 * \Brief Dump Elf file.
 */

#include <stdio.h>

#include "../export/sreadelf.h"

static int readelf_example(const char *path)
{
    // update argunebt to take section of the elffile to dump
    sreadelf(path);

    return 0;
}

int main(int argc, char *argv[])
{
    if (argc == 2) {
        readelf_example(argv[1]);
    } else {
        printf("Usage:%s <path>\n", argv[0]);
    }

    return 0;
}

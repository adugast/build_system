#include <elf.h>
#include <errno.h>
#include <stdio.h>

static int get_header_file_64(FILE *fp, Elf64_Ehdr *header_64)
{
    fread(header_64, 1, sizeof(Elf64_Ehdr), fp);

    return (ferror(fp) != 0) ? -1 : 0;
}

int sreadelf(const char *path)
{
    FILE *fp = NULL;

    fp = fopen(path, "rb");
    if (fp == NULL) {
        perror("fopen()");
        return -1;
    }

    Elf64_Ehdr hdr64;

    int ret = -1;
    ret = get_header_file_64(fp, &hdr64);
    if (ret == -1) {
        printf("error\n");
    }

    printf("e_type[%d]\n", hdr64.e_type);

    fclose(fp);

    return 0;
}

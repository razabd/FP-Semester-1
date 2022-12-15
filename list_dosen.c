#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void list_dosen()
{
    system("cls");

    FILE *fp = fopen("data_dosen.dat", "r");

    if(fp == NULL)
    {
        printf("File data dosen tidak bisa dibuka.");
        return;
    }

    struct data_dosen datadosen = {0, 0, "", "", ""};;

    printf("Nama\t\tNIP\t\tFakultas\t\tEmail\t\tNomor Telepon\n");
    printf("----\t\t---\t\t--------\t\t-----\t\t-------------\n");

    while(fread(&datadosen, sizeof(datadosen), 1, fp) == 1)
    {
        printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\n", datadosen.nama, datadosen.nip, datadosen.fakultas, datadosen.email, datadosen.no_telp);
    }

    if (ferror(fp))
    {
        printf("Error saat membaca file!!\n");
    }

    fclose(fp);
}

#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void list_peserta_matkul()
{
    system("cls");

    FILE *fp = fopen("data_matkul.dat", "r");

    if(fp == NULL)
    {
        printf("File data dosen tidak bisa dibuka.");
        return;
    }

    struct data_matkul datamatkul = {0, 0, "", ""};

    printf("ID\t\tNama Matkul\t\tPengajar\t\tJumlah Peserta\n");
    printf("--\t\t-----------\t\t--------\t\t------------\n");

    while(fread(&datamatkul, sizeof(datamatkul), 1, fp) == 1)
    {
        printf("%d\t\t%s\t\t\t%s\t\t\t%d\n", datamatkul.id, datamatkul.nama_matkul, datamatkul.pengajar, datamatkul.jumlah_peserta);
    }

    if (ferror(fp))
    {
        printf("Error saat membaca file!!\n");
    }

    fclose(fp);
}

#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void list_mahasiswa()
{
    system("cls");

    FILE *fp = fopen("data_mahasiswa.dat", "r");

    if(fp == NULL)
    {
        printf("File data dosen tidak bisa dibuka.");
        return;
    }

    struct data_mahasiswa datamahasiswa = {0, 0, 0, "", "", ""};

    printf("Nama\t\tNIP\t\tFakultas\t\tEmail\t\tNomor Telepon\t\tIPK\n");
    printf("----\t\t---\t\t--------\t\t-----\t\t-------------\t\t---\n");

    while(fread(&datamahasiswa, sizeof(datamahasiswa), 1, fp) == 1)
    {
        printf("%s\t\t%d\t\t%s\t\t%s\t\t%d\t\t\t%.1f\n", datamahasiswa.nama, 
        datamahasiswa.nip, datamahasiswa.fakultas, datamahasiswa.email, datamahasiswa.no_telp, datamahasiswa.ipk);
    }

    if (ferror(fp))
    {
        printf("Error saat membaca file!!\n");
    }

    fclose(fp);
}

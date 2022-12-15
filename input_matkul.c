#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void input_matkul() 
{
    system("cls");

    FILE *fp = fopen("data_matkul.dat", "a");

    if (fp == NULL)
    {
        printf("File data dosen tidak bisa dibuka.");
        fclose(fp);
    }
    else
    {
        struct data_matkul datamatkul = {0, 0, "", ""};

        while(1)
        {
            printf("Masukkan ID matkul: ");
            scanf("%d", &datamatkul.id);

            if(datamatkul.id == 0)
            {
                break;
            }
            else
            {
                printf("Masukkan nama matkul: ");
                scanf("%s", &datamatkul.nama_matkul);

                printf("Masukkan pengajar matkul: ");
                scanf("%s", &datamatkul.pengajar);

                printf("Masukkan jumlah peserta matkul: ");
                scanf("%d", &datamatkul.jumlah_peserta);

                size_t result = fwrite(&datamatkul, sizeof(datamatkul), 1, fp);

                // Cek kalo berhasil atau tidak
                if (result != 1)
                {
                    printf("Error writing to file\n");
                }
            }

            system("cls");

            printf("NB: Bila ingin memberhentikan input maka masukkan angka 0\n\n");
        }
    }

    fclose(fp);
}
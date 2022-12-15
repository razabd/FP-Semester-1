#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void input_dosen() 
{
    system("cls");

    FILE *fp = fopen("data_dosen.dat", "a");

    if (fp == NULL)
    {
        printf("File data dosen tidak bisa dibuka.");
        fclose(fp);
    }
    else
    {
        struct data_dosen datadosen = {0, 0, "", "", ""};

        while(1)
        {
            printf("Masukkan NIP dosen: ");
            scanf("%d", &datadosen.nip);

            if(datadosen.nip == 0)
            {
                break;
            }
            else
            {
                printf("Masukkan nama dosen: ");
                scanf("%s", &datadosen.nama);

                printf("Masukkan nomor telpon dosen: ");
                scanf("%d", &datadosen.no_telp);

                printf("Masukkan email dosen: ");
                scanf("%s", &datadosen.email);

                printf("Masukkan fakultas dosen: ");
                scanf("%s", &datadosen.fakultas);

                // Masukkan data ke data_dosen.dat
                size_t result = fwrite(&datadosen, sizeof(datadosen), 1, fp);

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
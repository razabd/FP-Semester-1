#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void input_mahasiswa() 
{
    system("cls");

    FILE *fp = fopen("data_mahasiswa.dat", "a");

    if (fp == NULL)
    {
        printf("File data dosen tidak bisa dibuka.");
        fclose(fp);
    }
    else
    {
        struct data_mahasiswa datamahasiswa = {0, 0, 0, "", "", ""};

        while(1)
        {
            printf("Masukkan NIP mahasiswa: ");
            scanf("%d", &datamahasiswa.nip);

            if(datamahasiswa.nip == 0)
            {
                break;
            }
            else
            {
                printf("Masukkan nama mahasiswa: ");
                scanf("%s", &datamahasiswa.nama);

                printf("Masukkan nomor telpon mahasiswa: ");
                scanf("%d", &datamahasiswa.no_telp);

                printf("Masukkan email mahasiswa: ");
                scanf("%s", &datamahasiswa.email);

                printf("Masukkan fakultas mahasiswa: ");
                scanf("%s", &datamahasiswa.fakultas);

                printf("Masukkan IPK mahasiswa: ");
                scanf("%f", &datamahasiswa.ipk);

                size_t result = fwrite(&datamahasiswa, sizeof(datamahasiswa), 1, fp);

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
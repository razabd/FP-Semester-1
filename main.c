#include<stdio.h>
#include "header.h"

void menu()
{
    printf("\n\t\tMENU\n");
    printf("1. INPUT DOSEN\n");
    printf("2. INPUT MAHASISWA\n");
    printf("3. INPUT MATA KULIAH\n");
    printf("4. LIST DOSEN\n");
    printf("5. LIST MAHASISWA\n");
    printf("6. LIST PESERTA MATKUL\n");
    printf("7. EXIT\n");

    printf("Please enter your selection: ");
}

int main()
{
    int menu_selection;

    menu();

    scanf("%d", &menu_selection);

    while (menu_selection != 7)
    {
        if(menu_selection == 1)
        {
            input_dosen();
        }
        else if(menu_selection == 2)
        {
            input_mahasiswa();
        }
        else if(menu_selection == 3)
        {
            input_matkul();
        }
        else if(menu_selection == 4)
        {
            list_dosen();
        }
        else if(menu_selection == 5)
        {
            list_mahasiswa();
        }
        else if(menu_selection == 6)
        {
            list_peserta_matkul();
        }
        else
        {
            printf("Pilihan anda tidak ada. Tolong masukkan lagi: \n");
        }

        menu();

        printf("\nMasukkan pilihan anda: ");

        scanf("%d", &menu_selection);
    }

    return 0;
}

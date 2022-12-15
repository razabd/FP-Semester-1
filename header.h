#include<stdio.h>
#include<stdlib.h>

struct data_dosen               //data dosen
{
    int nip;
    int no_telp;
    char nama[20];
    char email[20];
    char fakultas[20];
};

struct data_mahasiswa           //data mahasiswa
{
    int nip;
    int no_telp;
    float ipk;
    char nama[20];
    char email[20];
    char fakultas[20];
};

struct data_matkul              //data matkul serta peserta matkul
{
    int id;
    int jumlah_peserta;
    char pengajar[20];
    char nama_matkul[20];
};

void input_dosen();             //masukkan data dosen
void input_mahasiswa();         //masukkan data mahasiswa
void input_matkul();            //masukkan data matkul
void list_dosen();              //berikan list dosen
void list_mahasiswa();          //berikan list mahasiswa
void list_peserta_matkul();     //berikan list peserta matkul
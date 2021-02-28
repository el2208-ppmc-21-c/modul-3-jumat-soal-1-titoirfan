/*  EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*   Modul            : 3
*   Soal             : 1
*   Hari dan Tanggal : 
*   Nama (NIM)       :  
*   Asisten (NIM)    : 
*   Nama File        : soal-01.c
*   Deskripsi        : 
*/

#include <stdio.h>
#include <stdlib.h>

//Untuk rotasi matriks
void rotate(int degree, int matrix[3][3]){
    //implementasi dengan akses matriks menggunakan pointer
}

//Untuk swap value
void swap(int *a, int *b){
    //Implementasi
}

//Untuk mirror sumbu y
void mirror_y(int matrix[3][3]){
    //implementasi dengan akses matriks menggunakan pointer
}

//untuk mirror sumbu x
void mirror_x(int matrix[3][3]){
    //implementasi dengan akses matriks menggunakan pointer
}

//main
int main(){
    //Inisiasi matriks
    int  matrix[3][3];

    //Print untuk input elemen matriks
    printf("Masukkan input elemen matriks:\n");

    //Print untuk input sudut rotasi
    printf("Masukkan sudut rotasi: ");

    //Print ketika kondisi sudut rotasi bukan kelipatan 90 derajat
    printf("Sudut rotasi bukan kelipatan 90 derajat!\n");
    
    //Print untuk input sumbu mirror
    printf("Masukkan sumbu mirror: ");
    
    //Print ketika mirror bukan sumbu x atau y
    printf("Input sumbu mirror bukan x atau y!");

    //Print output matriks rotasi dan mirror
    // printf("Output matriks rotasi %d derajat dan mirror sumbu %c:\n", degree, sumbu);

    //Print matriks dengan akses matriks menggunakan pointer

    return 0;
}

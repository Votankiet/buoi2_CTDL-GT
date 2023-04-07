//cài đặt chèn trực tiếp 
//link tham khảo: https://laptrinhtudau.com/bai-tap-thuat-toan-sap-xep-chen-truc-tiep-insertion-sort-trong-c/

#include <stdio.h>
void Nhap(int a[],int n){//ham nhap mang
    for(int i=0; i<n; i++){
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n){//ham xuat mang
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}
void InsertionSort(int a[], int n)//thuat toan sap xep Insertion Sort
{
    int pos, i;
    int x;//luu vi tri a[i] tranh bi ghi de khi doi cho phan tu
    for(i=1 ; i<n ; i++)//doan a[0] da sap xep
    {
        x = a[i]; 
        pos = i-1;
        //tim vi tri chen x
        while((pos >= 0) && (a[pos] > x))
        {
            //ket hop doi cho cac phan tu se dung sau x trong day moi
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = x;//chen x vao day
    }
    printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n);
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    InsertionSort(a,n);
}
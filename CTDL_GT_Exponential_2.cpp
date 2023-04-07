//ví dụ đệ quy đa tuyến 
// link tham khảo: https://ezcodea.com/hoc-lap-trinh-online/giaithuat/de-quy-da-tuyen-exponential-recursion
//sắp xếp các số trong mảng bất kỳ
#include<stdio.h>
#include<iostream>
using namespace std;
/* hàm xuất các phần tử trong mảng */
void printArr(int arr[], int n){
  for(int i = 0; i < n; i++) //chạy vòng lặp từng phần tử trong mảng
    cout<<arr[i]<<"\t"; // xuất các phần tử trong mảng
  cout<<endl;
}
/* hàm sắp xếp các phần tử trong mảng */
void sort(int arr[], int n, int i){
  int j, swap;
  //thực hiện vòng lặp để sắp xếp các phần tử
  for(j = i + 1; j < n; j++){
    if(arr[i] > arr[j]){ // Nếu phần tử trước lớn hơn phần tử sau thì thực hiện tráo đổi vị trí giữa hai phần tử
      swap = arr[i];
      arr[i] = arr[j];
      arr[j] = swap;
    }
    sort(arr, n, i + 1);//Tiếp tục gọi đệ quy và thực hiện đến khi hàm kết thúc
  }
}
  
int main() {
   int n;
    int a[n];
    do{
        cout << "\nNhập vào số lượng phần tử có trong mảng: ";
        cin >> n;
    }while(n <= 0);  
      
    for(int i = 0;i < n;i++){
        cout<<"a["<<i<<"]=";
       cin >> a[i];
    };
     sort(a, n, 0);
    cout<<"Mảng sau khi được sắp xếp: \n";
    printArr(a, n);
}
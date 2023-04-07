//ví dụ đệ quy đuôi
//link tham khảo: https://freetuts.net/de-quy-duoi-tail-recursion-2951.html


#include <stdio.h>
 
int UCLN(int m, int n){
  int r;
  if(m<n) return UCLN(n,m);
  r = m % n;
  if(r == 0) return n;
  else return UCLN(n,r);
}
  
int main(void) {
  int kq,m,n;
  printf("Nhap gia tri m: ");
  scanf("%d", &m);
  printf("Nhap gia tri n: ");
  scanf("%d", &n);
  kq = UCLN(m,n);
  printf("Ket qua: %d",kq);
  return 0;  
}
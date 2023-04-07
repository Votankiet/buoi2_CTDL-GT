//Cài đặt tìm kiếm tuyến tính
//link tham khao: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search
int LinearSearch(int a[], int n, int x){
	int i=0; a[n]=x; //a[n] l� ph?n t? �l�nh canh�
	while(a[i]!=x){
		i++;
	}
	if(i==n){
		return -1; //T�m kh�ng th?y x
	}
	else{
		return i; //T�m th?y x
	}
}

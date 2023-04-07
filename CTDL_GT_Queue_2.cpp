//ví dụ hàng đợi 
// link tham khảo: https://laptrinhtudau.com/cai-dat-hang-doi-queue-bang-mang-c-c/

#include <stdio.h>
#define MAX 100
typedef struct queue
{
    int A[MAX];
    int front, rear;
};
typedef struct queue QUEUE;
void Init(QUEUE &q){
    q.front = 0;
    q.rear = -1;
}
int IsEmpty(QUEUE q){
    if (q.front > q.rear){
        return 1;
    }
    return 0;
}
int IsFull (QUEUE q){
    if (q.rear==MAX-1){
        return 1;
    }
    return 0;
}
void Add (QUEUE &q, int x){
    if (IsFull(q)==0) {
        q.rear++;
        q.A[q.rear] = x;
    }
}
int Remove(QUEUE &q){
    int x;
    if (!IsEmpty(q)) {
        x = q.A[q.front];
        q.front++;
        return x;
    }
    else{
        q.front = 0; q.rear = -1;
    }
}
void Input(QUEUE &q, int n){
    for(int i = 0; i< n; i++){
        int x;
        printf("Nhap gia tri phan tu thu %d: ",i);
        scanf("%d",&x);
        Add(q,x);
    }
}
void Output(QUEUE q){
    for(int i = q.front; i <= q.rear; i++){
        //hien thi ra ket qua
        printf("%d \t",q.A[i]);
    }
}
int main(){
    QUEUE q;
    Init(q);
    //nhap N 
    int n;
    printf("NHAP N: ");
    scanf("%d",&n);
    Input(q,n);
    //hien thi phan tu
    printf("Cac phan tu vua nhap vao queue la: \n");
    Output(q);
    //thao tac add
    int x = 66;
    Add(q,x);
    printf("\nHang doi sau khi add %d la: \n",x);
    Output(q);
    int front = Remove(q);
    printf("\nHang doi sau khi remove phan tu %d la: \n",front);
    Output(q);
}
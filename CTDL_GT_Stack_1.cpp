//cài đặt thuật toán ngăn xếp
// link tham khảo: https://blog.luyencode.net/ngan-xep-stack/


//kiểm tra stack đầy (IsFull)
bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}

//Kiểm tra stack rỗng (IsEmpty)
bool IsEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

//Thêm phần tử vào đỉnh stack (Push)
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nStack is full. Overflow condition!");
    }else{
        ++top;
        stack[top] = value;
    }
}

//Xóa phần tử khỏi đỉnh stack (Pop)
void Pop(){
    if(IsEmpty() == true){
        printf("\nStack is empty. Underflow condition!");
    }else{
        --top;
    }
}

//Lấy giá trị phần tử ở đỉnh stack (Top)
int Top(int stack[]){
    return stack[top];
}

//Lấy số lượng phần tử stack đang có (Size)
int Size(){
    return top + 1;
}
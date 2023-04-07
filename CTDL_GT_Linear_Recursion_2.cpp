#include <iostream>
using namespace std;

int linearSum(int n) {
    if (n == 1) {  // trường hợp cơ bản
        return 1;
    } else {  // trường hợp đệ quy
        return n + linearSum(n-1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    int sum = linearSum(n);
    cout << "Tong cac so tu 1 den " << n << " la " << sum << endl;

    return 0;
}
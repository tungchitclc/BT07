// btap.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include <iostream>
using namespace std;

void f(int arr[]) {
   int size = sizeof(arr) / sizeof(arr[0]);
   cout << "Size of array inside function: " << size << endl;
}

int main() {
   int A[] = { 1, 2, 3, 4, 5 };
   int size = sizeof(A) / sizeof(A[0]);
   cout << "Size of array outside function: " << size << endl;
   
   f(A);
   system("pause");
   return 0;
}

/* khi gọi hàm f(A) mảng A được truyền vào hàm dưới dạng con trỏ 
Do đó kết quả sizeof trong hàm f là kích thước 1 con trỏ ,chứ không phải
kích thước của 1 mảng. Kết quả khác nhau. Nếu muốn truyền 1 mảng không xá
định kích thước vào mảng cần khai báo mảng kiểu con trỏ */
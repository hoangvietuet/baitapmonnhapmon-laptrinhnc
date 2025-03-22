#include <iostream>

using namespace std;

// 2
/*
  void f1 (int *arr){
   cout << sizeof(arr) << "\n";
  }
  void f2 (int arr[]){
   cout << sizeof(arr) << "\n";
  }
  void f3 (int arr[3]){
   cout << sizeof(arr) << "\n";
  }
int main()
{
    int arr[3] = {1, 2, 3};
    cout << sizeof(arr) << endl;
    f1(arr);
    f2(arr);
    f3(arr);
}
*/
// 3
/*
int count_even(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int A[10] = {1, 4, 6, 7, 10, 15, 20, 22, 25, 30};
  int dau_5 = count_even(A, 5);
    cout << dau_5 << endl;
    int cuoi_5 = count_even(A + (10 - 5), 5);
    cout << cuoi_5 << endl;

    return 0;
}
*/
// 4
/*
int binarysearch (int* a, int size_a, int k){
    int left = 0;
    int right = size_a - 1;
    while(left <= right){
        while (left <= right) {
        int mid = left + (right - left) / 2;
        if (*(arr + mid) == target)
            return mid;
        else if (*(arr + mid) < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
    }
}
int main(){
   int a[6] = {1, 2, 3, 4, 5, 6};
   int k;
   cin >> k // 1 -> 6;

}
*/
// 5
/*
char* weird_string() {
    char c[] = "123345";
    return c;
}

int main() {
    char* str = weird_string();
    cout << "Gia tri cua str: " << str << endl;

    return 0;
}
*/


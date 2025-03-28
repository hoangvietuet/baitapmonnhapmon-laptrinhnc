#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Question 1
   /* int n;
    cin >> n;
    int a[n];
    for (int i = 0;i<n;i++) cin >> a[i];
    int K;
    for (int i = 0 ; i < n-1;i++){
        for (int j = i+1;j<n;j++){
            if(a[i] + a[j] == K){
                cout << a[i] << a[j] << endl;
            }
        }
    }
    */

    // Question 2
    /*
     int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
     int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    int m, n, k, q;
    cin >> m >> n >> k >> q;

     vector<vector<int>> a(M, vector<int>(N, 0));
    while(k--){
        int x, y, v;
        cin >> x >> y >> v;
        a[x][y] = v;
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for (int d = 0; d < 8; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                sum += grid[nx][ny];
            }
        }
        cout << sum << endl;

    }
    */

     //Question 3
     // bubble sort
     void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
  Ưu : hiệu quả tốt, dễ cài đặt
  Nhược: Lắm bước, lặp nhiều, khó hình dung
   // Question 4
   int a[10];
   sort(a, a+10);

   void binarysearch(int &a[], int left, int right, int an){
      while(left<=right){
        int viet = left + (right - left) / 2;
        if(a[viet] == an) return viet;

        if(a[viet] > an){
            binarysearch(a, left, viet-1, an);
        }
        binarysearch(a, viet+1, right, an);
      }
   }


    return 0;
}

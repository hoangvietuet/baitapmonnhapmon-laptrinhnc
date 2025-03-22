// C : bai tap
#include <iostream>

using namespace std;

//1a: daoxau;
void m_reverse (char a[], int n){
  for (size_t i = 0; i < n / 2;i++){
    char tmp = a[i];
    a[i] = a[n - i - 1];
    a[n-i-1] = tmp;
  }
}
//1b: xoa ki tu
void delete_char(char a[], char c){
   int j = 0;
   for (int i = 0; a[i]!='\0';i++){
    if(a[i] != c){
        a[j++] = a[i];
    }
   }
   a[j] = '\0';
}
// don phai
void pad_right(char a[], int n){
  int len = 0;
  while(a[len] != '\0') len++;
  if(len < n){
  for (int i = len; i < n;i++){
    a[i] = " ";
  }
   a[n] = '\0';
  }
}
// don trai
void pad_left (char a[], int n){
   int len = 0;
  while(a[len] != '\0') len++;
  if(len < n){
       int shift = n - length;
        for (int i = length; i >= 0; i--) {
            a[i + shift] = a[i];
        }
        for (int i = 0; i < shift; i++) {
            a[i] = ' ';
        }
  }
}
// cat xau
void truncate(char a[], int n){
    int len = 0;
  while(a[len] != '\0') len++;
  if(len > n){
   a[n] = '\0';

  }
}
// doi guong
bool is_palindrome(char a[]){
   int len = 0;
   while(a[len] != '\0') len++;
   for (int i = 0 ; i < len/2;i++){
    if(a[i] != a[len - i - 1]){
        return false;
    }
   }
   return true;
}
// Loc Trai
void trim_left(char a[]){
int i = 0;
    while (a[i] == ' ') i++;
    if (i > 0) {
        int j = 0;
        while (a[i] != '\0') {
            a[j++] = a[i++];
        }
        a[j] = '\0';
    }
}

// Loc phai
void trim_right(char a[]){
    int dem = 0;
    while(a[dem] == ' ') dem++;
    a[dem] = '\0';
}

int main()
{

}

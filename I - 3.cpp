#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
char *cat(char *a, char *b) {
  int i = 0, j = 0;
  int cont = 0;
  int h = strlen(a) + strlen(b) + 1;

  char *result = (char*)malloc(h * sizeof(char));

  for(i = 0; i < strlen(a); i++) {
    result[i] = a[i];
  }

  for(j = i; j < strlen(b)+ strlen(a); j++) {
    result[j] = b[cont++];
  }

  // append null character
  result[h - 1] = '\0';
  return result;
}
int main(){
    char s[100],t[100];
    cin.get(s,100);
    cin.get();
    cin.get(t,100);
    cout<<cat(s,t);
}

#include <stdio.h>


int main(){
  int a[200];
  for(int i = 0; i < 200; ++i) scanf("%d",&a[i]);
  for(int i = 0; i < 200; ++i){
    for(int j = i; j < 200; ++j){
      for(int k =j; k < 200; ++k){
        if(a[i] + a[j] + a[k] == 2020){
          printf("%d\n",(a[i]*a[j]*a[k]));
          return 0;
        }
      }
    }
  }
  return 0;
}

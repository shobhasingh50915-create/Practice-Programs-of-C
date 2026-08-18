#include <stdio.h>

int main(){
    int n; 
    int t1=0,t2=1,nextterm;

    printf("Enter the no of terms:");
    scanf("%d",&n);

    printf("Fibonacci Series:");
    if(n<=0){
    }else if(n==1){
        printf("%d",t1);
    }
     else{
        printf("%d,%d",t1,t2);
        for(int i=3;i<=n;++i){
          nextterm=t1+t2;
          printf(",%d",nextterm);
          t1=t2;
          t2=nextterm;
        }
    }
    printf("\n");
    return 0;
}
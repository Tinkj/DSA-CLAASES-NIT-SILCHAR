#include<stdio.h>

#define N 10000000

//execution time: 59.016 s

int prime[N]={1, 1};

void sieve(){
   for(int i=2; i*i<=N; i++) {
       if(prime[i]==0){
           for(long long j=i*i; j<=N; j+=i){
               prime[j]=1;
           }
       }
   }
}



int main(){
    sieve();
    for(int i=0; i<N; i++){
        if(prime[i]==0)printf("%d ", i);
    }
    return 0;
}

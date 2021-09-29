
#include<stdlib.h>

    /*
    T(n)=aT(n/b)+f(n)
    f(n)=θ(n^k (logn)^p)
    */
    int main() {

        char S= "The master theorem cannot be Applied Here!\n" ;

        int a=4,b=2,p=0,k=2;

        //loga b = log10 b / log10 a
        //We Replace n=m
        // F(n) is always Positive

       double x= log10(a);
       double w= log10(b);
       double z= x/w;

       if(a>=1 && b>1){
           if(z>k){
           printf("θ(n^%2f)   -> According to Case I",z);
       }

       else if(z==k && p>-1){
           //System.out.println("θ("+Math.pow(n, k)*(Math.pow(Math.log(n), p+1))+")   -> According to Case II(a)");
           if((p+1)!=1)
               printf("θ(n^%d log^%d n)   -> According to Case II(a)",k,(p+1));
           else
               printf("θ(n^%d logn)   -> According to Case II(a)",k);//To avoid log^1 n
       }
       else if(z==k && p==-1){
           printf("θ(n^%d loglogn)   -> According to Case II(b)",k);
       }
       else if(z==k && p<-1){
          printf("θ(n^%d)   -> According to Case II(c)",k);
       }

       else if(z<k && p>0){
           printf("θ(n^%d log^%d n)   -> According to Case III(a)",k,p);
       }
       else if(z<k && p==0){
           printf("θ(n^%d)   -> According to Case III(a)",k);
       }
       else if(z<k && p<0){
          printf("O(n^%d)   -> According to Case III(b)",k);
       }

       else{
           printf("%s",S);
       }

       }
       else{
           printf("%s",S);
       }





    }

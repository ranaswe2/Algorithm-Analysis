
#include<stdlib.h>


    int main() {

        int start[]={0,5,3,1,8,5};
        int finish[]={6,7,4,2,9,9};
        int n=(int)sizeof(start)/sizeof(start[0]);
        int selects[n];

        int selectf[n];
        int temp,tempi;

         for(int i=0;i<n;i++){
            for(int j=1;j<(n-i);j++){
            if(finish[j-1]>finish[j]){
                temp=finish[j-1];
                finish[j-1]=finish[j];
                finish[j]=temp;

                tempi= start[j-1];
                start[j-1]=start[j];
                start[j]=tempi;
            }
          }
        }

         printf("Sorted Activities:\n");

         for(int i=0;i<n;i++){
             printf("%d %d\n",start[i],finish[i]);

         }

         printf("Maximum Set of Activities:\n");
         printf("[Index: Start Finish]\n");

           int j=0;

             printf("0 : %d %d\n",start[0],finish[0]);
         for(int i=1;i<n;i++){

             if(start[i]>=finish[j]){
                 j=i;
             printf("%d : %d %d\n",i,start[i],finish[i]);
             }

         }
    }

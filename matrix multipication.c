#include <stdio.h>
#include <stdlib.h>

void multi(int a[][2],int b[][2])
{
    int c[2][2]={0};   // Initialize the result matrix to 0
    for(int i=0;i<2;i++){   // i is represented number of row
        for(int j=0;j<2;j++){   // j is represented number of column
           for(int k=0;k<2;k++){
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    for(int p=0;p<2;p++){
        for(int q=0;q<2;q++){
           printf("%d ",c[p][q]);
        } printf("\n");
    }

}





int main()
{
    int a[2][2]={{1,2},{2,3}};
    int b[2][2]={{4,5},{5,6}};


    multi(a,b);  // this is call function


    return 0;

}

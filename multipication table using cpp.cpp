#include <iostream>
using namespace std;

int main()
{
    int multi[11][11];
    for(int i=0;i<=10;i++){
        for(int j=0;j<=10;j++){
            multi[i][j]=i*j;
        }
    }

    for(int p=0;p<11;p++){
        for(int q=0;q<11;q++){
            cout <<"\t"<<multi[p][q];
        } cout<<"\t"<<endl;
    }



    return 0;
}

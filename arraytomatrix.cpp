#include<iostream>
using namespace std;
int main()
{
    int ar1[2][3]={1,4,5,8,7,6};
    int i,j;
    for(i=0;i<2;i++)
    {
        cout<<endl;
        for(j=0;j<3;j++)
        {
            cout<<ar1[i][j]<<"\t";
        }
    }

}
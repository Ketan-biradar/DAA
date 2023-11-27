#include<iostream>
using namespace std;

void qsort(int arr[],int s,int e)
{

    if(s<e)
    {
        int i=s-1,temp;

        for(int j=s;j<e+1;j++)
        {

            if(arr[j]>=arr[e])
            {

                i++;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }

    qsort(arr,s,i-1);
    qsort(arr,i+1,e);

    }
}

int main()
{
    int arr[]={8,2,0,7,0,0,1},s=0;
    int  e=(sizeof(arr)/4)-1;
    qsort(arr,s,e);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

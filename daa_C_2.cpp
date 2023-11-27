#include<iostream>
using namespace std;

int Set[]={7,34,4,10,6,1};

bool sos(int s, int sum)
{
    cout<<"Sum:"<<sum<<endl;

    if(sum==0)
        return true;

    else if(s==0)
        return false;

    else if(sum-Set[s-1]<0)
        return sos(s-1,sum);

    else
        {
            return sos(s-1,sum-Set[s-1]) || sos(s-1,sum);
        }
}

int main()
{
    int sum=15, s ;
    s=sizeof(Set)/4;
    if(sos(s,sum)==1)
        cout<<"True";
    else
        cout<<"False";

    return 0;
}

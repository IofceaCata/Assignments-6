#include<iostream>
#include<limits.h>
using namespace std;
int mini,maxi,i,n,array1[250];
void minmax1(int a[],int m, int *min, int *max)
{
    int j;

    for(j=1;j<=m;j++)
    {
        if(a[j]<=*min) *min=a[j];

        if(a[j]>=*max) *max=a[j];

    }

}

int main()
{
    mini=INT_MAX;
    maxi=INT_MIN;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>array1[i];
    }

    minmax1(array1,n,&mini,&maxi);

    cout<<mini<<endl;
    cout<<maxi;


}


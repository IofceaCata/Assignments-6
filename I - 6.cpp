#include<iostream>
#include<cstring>
using namespace std;

int totalSec,hour,minute,second;

void split_time(long int total_sec, int *hr, int *min, int *sec)
{
    int t;
    *hr = total_sec/3600;
    t = total_sec%3600;
    *min = t/60;
    *sec = t%60;
}

int main()
{
    cin>>totalSec;

    split_time(totalSec,&hour,&minute,&second);

    cout<<totalSec<<"  hour: "<<hour<<" minute: "<<minute<<" sec:  "<<second;
    return 0;
}



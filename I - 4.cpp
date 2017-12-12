#include<iostream>
#include<cstring>
using namespace std;

char s1[250],s2[250];

int strend(char *s,char *t);

int main()
{
    cin>>s1;
    cin>>s2;
    cout<<strend(s1,s2);
    return 0;
}

int strend(char *s,char *t)
{
    int len;
    len=strlen(t);

    while(*s)
        ++s;
    --s;

    while(*t)
        ++t;

    --t;

    while(len > 0)
    {
        if(*t==*s)
        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    if( len == 0)
        return 1;
}

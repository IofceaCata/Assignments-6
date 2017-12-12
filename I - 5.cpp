#include<iostream>
#include<cstring>
using namespace std;

char s[250], d[250];
int n;

char* strncpy(char* destination, const char* source, int num);
char* strncat(char *s,char *t,int numb);
int strncmp(char *cs,char *ct,int number);

int main()
{


    cin.getline(s, 250);
    cin>>n;

    strncpy(&d, s, n);
    cout<<d;

    cin.getline(s, 250);
    cin>>n;

    strncat(d,&s,n);
    cout<<s;

    cin.getline(s, 250);
    cin.getline(d, 250);
    cin>>n;

    cout<<strncmp(s,d,n);

	return 0;
}

char* strncpy(char* destination, const char* source, int num)
{
	if (destination == NULL)
		return NULL;

	while (*source && num>0)
	{
		*destination = *source;
		destination++;
		source++;
		num--;
	}

	*destination = '\0';
}

char* strncat(char *s,char *t,int numb)
{
    while(*t)
    {
        t++;
    }

    while(*s && numb>0)
    {
        *t=*s;
        s++;
        t++;
        numb--;
    }

    *t='\0';
}

int strncmp(char *cs,char *ct,int number)
{
    int i=0,j=0;
    while((*cs || *ct) && number>0)
    {
        if(*cs>*ct) i++;
        else if(*cs<*ct) j++;
    }

    if(i==0 && j==0) return 0;
    else if(i<j) return -1;
    else if(j>i) return 1;
}


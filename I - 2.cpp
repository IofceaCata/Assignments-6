#include<iostream>
using namespace std;

int i,j;
int strlen_array(char array[])
{
        while(array[i]!='\0')
            i++;

        return i;
}

int strlen_pointer(char *strp)
{
    while(*strp!='\0')
    {
        j++;
        strp++;
    }
    return j;
}
int main()
{
    char s[256];
    cin.getline(s,256);
    cout<<"a) "<<strlen_array(s)<<endl;
    cout<<"b) "<<strlen_pointer(s);

    return 0;
}





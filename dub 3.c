#include<stdio.h>
int main()
{
    char str1[100],P=0;
    char str[100];
    int i,j,l;
    gets(str1);
    l=strlen(str1);

for(i=0;;)
{
    if(str1[i]=='W'&&str1[i+1]=='U'&&str1[i+2]=='B')
    {
       str[j]=' ';
       j++;
       i+3;
    }
    else
    {
        str[j]=str1[i];
        i++;
        j++;
    }

}
printf("%s",str);





    return 0;
}

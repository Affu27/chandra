#include<stdio.h>
#include<string.h>
int main()
{
        char a[]="computer";
        char b[]="put";
        int i,j=0,flag=0;
        int length=strlen(b);
        for(i=0;a[i]!='\0';i++)
        {
           if(a[i]==b[j])
           {
               flag++;
                j++;
                if(flag==length)
                {
                        printf("substring present");
                      return 1;
                }
          }
          else
          {
              j=0;
                flag=0;
          }
        }
        printf("not present");

}

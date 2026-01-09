//get a main string and a substring and find where the main string occur 
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],d[100];
    int a,b,c=0,e=0;
    char *p1,*p2,*f1,*f2;
    p1=s;
    p2=d;
    f2=p2;
    int i=0;
    fgets(s,sizeof (s),stdin);
    s[strcspn(s,"\n")]='\0';
    fgets(d,sizeof (d),stdin);
    d[strcspn(d,"\n")]='\0';
    b=strlen(d);
    //printf("%d\n",b);
    for(p1;*p1!='\0';p1++)
    {
     i++;
     p2=f2;
        for(int j=0;j<b;j++)
        {
           if(*p1==*p2)
           {
             e++;
             
           }else
           {
            e=0;
            break;
            }p2++;
             p1++;
            if(b==e)
        {
            printf("%d",i);
            return 0;
        }
        }
    }
    
    
}
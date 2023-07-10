#include<stdio.h>
#include<string.h>
int main()
{
    int shift,i,len,k=0;
    char a[10],mess[10],val,mes2[10];
    //taking in all the required values.
    printf("Type encode to encrypt and decode to decrypt:\n");
    scanf("%s",a);
    printf("\ntype the message:\n");
    scanf("%s",mess);
    printf("\nenter the number of shifts:\n");
    scanf("%d",&shift);
    len=strlen(mess);
    //loop to add the number of shifts.
    for(i=0;i<len;i++)
         if (mess[i]+shift>122)
        {   
            mes2[i]=mess[i]-26+shift;
        }
        else 
        {
        mes2[i]= mess[i]+shift;
        }
    //encode or decode.
    if (a[0]=='e')
        printf("the encoded message is %s",mes2);                  
    else 
    if (a[0]=='d')
        printf("the decoded message is %s",mes2);
    return 0;
}
     
        
        

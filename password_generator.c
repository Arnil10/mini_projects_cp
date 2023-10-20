#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int passwordgenerator(int letter,int number,int symbol);
void main()
{
    
    int letter,number,symbol;
    
    printf("\nwelcome to password generator\n");
    printf("\nhow many letters do u want in your password?\n");
    scanf("%d",&letter);
    printf("\nhow many numbers do u want in your password?\n");
    scanf("%d",&number);
    printf("\nhow many symbols do u want in your password?\n");
    scanf("%d",&symbol);
    printf("\nThis is your password as per your requirements:\n");
    
    passwordgenerator(letter,number,symbol);
   
}
int passwordgenerator(int letter,int number,int symbol)
{
    srand(time(NULL));
    int i;
    char letter_list[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char num_list[]="1234567890";
    char symbol_list[]="!@#$%^&*_+=-|?.,:~/;`";
    
    for(i=0;i<letter;i++)
    {
        printf("%c",letter_list[rand()%strlen(letter_list)]);
    }
    for(i=0;i<number;i++)
    {
        printf("%c",num_list[rand()%strlen(num_list)]);
    }
    for(i=0;i<symbol;i++)
    {
        printf("%c",symbol_list[rand()%strlen(symbol_list)]);
    }
    return 0;
}

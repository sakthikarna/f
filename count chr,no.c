
int main()
{
    char    str[100];
    int count no,count alph,count Special Char,count Spaces;
    int counter;
 
    count no=count alph=count Special Char=count Spaces=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            count no++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            count alph++;
        else if(str[counter]==' ')
            count Spaces++;
        else
            count Special Char++;
    }
 
    printf("\nno: %d \naplh: %d \nSpaces: %d \nSpecial Char: %d",count no,count alph,count Spaces,count Special Char);
 
   
}

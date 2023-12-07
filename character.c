//to check whether the character is uppercase or lowercase..
 #include<stdio.h>
 int main()
 {
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z')
    {
        printf("UPPER CASE\n");
    }
    else if(ch >='a' && ch <='z')
    {
        printf("lower case\n");
    }
    else
    {
        printf("Not an english letter. \n");
    }
    return 0;
 }
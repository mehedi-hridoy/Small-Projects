#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()

{
    char i[40];
    system("COLOR 4F");
    printf("Enter Your Name in Capital Letter: ");
    scanf("%s",&i);

    for(int j=1;j<=2000;j++){
        printf("HAPPY BIRTHDAY %s  \t",i);

    }
    getch();
}

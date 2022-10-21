#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()

{

    system("COLOR F4");
    char  name[50];
    printf("Enter your first  name: ");
    scanf("%s",&name);

    for(int j=1;j<=200000;j++){
        printf("I LOVE YOU  %s \3  \t",name);

     }
    getch();
}

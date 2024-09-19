//prog to print ASCII of a number
/*#include<stdio.h>
int main(){
char a;
printf("input the ascii no. :");
scanf("%c",&a);
printf("ascii no. :%d",a);
return 0;
}
*/

/*
//prog to check no. is positive or negative using bitwise shift operator
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num >>(sizeof(int)*8-1)){
        printf("-ve");
    }else {
        printf("+ve");
    }
   return 0;
}
*/

//Reverse a number using for loop
#include <stdio.h>
#include <string.h>
int main(){
    
    int j=0;
    char num[10];
    char dum[10];
    printf("enter the number:");
    scanf("%s",num);
    for(int i=strlen(num)-1;i >= 0;i--){
        dum[j]= num[i];
        j++;
    }
    dum[j]='\0';
    printf("new no :%s",dum);
    return 0;

}
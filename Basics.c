//prog to print ASCII of a number
/*#include<stdio.h>
int main(){
char a;
printf("input the ascii no. :");
scanf("%c",&a);
printf("ascii no. :%d",a);
return 0;
}


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
    }*/
/*
// reverse a number using DO WHILE LOOP
#include<stdio.h>
#include<string.h>
int main(){
    int j=0;
    char num[10];
    char dum[10];
    printf("enter the number:");
    scanf("%s",num);
    int i=strlen(num)-1;
    do{
        dum[j]= num[i];
        j++;
        i--;
    }while(i >=0);
    dum[j]='\0';
    printf("new no :%s",dum);
    return 0;
}

// reverse a number using DO WHILE LOOP
#include<stdio.h>
#include<string.h>
int main(){
    int j=0;
    char num[10];
    char dum[10];
    printf("enter the number:");
    scanf("%s",num);
    int i=strlen(num)-1;
    while(i >=0){
        dum[j]= num[i];
        j++;
        i--;
    };
    dum[j]='\0';
    printf("new no :%s",dum);
    return 0;
}

// program to check PALINDRONE number
#include<stdio.h>
#include<string.h>
int main(){
    char srt[100];
    char rst[100];
    int j=0;
    printf("enter the number:\n");
    scanf("%s",srt);
    int len=strlen(srt);
    for(int i=len-1;i>=0 ; i--){
        rst[j] == srt[i];
        j--;
    };
    rst[j]='\0';
    if(strcmp(srt,rst) == 0){
        printf("it is a palindrome no. %s",rst);
    }else{
        printf("it's not a palindrone number: %s",srt);
    }
    return 0;
}

//program to check greatest number
#include<stdio.h>
#include<string.h>

int main(){
    int arr[10];
    printf("enter the numbers\n:");
    for(int i=0;i<2;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        printf("%d is greater then %d",arr[0],arr[1]);
    }else{
        printf("%d is greater then %d",arr[1],arr[0]);
    }
    return 0;
}

//program to chcek greatest bw three number
#include<stdio.h>
int main(){
    int num[10];
    for(int i=0;i<10;i++){
        scanf("\n%d",&num[i]);
    }
    int len = sizeof(num)/sizeof(num[0]);
    int grt=num[0];
    for(int j=1;j<len;j++){
            if(num[j]>grt){
                grt=num[j];
            }
        }
    printf("the greatest no. is:%d",grt);
    return 0;
}

//program to check if it is a character of number
#include<stdio.h>
int main(){
    char n;
    printf("enter a character : ");
    scanf("%c",&n);
    //if((n >= 'a'&& n <='z')||( n >= 'A'&& n <= 'Z')){
      //  printf("its an alphabet");
    //}else{
      //  printf("its a number");
    //}
    if(n =='a'||n =='e'||n =='i'||n =='o'||n =='u'){
        printf("its an vowel");
    }else{
        printf("its a consonent");
    }
    return 0;
}

//factorial of a number
#include<stdio.h>
int main(){
    int num=0,fact=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("the factorial is:%d",fact);
    return 0;

}*/
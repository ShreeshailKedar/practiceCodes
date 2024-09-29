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

}

//program to perform matrix multiplication.
#include<stdio.h>
int main(){
    int m1[3][3]={{3,5,4},
                  {2,3,4},
                  {1,1,1}};
    int m3[3][3]={{2,1,1},
                  {1,1,1},
                  {1,1,1}};
    //printf("enter the m");
    int rslt[3][3];

    //print the matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",m1[i][j]*m3[i][j]);
        }
        printf("\n");
    }

    //transpose of a matric
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            rslt[j][i]=m1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",rslt[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
//prog to bubble sort the given numbers
#include<stdio.h>

int main() { 
    int n = 7;
    int arr[n];

    // Input the array
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm using while loop
    int i = 0;
    while(i < n - 1) { // this while loop will help to travel the array one after another i.e (i<6)->by remaining the first it will iterate through all and every time the pointer is passed to nxt index of array 
        int j = 0;
        while(j < n - i - 1) {                          // this help to set the greater value at last in first iterration during that i.e ->[0<7-0-1]=[0<6] ,which means from index 0-7 we required 6 passes to complete and then j=1 updated
            if(arr[j] > arr[j + 1]) {                   // in 2nd iteration i.e i=1->[1<7-1-1]=[0<5],which means from index 0-6 we required 5 passes to complete
                // Swap arr[j] and arr[j+1]                                     // i=2->[2<7-2-1]=[0<4],which means from index 0-5 we req 4 passes to complete
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;  // Move to the next iteration
    }

   // Output the sorted array
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
} 

//code for ascending sorting
#include<stdio.h>
int main(){
    int a=7;
    int n[a];
    printf("enter the number:");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }

    for(int j=0;j<a;j++){
        for(int k=j+1;k<a;k++){
            if(n[j]>n[k]){
                int l=n[j];
                n[j]=n[k];
                n[k]=l;
            }
        }
    }

    printf("result:");
    for(int i=0;i<a;i++){
        printf("%d ",n[i]);
    }

    return 0;
}

//count the number of words in an string
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i=0,word=1;
    printf("enter the string:");
    gets(s);
    while(s[i]!='\0'){
        if(s[i]==' '&& s[i+1]!=' '){
        word++;}
        i++;
    }
    printf("\n number of works=%d",word);
    return 0;
}*/

//program to access array using pointer
#include<stdio.h>
int main(){
    int arr[]={2,3,5,4};
    int *p=arr;
    //(*p)[2]=&arr;
    //printf("the address is :%d",*p+2);
    for(int i=0;i<4;i++){
        printf("%d ",*(p+i));
    }
   return 0; 
}
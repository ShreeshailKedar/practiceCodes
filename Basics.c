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







//program to access array using pointer
#include<stdio.h>

int tv(int* pointing, int guccha[]){
    for(int i=0;i<6;i++){
        printf("  %d   ",*(pointing+i));
         printf("  %d   ",guccha[i]);
    }
    return 0;
}
int main(){
    int arr[]={2,3,5,4,7,1};
    int *p=arr;  
    int res=0;                      //"&arr" will store the address of whole array in "p" pointer but if we use "*p=arr" it store only the address of first index
    //(*p)[2]=&arr;                         // *p can only store the address of single element//
    //printf("the address is :%d",*p+2);
    
     tv(p, arr);
    //modify the array elements
    for(int j=0;j<6;j++){                   //we have to update the pointer using "j" i.e->p[j],  
                                            //  *(p+j)->will access the value bz of "*" and the "p"consist of the address and using "j" address of the index selected and then 10 added
        p[j]=*(p+j)+10;
       printf("\n%d\n",*(p+j));           
        
    }
    
    // access only positive element of an array
    for(int k=0;k<6;k++){
        if(k%2 == 0){
            printf("the element is:%d\n\n",*(p+k));
        }
    }


    //program to add all the elements of the array using pointer
     for(int j=0;j<6;j++){                   
        res = res + *(p+j);             // this will give us the addition of all the elements of the array 
    }
    printf("%d\n ",res);

    //

   return 0; 
}



//passing by refence and value

#include<stdio.h>

int PBV(int x){
    x=x+10;
    printf("\n the value of x is:%d",x);
}

int PBR(int* y){
    *y+=2;
     printf("\n the value of b is:%d",*y);
}

int BOTH(int m,int* n){
    m=m+4;
    *n=m*2;
    printf("\n the value of m is:%d",m);
    printf("\n the value of n is:%d",*n);
}
int main(){
    int a=8;
    int b=3;
    int *c;

    printf("\n the value of a is:%d",a);
    PBV(a);
    printf("\n the value of a is:%d \n",a);

    printf("\n the value of b is:%d",b);
    PBR(&b);
    printf("\n the value of b is:%d\n",b);

    BOTH(a,&b);
    printf("\n\n the value of a is:%d",a);
    printf("\n the value of b is:%d",b);

    return 0;
}

//malloc function with ptr

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    
    printf("enter the total numbers:");
    scanf("%d",&n);
    
    int *direc = (int*)malloc(n*sizeof(int)); /// this line will allocate n number of memory location in dynamic memory in linklist format i.e non contigious format bz of malloc is used
                                                //and the address of the first allocated memory is stored in "direc" pointer
    printf("enter the numbers:");
    for(int i=0;i<n;i++){
        scanf("%d",&direc[i]);
    }
    printf("\nthe first no is:%p\n",direc);   //it will display the address stored in direc
    printf("the first no is:%d\n",*direc);  //it will store the value of the address stored in direc
    printf("the first no is:%p",&direc);    //it will display the address of the pointer pointing towards direc
    
    int *ptr = (int*)calloc(n,sizeof(int));     //it will provide us the memory with zero intialization
    printf("\nthe first no is:%p\n",ptr);   //it will display the address stored in direc
    printf("the first no is:%d\n",*ptr);  //it will store the value of the address stored in direc
    printf("the first no is:%p\n",&ptr);  


    direc=(int*) realloc(direc,3 * sizeof(int));
    printf("\nthe first no is:%p\n",direc);   //it will display the address stored in direc
    printf("the first no is:%d\n",*direc);  //it will store the value of the address stored in direc
    printf("the first no is:%p",&direc);
    printf(" the elements are:");
    for(int i=0;i<n;i++){                     //this for loop still print the 5 values because when we reallocate the new size of direc
                                              //but the old data from the previous memory location is not cleared still but our system have only access to the new direc size 3 
                                              //and if we access the memory that from the previous memory or greter than the newly assigned size  then our code will show unexpected behaviour

        printf("\n%d ",direc[i]);
    }
    free(ptr); //this line will free the ptr 
    
    printf("\nthe first no is:%p\n",ptr); 
    ptr=NULL;                               /// but ptr still hold the prev addresses 
                                            //so to avoid miss use of memory we have to make it "NULL"
    printf("\nthe address is:%p\n",ptr); 
    
    return 0;
}

//recursions 
//progran to calculate factorial using recurssion
#include<stdio.h>

int factorial(int x){
    
    if(x ==0 || x== 1){
        return 1;
    }else{
        printf("the vakue of x is: %d\n",x);
    return(x*factorial(x-1));
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    factorial(n);
    printf("the factorial of %d is : %d",n,factorial(n));
    return 0;
}

//fibonachi series using recurssion
#include<stdio.h>
int prnt_fib(int f){
    
    if( f==0){
        return 0;
    }else if(f == 1){
        return 1;
    }else{
        
    return prnt_fib(f-1)+prnt_fib(f-2);   
    }
}
int main(){
    int fib;
    printf("enter the number:");
    scanf("%d",fib);
    ;
    for(int i=0;i<fib;i++){
        printf("%d",prnt_fib(i));

    }
    
}

//program to check prime number
#include<stdio.h>
int main(){
    int n=11;
    int m=n/2;
    int pr=1;
    //if(n/1 == 1){
    for(int i=2;i<m;i++){
        if(n%i == 0){
             pr=0;
            break;
        }
    }
    if(pr==1){
        printf("its a prime");
    }else{
        printf("its not a prime");
    }
    return 0;
}
//}


// understanding structure

#include<stdio.h>
#include<string.h>
struct person{
    char name[50];
    int id;
    float weight;
};

int main(){
    struct person p2,p1={"shivan is good",23,32.2};
    p2.id=33;
    strcpy(p2.name,"mahesh is happy");
    p2.weight=30.22;
    printf("the id is:%d \n",p1.id);
    printf("the weight is:%f \n",p1.weight);
    printf("name:%s \n",p1.name);

    return 0;
}*/


// link list basics
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void link_list_traversal(struct node *ptr){
    while(ptr != NULL){
    printf("elements:%d \n",ptr->data);
    ptr=ptr->next;
    }
}

/*void reverse_link_list(struct node* rev){
    for(int i=)
    printf("element:%d \n",rev->data);
    rev
}*/
int main(){
    struct node *head;
    struct node*second;
    struct node * third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data = 4;
    head->next= second;

    second->data=8;
    second->next=third;

    third->data=5;
    third->next=NULL;

    link_list_traversal(head);
    /reverse_link_list(third)
    return 0;
}


// reversing the link list


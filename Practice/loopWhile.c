// #include<stdio.h>
// int main(){
//     int i=0;
//     while(i<=20){
//         if(i>=10){
//         printf("i: %d\n",i);}
//     i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=1;
//     do{
//         printf("the value of i is %d\n",i);
//         i++;
//     }while(i<5);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,i=1;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     do{
//         printf("the value of i is %d\n",i);
//         i++;
//     }while(i<n);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     for(int i=1;i<11;i++){
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=10){
//         printf("%d X %d = %d\n",n,i,n*i); 
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     int i=1;
//     do{
//         printf("%d X %d = %d\n",n,i,n*i);
//         i++;
//     }while(i<11);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     int i=10;
//     do
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//         i--;
//     }while(i>=1);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
// printf("sum=%d\n",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//        printf("sum=%d\n",sum);
//     } 
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     int i=1;
//     do{
//         sum=sum+i;
//         printf("sum=%d\n",sum);
//         i++;
//     }while(i<=n);
//     return 0;
// }

//#include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         sum+=n*i;// sum=sum+n*i; 
//         printf("sum=%d\n",sum);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int product=1;
    for(int i=1;i<=10;i++){
        printf("p=%d, i=%d, ",product,i);
        product*=i ; //product=product*i
        printf("product=%d\n",product);
}
return 0;}

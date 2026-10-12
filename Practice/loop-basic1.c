// #include<stdio.h>
// int main(){
//     int n=10;
//     for(int i=1;i<=n;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n=1;
//     for(int i=10;i>=n;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n=10,sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//         printf("sum=%d\n",sum);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n=10,sum_of_evens=0;
//     for(int i=0;i<=n;i=i+2){
//         sum_of_evens+=i;
//         printf("sumOFevens=%d\n",sum_of_evens);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1;i<=10;i++){
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,count=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num==0){
//         count=1;
//     }
//     else{
//         while (num!=0)
//         {
//             num/=10;
//             count++;
//         }
        
//     }
// printf("the number of digit = %d",count);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,digit,sum=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         digit=num%10;
//         sum+=digit;
//         num/=10;
//     }
// printf("sum of digits = %d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,digit,reverse=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     while(num!=0){
//         digit=num%10;
//         reverse=reverse*10+digit;
//         num/=10;
//     }
// printf("revese number = %d",reverse);
//     return 0;
// }


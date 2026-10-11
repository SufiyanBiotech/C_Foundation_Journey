#include<stdio.h>
int main(){
    int num=-5;
    if(num%2==0){
        printf("this is  a even number: ");
    }
    else{printf("this is a odd number: ");}
    return 0;
}

#include<stdio.h>
int main(){
    int num=0;
    if(num>0){
        printf("this is positive no..");
    }
    else if(num<0){
        printf("this is negitive no..");
    }
    else{printf("this is zero no..");}
    return 0;
}

#include<stdio.h>
int main(){
    int a=5,b=2;
    if(a>b){
        printf("a is greater than b");
    }
    else{printf("b is greater than a");}
    return 0;
}

#include<stdio.h>
int main(){
    int a=10,b=5,c=3;
    if(a>b&&a>c){
        printf("a is greatest");
    }
    else if(b>a&&b>c){
        printf("b is greatest");
    }
    else{printf("c is greatest");}
    return 0;
}

#include<stdio.h>
int main(){
    int year=2021;
    if((year%4==0 && year%100!=0)||year%400==0){
        printf("this yr is leap yr.");
    }
    else{printf("this yr is not leap yr.");}
    return 0;
}

#include<stdio.h>
int main(){
    int n=55;
    if(n%5==0&&n%11==0){
        printf("this num is divisible by both 5 and 11");
    }
    else{printf("this num is not divisible by both 5 and 11");}
    return 0;
}

#include<stdio.h>
int main(){
    float angle1=60,angle2=90,angle3=30,sum;
    sum=angle1+angle2+angle3;
    if(sum==180){
        printf("yes this is a valide angle for trangle");
    }
    else if(sum!=180){
        printf("this is a not valide angle for trangle");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int a=3,b=2,c=3;
    if((a+b)>c || (a+c)>b || (c+b)>a){
        printf("yes this is a valide side for trangle");
    }
    else{printf("this is a not valide side for trangle");}
    return 0;
}

#include<stdio.h>
int main(){
    float a=2,b=1,c=2;
    if(a==b && b==c){
        printf("Equilateral Triangle");
    }
    else if((a==b && b!=c)||(a==c && a!=b)){
        printf("Isosceles Triangle");
    }
    else if(a!=b && b!=c){
        printf("Scalene Triangle");
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,Disc,r1,r2,realPart,imgPart;
    printf("Enter Coffiecent a,b and c : ");
    scanf("%f %f %f",&a,&b,&c);
    Disc=b*b-4*a*c;
    if(a==0){
        printf("this is not a std form of quadratic equation\n");
    }
    else if(Disc>0){
        r1=(-b+sqrt(Disc))/2*a;
        r2=(-b-sqrt(Disc))/2*a;
        printf("this equation has two real and distinct roots\n");
        printf("root1=%.2f AND root2=%.2f\n",r1,r2);
    }
    else if(Disc==0){
        r1=r2=-b/2*a;
        printf("this equation has 0nly one real and equal root\n");
        printf("root1=root2=%.2f\n",r1);
    }
    else{
        realPart=-b/2*a;
        imgPart=sqrt(-Disc)/2*a;
        printf("this equation has two complex and distinct roots\n");
        printf("root1=%.2f+%.2fi AND root2=%.2f+%.2fi\n",realPart,imgPart,realPart,imgPart);
    }
    return 0;
}

#include<stdio.h>
int main(){
    float sellingPrice=5,costPrice=10,profit,loss;
    float profitPercentage,lossPercentage;
    if(sellingPrice>costPrice){
        profit=sellingPrice-costPrice;
        profitPercentage=(profit/costPrice)*100;
        printf("Your Profit is %.2f rupees\nAND profitPercentage=%.2f",profit,profitPercentage);
    }
    else if(sellingPrice<costPrice){
        loss=costPrice-sellingPrice;
        lossPercentage=(loss/costPrice)*100;
        printf("Your Loss is %.2f rupees\nAND lossPercentage=%.2f",loss,lossPercentage);
    }
    else{printf("no profit no loss");}
    return 0;
}

#include<stdio.h>
int main(){
    float Eunit=150,billPrice;
    if(Eunit<=50){
        billPrice=3*Eunit;
        printf("billPrice=%.2f",billPrice);
    }
    else if(Eunit>50 && Eunit<=100){
        billPrice=(3*50)+(5*(Eunit-50));
        printf("billPrice=%.2f",billPrice);
    }
    else if(Eunit>100 && Eunit<=200){
        billPrice=3*50+5*(100-50)+10*(Eunit-100);
        printf("billPrice=%.2f",billPrice);
    }
    return 0;
}

#include<stdio.h>
int main(){
    float sub1=80,sub2=100,sub3=100,sub4=90,sub5=30;
    float total_percentage=(sub1+sub2+sub3+sub4+sub5)/5;
    char grade=' ';
if((total_percentage>=50 && sub1>=40 && sub2>=40 && sub3>=40 && sub4>=40 && sub5>=40)){
    if(total_percentage<=100 && total_percentage>=90){
        grade='A';
    }
    else if(total_percentage<90 && total_percentage>=80){
        grade='B';
    }
    else if(total_percentage<80 && total_percentage>=70){
        grade='C';
    }
    else if(total_percentage<70 && total_percentage>=60){
        grade='D';
    }
    else if(total_percentage<60 && total_percentage>=50){
        grade='E';
    }
    else if(total_percentage<50){
        grade='F';
        printf("fail doe to total percentage");
    }
}
else{ grade='F';
    printf("fail doe to indivisual sub mark percentage");
    }
printf("Total Percentage =%.2f AND GRADE:%c",total_percentage,grade);   
    return 0;
}

#include<stdio.h>
int main(){
    char ch='A';
    printf("the char is %c\n",ch);
    printf("the char value is %d\n",ch);
    if(ch>=65 && ch<=90){
        printf("this character Upparcase");
    }
    else if(ch>=97 && ch<=122){
        printf("this character lowercase");
    }

    return 0;
}

#include<stdio.h>
int main(){
    int a=1,b=3,c=2,d=5;
    if(a>b && a>c && a>d){
        printf("the greatest of all is %d\n",a);
    }
    else if(b>a && b>c && b>d){
        printf("the greatest of all is %d\n",b);
    }
    else if(c>a && c>b && c>d){
        printf("the greatest of all is %d\n",c);
    }
    else if(d>a && d>c && d>b){
        printf("the greatest of all is %d\n",d);
    }
    return 0;
}
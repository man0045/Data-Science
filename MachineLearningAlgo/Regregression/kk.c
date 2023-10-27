#include<stdio.h>
int main(){

 // int x = 3;
 // float y = 3.0;

 // if(x==y) cout<<"a"<<endl;
 // else cout<<"b"<<endl;
 // int i = 65;
 // char j = 'A';
 // if(i==j) cout<<"a"<<endl;
 // else cout<<"b";

 // int a = 4, b=12;
 // if(a=5 or b>50){
 //  cout<<"Dean of student"<<endl;
 // }
 // else{
 //  cout<<("dEAN")<<endl;
 // }
 // int i =4, j=-1, k=0, w,x,y,z;
 // w=i||j||k;
 // x=i&&j&&k;
 // y=i||j||k;
 // z=i&&j||k;
 // printf("w=%d x= %d y=%d z=%d", w,x,y,z);
 // if(printf("ABES")!=4);
 // else{
 //  printf("Eng.College");
 //  return 0;
 // }
 // int i=10,j;
 // (i>=5)?(j=10):(j=15);
 // printf("%d%d\n",i,j);
 // return 0;

 // char ch = 3;
 // switch(ch)
 // {
 //  case1:
 //   printf("Diamond\n");
 //  case2:
 //   printf("Spade");
 //  default:
 //   printf("Heart"); 


 // }
 // int  k;
 // float j = 2.0;
 // switch(k=j+1)
 int a;
 printf("Enter the value of any number");
 scanf("%d",&a);
 
 switch(a)
 {
  case 1:
     int n, reversed = 0, remainder, original;
     scanf("%d",&n);
     while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
     }
     if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    break;
  case 2:
   printf("Perfect");
  case 3:
   printf("IU");
   break;
  default:
   printf("Caught");
 }


}
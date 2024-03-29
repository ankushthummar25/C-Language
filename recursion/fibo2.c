#include <stdio.h>

int factorial(int n) {
   //base case
   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n;
   int i;

   printf("Enter the Number : ");
   scanf("%d",&n);
  
	
   printf("Factorial of %d: %d\n" , n , factorial(n));
   printf("Fibbonacci of %d: " , n);
	
   for(i = 0; i<n; i++) {
      printf("\n%d ",fibbonacci(i));            
   }
}




/*

Enter the Number : 5
Factorial of 5: 120
Fibbonacci of 5:
0
1
1
2
3

*/
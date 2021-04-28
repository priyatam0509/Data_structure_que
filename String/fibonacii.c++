Program for Fibonacci numbers

The Fibonacci numbers are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation 

Fn = Fn-1 + Fn-2
with seed values 

F0 = 0 and F1 = 1.

hey i am writing the two ways function code for fiboacci number one way using recursion and other simple __ARRAY_OPERATORS


Recursion

int fib(int n){
    if(n<=1){
        return n; // why we have written this because we know that fib(0) =0, fib(1) =1 
    }
    return fib(n-1)+fib(n-2); // fib(2) =1 fib(1)=1 fib(0)=0 fib(3) =2 so you can see a pattern that after fib(1) ;fib(2) = fib(1) + fib(0) , fib(3) = fib(2) +fib(1); so frome 
    //the pattern what we found that fib(n) = fib(n-1) + fib(n-2) where n>1. so we are writing same thing in code you can check it by taking any number.
}



iteration:
int fib(int n){
    // we have Declare an array to store Fibonacci numbers 
    int fib[n + 2];
    int i;
 
    //so we have store fib[0] at 0 index similary at 1 index
    fib[0] = 0;
    fib[1] = 1;
 
    for(i = 2; i <= n; i++)// you have to repeate again
    {
         
       // Added the previous 2 numbers in the series and store it
       fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];// similariy return the data/value storea at that index

}



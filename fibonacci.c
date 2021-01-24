// This program outputs an n-th fibonacci number
/*
Fibonacci numbers are as follows:

1 1
2 1
3 2
4 3
5 5
6 8
7 13
8 21
9 34
10 55
11 89
12 144
13 233
14 377
15 610
16 987
17 1597
18 2584
19 4181
20 6765
21 10946
22 17711
23 28657
24 46368
25 75025
26 121393
27 196418
28 317811
29 514229
30 832040
31 1346269
32 2178309
33 3524578
34 5702887
35 9227465
36 14930352
37 24157817
38 39088169
39 63245986
40 102334155
41 165580141
42 267914296
43 433494437
44 701408733
45 1134903170
46 1836311903
47 2971215073
48 4807526976
49 7778742049
50 12586269025

...

*/


#include <stdlib.h>
#include <stdio.h>

int Fibonacci(int n)
{
	int i=0;
	int result=0;
	
	int previous = 0;
	int current = 1;
	
	if(n==0){return 0;}
	else if(n==1){return 1;}
	else
	for(i=2;i<=n;i++){
		result = previous + current;
		previous = current;
		current = result;
	}
	return result;
}

int main(void)
{
	int n=0;
	int output=0;
	
	//Fibonacci[0] = 0;
	//Fibonacci[1] = 1;
	
	printf("Please input a number n: ");
	scanf("%d", &n);
	if(n<0 || n>50){
		printf("Error. The program will now exit.\n");
		return EXIT_FAILURE;
	} else
	output = Fibonacci(n);	
	
	printf("The output is: %d", output);	
	return EXIT_SUCCESS;
}

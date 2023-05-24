# Lab 6: Study For A While

In this lab, you will learn how to:
- use for loops
- use while loops

## Question 1: for.cpp and while.cpp

For this question / while you're on this question, practice writing a program that does the same thing using a for loop and a while loop.

### Program requirements

Your goal is to write a program that prints out all the multiples of 3 between 1 and 100, one number on each line.

In `while.cpp`, write a while loop that does this.

Then, in `for.cpp`, write a for loop that does this.

**Note:** You may only print things when inside of a loop. If you submit an assignment that does not contain a loop, or prints things outside of a loop, you will lose any points the autograder gives you.

### Expected output

Your program should print one number (and nothing else) on its own line. The first few lines of the output when running the code should look like:
```
$ ./a.out
3
6
9
12
15
18
```

## Question 2: prime.cpp

For this question / while you're on this question, write a program to check whether a number is prime.

### Prime numbers

A number is prime if it has exactly two different factors. In other words, a number is prime if it is only divisible by 1 and itself.

If `n` is a number bigger than 2, `n` is prime if it is not divisible by any of the numbers starting from `2` up to (and including) `n - 1`.

Examples:
* 1 is not a prime number because it is only divisible by 1, so it only has one factor.
* 2 is a prime number because it is divisible by 1 and 2
* 3 is a prime number because it is divisible by 1 and 3 but not 2.
* 4 is not a prime number because it is divisible by 1, 2, and 4.

### Program requirements

`prime.cpp` has some starter code that waits for the user to enter a number and stores the input in the variable `n`.

Edit `prime.cpp` to add code that does the following:
* If `n` is equal to or less than 0: print `"invalid"` followed by a newline then return 1.
* Determine whether `n` is prime. Hints: 
    * You might need a special case for the number 1
    * Read the section on prime numbers carefully and use a loop in your code to check if `n` is divisible by any of the numbers between `2` and `n - 1`.
* If `n` is prime: print `"prime"` followed by a newline
* If `n` is not prime: print `"not prime"` followed by a newline
* Your code should not print anything else.

### Example expected output

Input: `1`
```
$ ./a.out
1
not prime
$
```

Input: `7`
```
$ ./a.out
7
prime
$
```

Input: `12`
```
$ ./a.out
12
not prime
$
```

Input: `0`
```
$ ./a.out
0
invalid
$
```
(The exit code should be 1)

## Question 3: pyramid.cpp

For this question / while you're on this question, practice using nested loops.

### Program requirements

`pyramid.cpp` has some starter code that waits for the user to enter a number and stores the input in the variable `n`.

Edit `pyramid.cpp` so that it prints out a pyramid made of numbers.
* If `n` is negative, print `"invalid"` followed by a newline, then return 1.
* Otherwise, the number of layers in the pyramid should be `n`. 
* The topmost layer should be `"1"`. The second layer should be `"121"`. The third layer should be `"12321"`. And so on.
* Look at the example expected output for clarification. 

### Example expected output

Input: `1`
```
$ ./a.out
1
1
$
```

Input: `4`
```
$ ./a.out
4
1
121
12321
1234321
$
```

Input: `11`
```
$ ./a.out
11
1
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321
12345678910987654321
123456789101110987654321
$
```

Input: `0`
```
$ ./a.out
0
$
```
(Nothing should be printed if the input is 0.)

Input: `-1`
```
$ ./a.out
-1
invalid
$
```
(The exit code should be 1)

### Hints

Break the problem down into smaller problems:

First, forget about the pyramid. Write a loop where if you have a variable `i`, it prints out numbers from 1 to `i` on one line.
In other words, if `i` is 1, it would print `"1"`. If `i` is 5, it would print `"12345"`.

Then, write another loop where given the same variable `i`, it prints out numbers from `i-1` back to 1 on one line. In other words, if `i` is 5, it would print `"4321"`.

If you did that successfully, then you should be able to put both together and print any single row of the pyramid.

Now, write a larger loop that contains the first two loops to print all the rows from 1 to n.

#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
    int counter = 0;

    for (counter = 0; counter < 10; counter) {
       printf(counter);
    }
}
//
// char *reverse_string(char rv[], char s[])
// {
//     int length = string_length(s);
//     int count = 0;

//     for (int i = length - 1; i >= 0; i--)
//     {
//         rv[count] = s[i];
//         count++;
//         printf("CHARS: %d\n", rv[count]);
//     }
//     rv[count] = '\0';
//     printf("REVERSED: %s\n", rv);
//     return rv;
// } 
//
#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif

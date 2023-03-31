#include <stdio.h>
#include <float.h>

int main(void)
{
  
    // same thing as below but print it
    printf("char: %d\n", sizeof(char) *8);
    // short
    printf("short: %d\n", sizeof(short) *8);
    // unsigned short
    printf("unsigned short: %d\n", sizeof(unsigned short) *8);
    // int
    printf("int: %d\n", sizeof(int) *8);
    // unsigned int
    printf("unsigned int: %d\n", sizeof(unsigned int) *8);
    // long
    printf("long: %d\n", sizeof(long) *8);
    // long long
    printf("long long: %d\n", sizeof(long long) *8);
    // float
    printf("float: %d\n", sizeof(float) *8);
    // double
    printf("double: %d\n", sizeof(double) *8);
    // long double
    printf("long double: %d\n", sizeof(long double) *8);


    FILE *log = fopen("log.log", "w");
    fprintf(log, "char: %d\n", sizeof(char) *8);
    // short
    fprintf(log, "short: %d\n", sizeof(short) *8);
    // unsigned short
    fprintf(log, "unsigned short: %d\n", sizeof(unsigned short) *8);
    // int
    fprintf(log, "int: %d\n", sizeof(int) *8);
    // unsigned int
    fprintf(log, "unsigned int: %d\n", sizeof(unsigned int) *8);
    // long
    fprintf(log, "long: %d\n", sizeof(long) *8);
    // long long
    fprintf(log, "long long: %d\n", sizeof(long long) *8);
    // float
    fprintf(log, "float: %d\n", sizeof(float) *8);
    // double
    fprintf(log, "double: %d\n", sizeof(double) *8);
    // long double
    fprintf(log, "long double: %d\n", sizeof(long double) *8);
    fclose(log);
}
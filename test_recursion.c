#include<stdio.h>

#define N 10

struct test
{
    int b;
};

struct test recursion(struct test a)
{
    a.b++;
    if(a.b>N)
    {
        return a;
    }
    return recursion(a);
}

int main()
{
    struct test a;
    a.b=0;
    printf("%d\n",recursion(a).b);
    return 0;
}

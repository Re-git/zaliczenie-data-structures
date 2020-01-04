#include <stdio.h>

int my_function(int x) {
    x=x+1;
    return x;
}

int main(int argc, char ** argv)
{
    int x,y;
    y=0;
    x=y;
    my_function(x);
    return 0;
}

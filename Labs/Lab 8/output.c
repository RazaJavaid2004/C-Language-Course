// write the output of the program
#include <stdio.h>

int main (void) {
    char a[11] = "hello world";
    int i;
    for(i = 0; i <= 9; i++) {
        a[i] = a[i + 1];
        printf("%d \t %s \n", i, a);
    }
    printf("\n %d", a);
    return 0;
}
/*
Output of the Loop:
0   eello world
1   elllo world
2   elllo world
3   ello  world
4   ello  world
5   ello wworld
6   ello woorld
7   ello wororld
8   ello worlld
9   ello worldd

The last line of the program should print characters,
but it is attempting to print an integer which doesn't make sense.
Correcting this to properly print a string would be:
printf("\n %s", a);

Final Output (including corrected last line):
0   eello world
1   elllo world
2   elllo world
3   ello  world
4   ello  world
5   ello wworld
6   ello woorld
7   ello wororld
8   ello worlld
9   ello worldd

ello worldd
*/
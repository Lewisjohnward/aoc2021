#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int main (void)
{
    FILE *fd;
    int prev, incs;
    char buf[LEN];
    prev=incs=0;
    if((fd = fopen("./input.txt", "r")) == 0){
        exit(1);
        perror("Error fopen\n");
    }

    while(fgets(buf, LEN, fd)){
        if(atoi(buf) > prev && prev != 0)
            incs++;
        prev = atoi(buf);
    }
    printf("total increments: %d\n", incs);
    return 0;
}



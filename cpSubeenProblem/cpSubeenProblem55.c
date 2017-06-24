#include <stdio.h>
#include <stdbool.h>
// http://cpbook.subeen.com/2016/02/blog-post_15.html
int main()
{
    bool flag = false;
    int i;

    for(i = 1000; i > 0; i--){

        if(flag){
            if( i % 5 == 0){
            printf("\n");
            }
        }
        flag = true;

        printf("%d\t",i);

    }
    return 0;
}

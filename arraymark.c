#include <stdio.h>


int main(){
    int i=0;
    int marks[5];//declaration of array
    marks[0]=98;//initialiasation of array
    marks[1]=87;
    marks[2]=80;
    marks[3]=97;
    marks[4]=65;
    marks[5]=88;
    for(i=0;i<=5;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
    
}

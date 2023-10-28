#include <stdio.h>
void main(){
    int i =10;
    int j =++i;
    printf("I=%d\n", j);
    printf("I=%d\n",i);
}
//if j= i +1 them j is 11 but i remains 10 . such functions change original variable . ++a  means a = a + 1 
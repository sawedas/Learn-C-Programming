#include <stdio.h>
#include <stdlib.h>

//&a print by %p ,output is address
//adress not clear when after use
//char * is pointer
//pointer keep address, format is type *name = &x;
//array keep address indax 0
int main(){
    int size_array;
    scanf("%d\n", &size_array);
    int a[100] = {};

    //input array
    for (int i = 0; i < size_array; i++)
        scanf("%d", &a[i]);
    
    //add data
    size_array += 1; //amount want to add
    scanf("%d", &a[size_array - 1]); //add last index

    //print array
    for (int i = 0; i < size_array; i++)
        printf("%d ", a[i]);
    printf("\n");

    //switch
    int a_last = a[size_array - 1];
    a[size_array - 1] = a[1];
    a[1] = a_last;

    //print result
    for (int i = 0; i < size_array; i++)
        printf("%d ", a[i]);
    printf("\n");

    int new[100] = {}, count = 0;

    printf("new=[");
    for (int i = 0; i < size_array; i++){
        if (a[i] % 2 == 0){
            new[count] += a[i];
            if (count != 0){
                printf(" %d", new[count]);
            }else if (count == 0){
                printf("%d" , new[count]);
            }
            
            count += 1;
        }
    }printf("]\n");
}
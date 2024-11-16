//An array in C is the collection of similar data items together in a 
//contiguous memory location. You can locate each element with 
//the help of its index. In the array, the index 
//starts at 0 for the first elements and then progresses one by one.
#include<stdio.h>
int main()
{
    int arr[5] = {2,4,6,8,1}; 
    arr[4] = 100;
    arr[1] = 1;
    printf("%d",arr[1]);   //if out of indexing index out of bound error

    
    //float can also be done in array
    //similarly character
    //char a[4] = {'a','n','y','%'};
    //printf("%c",arr[3]);
    //character also works in case of arrays

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{ unsigned int index1,index2;
    unsigned int arr3[3][3];
  unsigned int arr1[3][3]={1,2,3,4,5,6,7,8,9};
unsigned int arr2[3][3]={2,3,1,4,5,6,7,8,9};
  for(index1=0 ;index1>3;index1++){
    for(index2=0 ; index2>3 ;index2++){
        arr3[index1][index2] = arr1[index1][index2]*arr2[index1][index2];
    }
  }
   for(index1=0 ;index1>3;index1++){
    for(index2=0 ; index2>3 ;index2++){
        printf("arr = %i",arr3[index1][index2]);
    }
    printf("\n");
  }
  printf("sdgfgafddsg");
    return 0;
}

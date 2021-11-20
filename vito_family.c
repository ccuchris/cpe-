#include<stdio.h>
#include<math.h>

void swap(int *num1, int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
void sort(int *relative, int len){
    int temp;
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(relative[j]>relative[j+1]){
                swap(&relative[j],&relative[j+1]);
            }
        }
    }
}
int main(){
    int num_test;
    scanf("%d", &num_test);
    int relative[500];
    for(int i=0;i<num_test;i++){
        int num_relative=0;
        scanf("%d", &num_relative);
        for(int j=0;j<num_relative;j++){
            scanf("%d", &relative[j]);
        }
        sort(relative, num_relative);
        int middle=num_relative/2;
        int distance=0;
        for(int j=0;j<num_relative;j++){
            distance+=abs(relative[j]-relative[middle]);
        }
        printf("%d\n", distance);
        num_relative=0;
    }
    return 0;
}
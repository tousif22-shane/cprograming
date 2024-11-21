#include<stdio.h>
int main(){
int size,i,largest=0;

printf("\t\t*** Array largest number finder***\n\n");
printf("enter Array size");
scanf("%d",&size);
int numbers[size];
printf("enter Array elements:\n");
for(i = 0;i<size; i++){
        printf("%d",i);
scanf("%d", &numbers[i]);
if(numbers[i]>largest)largest = numbers[i];
}


printf("\n largest: %d", largest);
return 0;
}


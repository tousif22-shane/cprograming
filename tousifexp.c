#include<stdio.h>
int main(){
int rows,cols,i,j;

printf("\t\t*** Add Array ***\n\n");
printf("enter Array size (row,column):");
scanf("%d,%d",&rows,&cols);
int arr_a[rows][cols], arr_b[rows][cols], sum[rows][cols];
printf("enter first Array elements:\n");
scanf("%d,%d",&rows,&cols);
for(i = 0;i<cols; i++){
        for(i = 0;i<cols; j++){
        printf("%d,%d: ",i,j);
scanf("%d", &arr_a[i][j]);




        }
}
printf("\n");

printf("sum of both arrays:\n");

for(i = 0;i<cols; i++){
        for(i = 0;i<cols; j++){
                sum[i][j] = arr_a[i][j] + arr_b[i][j];
                 printf("%d ", sum[i][j]);
        }

printf("\n");

}
return 0;

}


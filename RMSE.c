#include<stdio.h>
#include<math.h>
void RMSE(float arr1[],float arr2[],int size){
    float sum=0.0;
    for(int i=0;i<size;i++)
    {
        float diff_sq=pow((arr1[i]-arr2[i]),2);
        sum+=diff_sq;
        
    }
    float mean_sq_error=sum/size;
    float RMSE_val=sqrt(mean_sq_error);
    printf("The RMSE value is: %f ",RMSE_val);
    
}
int main()
{
    float ground_val[]={1,2,3,4,78,6,7};
    float estimated_val[]={1.1,2.2,3.2,4.3,5.4,6.6,7.6};
   int size = sizeof(ground_val) / sizeof(ground_val[0]);
    RMSE(ground_val,estimated_val,size);
    return 0;
}
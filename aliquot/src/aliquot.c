#include <stdio.h>
#include <math.h>

int aliquot_term(int n){
    int sum = 0;
    for (int i=1; i<=n/2; i++)
    {
        if (n%i==0)
        {
            
            if (n!=i)
             
            {
                sum = sum + i;
            }
        }
    }
     
    return sum;


}

int main(){

    int sum = 0;  
    int n = 0;

    scanf("%d",&n);

    sum = aliquot_term(n);

    printf("%d\n",sum);
    return 0;
}
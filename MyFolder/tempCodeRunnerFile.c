#include<stdio.h>
#include<math.h>

int main()
{
    int A=[1,2,3,4,5],s=0,j=0;
    int itteration = pow(2,5);

    while(s < itteration)
		{
			for(int b=1 ; b < 4 ; b++)
			{
				greatest = A[j];
				if(greatest > A[j+b])
				greatest = A[j+b];
			}
			s++;
			j++;
		}
    return 0;
}
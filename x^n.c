// uloha-8-2.c -- Tyzden 8 - Uloha 2
// David Buransky, 17.11.2014 19:51:08

#include <stdio.h>
#define num 2.0

// vypocita x^n
double xn(double x, int n)
{
    double exp=1.0,exp2=0.0,k=x*x,pole[1000];
    int i,j,pom=1;
    exp2=exp;
    if(n==0)
        return 1;
    if(n==1)
        return x;
    else
        {
            //pole[0]=exp;
            for(i=0; i<n-1; i++)
                {
                    //printf("%d\n",i);
                    exp*=x;
                    pole[i]=exp;
                    //printf("%lf\n",pole[i]);
                    if(exp>n)
                        {
                            pom=n-exp2;
                            for(j=2; j<=i; j++)
                                {
                                    k*=k;

                                }
                      //      printf("%lf\n",k);
                            break;
                            pole[i]='\0';
                        }
                        //printf("%lf\n",pole[5]);
                    exp2=exp;
                }
                    k*=pole[pom];


                    //for(i=0;i<strlen(pole);i++)
                        //printf("%lf\n",pole[i]);

        }
       // printf("%lf\n",k);
    return k;
}

// ukazkovy test
int main(void)
{
    int i;
    for (i = 0; i < 32; i++)
        printf("2^%d = %lf\n", i, xn(2.0, i));
    return 0;
}

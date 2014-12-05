//pow my fnc
#include <stdio.h>
#include <string.h>

// vypocita x^n
double xn(double x, int n)
{

    int exp=n,zvysok,k;
  double pom=x,vysledok=1.0;
    int i,pole[1000000];
    if(n==0)
        return 1;
    if(n==1)
        return x;
    else
    {
        while(exp!=0)
        {
            zvysok=exp%2;
            pole[i]=zvysok;
            exp/=2;
          //printf("%d\n",pole[i]);
            i++;
        }
        pole[i]='\0';
        k=i;
        i=0;
        while(i!=k)
        {
          	//printf ("Prebehol som\n");
            if(pole[i]==1)
            {
              vysledok*=pom;
              //printf("Vysledok %d\n",vysledok);
            }

       	pom*=pom;
        i++;
        }
        return vysledok;
    }
}

// ukazkovy test
int main(void)
{
    int i;
    for (i = 0; i < 32; i++)
        printf("2^%d = %lf\n", i, xn(2.0,i ));
    return 0;
}

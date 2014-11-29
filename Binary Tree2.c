// uloha-5-1.c -- Tyzden 5 - Uloha 1
// David Buransky, 24.10.2014 10:07:35

#include <stdio.h>
#include <stdlib.h>

typedef struct Strom
{
  int num;
  struct strom *pravy,*lavy;
}STROM;

STROM *zapis(STROM *prv,STROM *akt,int height)
{

    if(prv==NULL){
        prv = akt;
        printf("%d\n",height);
        return prv;
    }
    if(akt->num==prv->num){
        printf("vypisuje toto %d\n",++height);
        return prv;
    }
    if(akt->num<prv->num){
        if(prv->lavy==NULL){
            printf("siel som dolava %d\n",++height);
            prv->lavy=akt;
        }
        else{
            prv->lavy=zapis(prv->lavy,akt,++height);
        }
    }
    if(akt->num>prv->num)
    	{
        if(prv->pravy==NULL){
            printf("siel som v pravo %d\n",++height);
            prv->pravy = akt;
        }
        else{
            prv->pravy=zapis(prv->pravy,akt,++height);
        }
    }
    return prv;
}

int main()
{
  int d,height;
  STROM *prv,*novy=NULL;
  //scanf("%d",&d);
  //prv=(STROM*)malloc(sizeof(STROM));
  prv=NULL;
  while((scanf("%d",&d))>0)
  {
    height=0;
    novy=(STROM*)malloc(sizeof(STROM));
    novy->num=d;
    novy->pravy=NULL;
    novy->lavy=NULL;
    prv=zapis(prv,novy,height);
  }
  return 0;
}

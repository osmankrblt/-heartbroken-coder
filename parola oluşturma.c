#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
    setlocale(LC_ALL,"Turkish");
    char dizih[]={'a','b','c','ç','d','e','f','g','ğ','h','i','ı','j','k','l','m','n','o','ö','p','r','s','ş','t','u','ü','v','y','z','A','B','C','Ç','D','E','F','G','Ğ','H','İ','I','J','K','L','M','N','O','Ö','P','R','S','Ş','T','U','Ü','V','Y','Z'};
    char rakam[]={'0','1','2','3','4','5','6','7','8','9'};


int harfs,rakams,parolas,c,d,k=0,h=0,a,p=0,i=0,t=0,m,w=0;
srand(time(NULL));
printf("Parola uzunluğu kaç olsun?\n");
scanf("%d",&parolas);
printf("Girdiğiniz sayıdan kaç tanesi harf olsun?\n");
scanf("%d",&harfs);
rakams=parolas-harfs;
   char dizipar[parolas+1];



for(i;i<harfs;i++){

     a=rand()%56;

     dizipar[i]=dizih[a];



}

int f=rakams+i;
for(i;i<f;i++){

	d=rand()%10;

	dizipar[i]=rakam[d];



}
for(int z=0;z<parolas;z++){


    printf("%c",dizipar[z]);

    }

}

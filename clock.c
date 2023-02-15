#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
   int h, m, s;
   int d=1;
   printf("set time:");
   scanf("%d %d %d" ,&h,&m,&s);
   if(h>12||m>60||s>60)
   {
      printf("error!!");
      exit(0);
   }
    while(1) {
        s++;
        if(s>59) {
            s=0;
            m++;
        }
        if(m>59) {
            m=0;
            h++;
        }
        if(h>12) {
            h=1;
        }
        printf("%02d:%02d:%02d" ,h,m,s);
        printf("\n clock:");

        sleep (d);
        system ("clear");
    }

     return 0;
}
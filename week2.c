#include <stdio.h>
#include <stdlib.h>

int main()
{
  int st1,lb1,st2,lb2;
  int oz1,oz2;
  printf("Input Weight 1(st,lb,oz)");
  scanf("%d,%d,%d",&st1,&lb1,&oz1);


  printf("Input Weight 1(st,lb,oz)");
  scanf("%d,%d,%d",&st2,&lb2,&oz2);



  printf("%10s%6s%6s%6s\n","","st","lb","oz");
  printf("=====================================\n");
  printf("%10s%6d%6d%6d\n","Weight1",st1,lb1,oz1);
  printf("%10s%6d%6d%6d\n","Weight2",);
  printf("=====================================\n");
  printf("%10s%6d%6d%6d\n","Sum",);
  printf("%10s%6.1f%6.1f%6.1f\n","Average",);
/*
  printf("The total time is %02d:",h1+h2+(m1+m2+(s1+s2)/60)/60);
  printf(":%02d", (m1+m2+(s1+s2)/60)%60);
  printf(":%02d",(s1+s2)%60);*/
    return 0;
}

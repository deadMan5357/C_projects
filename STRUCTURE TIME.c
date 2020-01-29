//STRUCTURE TIME
#include <stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
};
struct time add(struct time a,struct time b);
int main()
{
    struct time a,b,w;
    printf("enter the time1 in hr:min:sec format\n");
    scanf("%d%d%d",&a.hr,&a.min,&a.sec);
    printf("enter the time2 in hr:min:sec format\n");
    scanf("%d%d%d",&b.hr,&b.min,&b.sec);
  w = add(a,b);
  printf("addition is");
  printf("%d:%d:%d",w.hr,w.min,w.sec);
  return(0);
}
struct time add(struct time a,struct time b)
{
    struct time p;
    p.hr = a.hr+b.hr;
    p.min = a.min+b.min;
    p.sec = a.sec+b.sec;
    p.min = p.min+(p.sec)/60;
    p.sec = p.sec%60;
    p.hr = p.hr+p.min/60;
    p.min = p.min%60;
    return(p);
};

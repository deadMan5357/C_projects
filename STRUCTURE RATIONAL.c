//RATIONAL STRUCTURE
#include <stdio.h>
struct rational
{
    int nr;
    int dr;
};
struct rational add(struct rational p,struct rational q);
struct rational sub(struct rational p,struct rational q);
struct rational mult(struct rational p,struct rational q);
struct rational div(struct rational p,struct rational q);
int gcd(int a,int b);
int main()
{
    struct rational x,y,z,a,b,c;
    printf("Enter two rational numbers\n");
    scanf("%d%d%d%d",&x.nr,&x.dr,&y.nr,&y.dr);
    z = add(x,y);
    a = sub(x,y);
    b = mult(x,y);
    c = div(x,y);
    printf("Addition of given rational numbers is\n");
    printf("%d/%d",z.nr,z.dr);
    printf("Subtraction of given rational numbers is\n");
    printf("%d/%d",a.nr,a.dr);
    printf("Multiplication of given rational numbers is\n");
    printf("%d/%d",b.nr,b.dr);
    printf("Division of given rational numbers is\n");
    printf("%d/%d",c.nr,c.dr);
}
struct rational add(struct rational p,struct rational q)
{
 struct rational s;
    s.nr = (p.nr*q.dr)+(q.nr*p.dr);
    s.dr = p.dr*q.dr;
     int temp = s.nr;
 if(s.nr>s.dr)
    {
    s.nr = s.nr/gcd(temp,s.dr);
    s.dr = s.dr/gcd(temp,s.dr);
    }
 else
 {
    s.nr = s.nr/gcd(s.dr,temp);
    s.dr = s.dr/gcd(s.dr,temp);
 }
 return(s);
}
struct rational sub(struct rational p,struct rational q)
{
  struct rational s;
    s.nr = (p.nr*q.dr)-(q.nr*p.dr);
    s.dr = p.dr*q.dr;
      int temp = s.nr;
 if(s.nr>s.dr)
    {
    s.nr = s.nr/gcd(temp,s.dr);
    s.dr = s.dr/gcd(temp,s.dr);
    }
 else
 {
    s.nr = s.nr/gcd(s.dr,temp);
    s.dr = s.dr/gcd(s.dr,temp);
 }
 return(s);
}
struct rational mult(struct rational p,struct rational q)
{
    struct rational s;
    s.nr = p.nr*q.nr;
    s.dr = p.dr*q.dr;
      int temp = s.nr;
 if(s.nr>s.dr)
    {
    s.nr = s.nr/gcd(temp,s.dr);
    s.dr = s.dr/gcd(temp,s.dr);
    }
 else
 {
    s.nr = s.nr/gcd(s.dr,temp);
    s.dr = s.dr/gcd(s.dr,temp);
 }
 return(s);
}
struct rational div(struct rational p,struct rational q)
{
    struct rational s;
    s.nr = p.nr*q.dr;
    s.dr = p.dr*q.nr;
      int temp = s.nr;
 if(s.nr>s.dr)
    {
    s.nr = s.nr/gcd(temp,s.dr);
    s.dr = s.dr/gcd(temp,s.dr);
    }
 else
 {
    s.nr = s.nr/gcd(s.dr,temp);
    s.dr = s.dr/gcd(s.dr,temp);
 }
 return(s);
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else if(b==1)
        return 1;
    else
        return gcd(b,a%b);
}

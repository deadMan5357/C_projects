//COMPLEX STRUCTURE
#include <stdio.h>
struct complex
{
    float r;
    float i;
};
struct complex subt(struct complex m,struct complex n);
struct complex divi(struct complex m,struct complex n);
struct complex add(struct complex m,struct complex n);
struct complex mult(struct complex m,struct complex n);
int main()
{
    struct complex x,y,z,w,a,b;
    printf("enter the complex number\n");
    scanf("%f%f%f%f",&x.r,&x.i,&y.r,&y.i);
    z = subt(x,y);
    a = add(x,y);
    w = divi(x,y);
    b = mult(x,y);
 printf("Sub of x,y is\n");
 printf("%f+i%f\n",z.r,z.i);
 printf("Div of x,y is\n");
 printf("%f+i%f\n",w.r,w.i);
 printf("Add of x,y is\n");
 printf("%f+i%f\n",a.r,a.i);
 printf("Mult of x,y is\n");
 printf("%f+i%f\n",b.r,b.i);
}
struct complex subt(struct complex m,struct complex n)
{
    struct complex p;
    p.r = m.r-n.r;
    p.i = m.i-n.i;
    return(p);
}
struct complex divi(struct complex m,struct complex n)
{
    struct complex p;
    p.r = ((m.r*n.r)+(m.i*n.i))/((n.i*n.i)+(n.r*n.r));
    p.i = ((n.r*m.i)-(m.r*n.i))/((n.i*n.i)+(n.r*n.r));
    return(p);
}
struct complex add(struct complex m,struct complex n)
{
    struct complex p;
    p.r = m.r+n.r;
    p.i = m.i+n.i;
    return(p);
}
struct complex mult(struct complex m,struct complex n)
{
    struct complex p;
    p.r = (m.r*n.r)-(m.i*n.i);
    p.i = (m.i*n.r)+(n.i*m.r);
    return(p);
}

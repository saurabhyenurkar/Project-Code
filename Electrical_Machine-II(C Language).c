#include <stdio.h>
#include<math.h>
int main()
{
 int phase, pole, slot, conductorperslot, speed;
 float flux;
 printf("Name : Harshal Y. Milmile \nUSN No. : EE20034 \n\n");
 printf("Enter the value for Phase :\n");
 scanf("%d", &phase);
 printf("Enter the value for no. of Poles\n");
 scanf("%d", &pole);
 printf("Enter the value for no. of Slots\n");
 scanf("%d", &slot);
 printf("Enter the value for no. of Coductors/slots\n");
 scanf("%d", &conductorperslot);
 printf("Enter the value for flux \n");
 scanf("%f", &flux);
 printf("Enter the value for Synchronous Speed \n");
 scanf("%d", &speed);

int frequency=(speed*pole)/120;
 printf(" \n The required value of frequency is :  %d Hz",frequency);
 
float Tph=(conductorperslot*slot)/6;
 printf(" \n The required value of Tph is :  %f",Tph);
 
int m=slot/(pole*phase);
 printf(" \n The required value of m is :  %d",m);
 
int B=(180*pole)/slot;
 printf(" \n The required value of B is :  %d",B);
 
double alpha, ret;
ret = cos( (alpha*3.1416)/(2*180) );
float Kc=cos(alpha*3.1416/(2*180));
printf(" \n Kc is equal to :  %f",Kc);

float num=(m*B)/2;
float den=(B/2);
float Kd=(sin((num*3.1416)/180))/(m*sin((den*3.1416)/180));
printf(" \n Kd is equal to :  %f",Kd);

float Eph=4.44*Kc*Kd*flux*frequency*Tph;
printf(" \n Required value of Eph is :  %f Volts",Eph);

float El=1.732*Eph;
printf(" \n Required value of El is :  %f Volts",El);
return 0;
}


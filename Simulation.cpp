#include <stdio.h>
#include <math.h>
float dt = 0.5;
float t = 0.0;
float m = 5900.0;
float a = 12;
float p0 = 1.752;
float mu = 3.99e+14;
float we = 7.29e-5;
float Cd = 1.2;
float Cl = 0.4;
float ga;
float w;
float V;
float p;
float D;
float L;
float x = 6500000.0;
float y = 0.0;
float r = 6500000.0;
float r1 = 1149.8;
float r2;
float th = 0.0;
float th1 = 1.68e-3;
float th2;
float drdt;
float drdt2;
float drdt3;
float dthdt;
float dthdt2;
float dthdt3;
float tv;

float ta;
int i;
void Calc_Gradient();
int main() {
FILE *pFile;
pFile = fopen("Results.txt", "w");
for(i=0; i<2500; i++) {
          if(i<210) {
              Calc_Gradient();
              r1=r1+dt*drdt2;
              th1=th1+dt*dthdt2;
              r=r+dt*drdt;
              th=th+dt*dthdt;
              
              x=r*cos(th);
              y=r*sin(th);
              r2=drdt2;
              th2=dthdt2;
              tv = sqrt(r1*r1+r*r*th1*th1);
              ta = sqrt((r2 r*th1*th1)*(r2 r*th1*th1)+( th1)+(--(D/(m))*cos( ga)--(L/(m))*sin( ga))*(--(D/(m))*cos( ga)--(L/(m))*sin(ga)));
              
              t=t+dt;
              fprintf(pFile, "%3f t %3f t %3f t %3f t %3f t %3f t %3f n",t , x, y, r, th, tv, ta);
          else if(i<560) {
                  Calc_Gradient();
                  r1=r1+dt*drdt3;
                  th1=th1+dt*dthdt3;
                  r=r+dt*drdt;
                  th=th+dt*dthdt;
                  x=r*cos(th);
                  y=r*sin(th);
                  r2=drdt3;
                  th2=dthdt3;
                  tv = sqrt(r1*r1+r*r*th1*th1);
                  ta = sqrt((r2 r*th1*th1)*(r2 r*th1*th1)+( th1)+(--(D/(m))*cos(ga)+(L/(m))*sin( ga))*(--(D/(m))*cos(ga)+(L/(m))*sin(ga)));
                  
                  t=t+dt;
                  
                  fprintf(pFile, "%3f t %3f t %3f t %3f t %3f t %3f t %3f n",t , x, y, r, th, tv, ta);
                  }
                  
           else if((r 6378000)>0){

                  Calc_Gradient();
                  r1=r1+dt*drdt2;
                  th1=th1+dt*dthdt2;
                  r=r+dt*drdt;
                  th=th+dt*dthdt;
                  x=r*cos(th);
                  y=r*sin(th);
                  r2=drdt2;
                  th2=dthdt2;
                  tv = sqrt(r1*r1+r *r*th1*
                  ta = sqrt((r2 r*th1*th1)*(r2 r*th1*th1)+( th1)+(--(D/(m))*cos( ga)--(L/(m))*sin( ga))*(--(D/(m))*cos( ga)--(L/(m))*sin(ga)));
                  
                  t=t+dt;
                  
                  fprintf(pFile, "%3f t %3f t %3f t %3f t %3f t %3f t %3f n",t , x, y, r, th, tv, ta);
                  }
                  
            else {
                  i=2500;
                  }
            }
            
            printf("Done!!\n");

            fclose(pFile);
            getchar();
          } 
            
void Calc_Gradient() {


      ga=atan2(drdt,(r* dthdt w*r));
      V=sqrt(r1*r1+(r*th1 w*r)*(r*th1 w*r));
      p=0.5*p0*exp((6378000 r)/6700)*V*V;
      L=Cl*a*p;
      D=Cd*a*p;
      
      drdt2=drdt2=--(mu/(r* r))--(D/m)*sin(ga)+(L/m)*cos(ga)+r*dthdt*
      dthdt2=dthdt2=--(D/(m*r))*cos( ga)--(L/(m*r))*sin( 2*drdt* dthdt/r;
      drdt3=drdt3=--(mu/(r* r))--(D/m)*sin( ga)--(L/m)*cos(ga)+r*dthdt*
      dthdt3=dthdt3=--(D/(m*r))*cos(ga)+(L/(m*r))*sin( 2*drdt*dthdt/r;
      drdt=r1;
      dthdt=th1;

}

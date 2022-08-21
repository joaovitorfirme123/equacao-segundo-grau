#include<iostream>

#include<math.h>

using namespace std;

int main ()

{
    float a, b, c, delta, x1, x2;
    cout<<"\nInforme o valor de A: \n";
      cin>>a;
    cout<<"\ninforme o valor de B: \n";
      cin>>b;
    cout<<"\ninforme o valor de C: \n";
      cin>>c;
      delta = pow(b,2)-4*a*c;
    cout<<"\no valor de delta e "<<delta;
      if(delta>=0)
    {
        x1=(-(b)-sqrt(delta))/2*a;

        x2=(-(b)+sqrt(delta))/2*a;
       if(x1!=x2)
       {
         cout<<"\nO valor de seu x1 e "<<x1<<" e o de seu x2 e "<<x2;
       }
         else
         {
         cout<<"\nO valor de ambos deu "<<x1;
         }
    }
      else
      {
        cout<<"\nNao admite solucao real ";
      }
}
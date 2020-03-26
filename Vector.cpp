#include "Vector.h"
#include <bits/stdc++.h>
Vector::Vector(int n,int x){
    this->n = n;
    this->t = new float[n];
    for (int i = 0; i < n; i++)
        this->t[i] = x;

 }
 Vector::Vector(const Vector &v){
    this->n = v.n;
    this->t = new float[n];
    for (int i = 0; i < n; i++)
        this->t[i] =v.t[i];

 }
 Vector::~Vector(){
   n = 0;
   if (t!=0) delete t;
 }

 void Vector::citire(){
      int i;
      std::cin>>n;
      for (i = 0; i < n; i++){
           std::cin >> t[i];
      }
 }
 void Vector::afisare() {
      for (int i = 0; i < n; i++){
           std::cout<<t[i]<<" ";
      }
      std::cout<<"\n";
 }
 void Vector::reactualizare(int x, int nr)
 {this->n = nr;
    this->t = new float[n];
    for (int i = 0; i < n; i++)
        this->t[i] =x;

 }
  float Vector::suma()
{
   float s = 0;
   for (int i = 0; i < n ; i++ )
     s+=t[i];
   return s;
}
void Vector::findMAX()
{
    float mx=-9999;
    int  poz=-1;
    for(int i=0; i<n; i++)
        if(t[i]>mx)
        {
            mx=t[i];
            poz=i;
        }

    std::cout<<"Maximul e "<<mx<<" pe pozitia "<<poz+1<<"\n";
}
void Vector::sortASC()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(t[i]<t[j])
            {
                float aux=t[i];
                t[i]=t[j];
                t[j]=aux;
            }
}

Vector Vector:: operator=(Vector v)
{this->n = v.n;
    this->t = new float[n];
    for (int i = 0; i < n; i++)
        this->t[i] =v.t[i];
return (*this);}

float Vector:: operator*(Vector v)
{   float s=0;
    for (int i = 0; i < n; i++)
        s+=v.t[i]*t[i];
return s;}

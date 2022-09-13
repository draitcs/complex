#include<iostream> 
using namespace std; 
class complex 
{
public: 
float real,imag; 
int input(float r,float i) 
{
real=r; 
imag=i; 
return 0; 
} 
complex add_real_part(int a); 
complex add_comp(complex); 
void showdata(complex c) 
{
cout<<"The complex number is : \t"; 
cout<<c.real<<"+ i"<<c.imag<<endl; 
}
};
complex complex::add_real_part(int a) 
{
complex s2; 
s2.real=real+a; 
s2.imag=imag; 
return s2; 
}
complex complex::add_comp(complex s2) 
{
complex s3; 
s3.real=s2.real+real; 
s3.imag=s2.imag+imag; 
return s3; 
}
int main() 
{
complex s1,s2,s3; 
s1.input(11.2,22.3); 
s2=s1.add_real_part(2); 
s3=s1.add_comp(s2); 
s1.showdata(s1); 
s2.showdata(s2); 
s3.showdata(s3); 
return 0; 
}

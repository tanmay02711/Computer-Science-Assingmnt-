#include <iostream>

const float PI = 3.1415927;
/* Cicle function*//* Cicle function*//* Cicle function*//* Cicle function*//* Cicle function*//* Cicle function*//* Cicle function*//* Cicle function*//* Cicle function*//* Cicle function*/
float area(float radius)
{
return PI * radius * radius;
}
float circum(float radius)
{
return 2 * PI * radius;
} 

/*Maximum nad Minimum number*//*Maximum nad Minimum number*//*Maximum nad Minimum number*//*Maximum nad Minimum number*//*Maximum nad Minimum number*//*Maximum nad Minimum number*/
int maximum(int array[], int n) 
{ 
int max = array[0]; 
 for (int i = 1; i < n; i++) 
 if (array[i] > max) 
  max = array[i]; 
  return max; 
} 
  int minimum(int array[], int n) 
{ 
 int min = array[0]; 
 for (int i = 1; i < n; i++) 
  if (array[i] < min) 
  min = array[i]; 
  return min; 
} 

int maxmin(int array[],int n)
{
int swap;
for(int i=0;i<n;i++)
{
for(int j=0;j<n-1-i;j++)
 {
 if (array[j]> array[j+1])
 {
 swap=array[j];
 array[j]=array[j+1];
 array[j+1]=swap;
}
}
}
std::cout<<"smallest and largets"<<array[0]<<std::endl<<array[n-1]<<std::endl;
return 0;
}

/*Fibonacci series*//*Fibonacci series*//*Fibonacci series*//*Fibonacci series*//*Fibonacci series*//*Fibonacci series*//*Fibonacci series*//*Fibonacci series*//*Fibonacci series*/
int fibo(int number)
{
std::cout<<"series"<<"\t";
int number1=0;
int number2=1;
std::cout<<number1<<"\t"<<number2<<"\t";
int number3;
for(int i=2;i<number;i++)     
{
number3=number1+number2;
number1=number2;
number2=number3;

std::cout<<number3<<"\t";
}
return 0;
 }

/*Multiplication of number*//*Multiplication of number*//*Multiplication of number*//*Multiplication of number*//*Multiplication of number*//*Multiplication of number*/

int multiplication(int enter,int range)
{
std::cout<<"multiplication till range"<<"\t";
for(int i=1;i<range+1;i++)     
{
std::cout<<"\n"<<enter<<" * "<<i<<" = "<<enter*i;
}
return 0;
}

/*AnD gate and all gates*//*AnD gate and all gates*//*AnD gate and all gates*//*AnD gate and all gates*//*AnD gate and all gates*//*AnD gate and all gates*//*AnD gate and all gates*/
int andgate(int range,int x,int y ,int z)
{
if(x*y*z==1)
std::cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<1;
else
std::cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<0;
 return 0;
}


int orgate(int range,int x,int y,int z)
{
 if(x||y||z==1)
std::cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<1;
else
std::cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<0;
return 0;
}

int norgate(int range,int x,int y,int z)
{
if(x==0&&y==0&&z==0)
std::cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<1;
else
std::cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<0;
return 0;
}



int main()
{
 int enter;

std::cout<<"COMPUTER SCIENCE EXCERCISE 1"<<std::endl;

std::cout<<"Enter your choices"<<std::endl<<"1 Compute Area of circle and circumference"<<std::endl<<"2 Min and max of the table"<<std::endl<<"3 fibonacci series"<<std::endl<<"4 Multiplication of user chouce number"<<std::endl<<"5 Compute table of gate"<<std::endl;

std::cin>>enter;

switch(enter)
{
case 1:
float radius;
std::cout<<"Enter radius: "<<std::endl;
std::cin>>radius;
std::cout<< "area and circumfernve of circle"<<area(radius)<<std::endl<<circum(radius)<<std::endl;
break;

/* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*/

case 2:
{
int n;
std::cout<<"enter the numbers of element u want to put in lis"<<std::endl;
std::cin>>n;
int array[n];    
std::cout<<"enter the elements:"<<std::endl;
for (int z = 0; z < n; z++) 
{
std::cin >> array[z];
}
std::cout<< "Largest in given array is "<<maximum(array,n)<<std::endl; 
std::cout<< "sammlest in given array is "<<minimum(array,n)<<std::endl;
maxmin(array,n);
}
break;
/* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*/
case 3:
{
int range;    
std::cout<<"Enter the number of elements you want to use: ";    
std::cin>>range;
fibo(range); 
}
 break;
/* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*/
case 4:
{
int number,number2;    
std::cout<<"Enter the number  you want to use: ";    
std::cin>>number;
std::cout<<"Enter the last point  you want to use: ";    
std::cin>>number2;
multiplication(number,number2);
}
break ;

/* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*//* new case begin*/

case 5:
{
int enter,x,y,z;
std::cout<<"enter for following"<<std::endl<<"1 for AND"<<std::endl<<"2 for OR"<<std::endl<<"3 for NOR"<<std::endl;
std::cin>>enter;
std::cout<<"X\tY\tZ\tOUT";

switch(enter)
{
case 1:
for(x=0;x<=1;x++)
for(y=0;y<=1;y++)
for(z=0;z<=1;z++)
{
andgate(enter,x,y,z);
}
break;
case 2:
for(x=0;x<=1;x++)
for(y=0;y<=1;y++)
for(z=0;z<=1;z++)
{
 orgate(enter,x,y,z);
}
break;
case 3:
 for(x=0;x<=1;x++)
 for(y=0;y<=1;y++)
 for(z=0;z<=1;z++)
{
 norgate(enter,x,y,z);
}
break;

default:
std::cout<<"enter valid numberss";
break;
}
}
default:
std::cout<<"enter valid number";
break;
}
return 0;
}

#include<iostream>
using namespace std;
 int main()    
{    
int n,sum=0,m;    
/*printf("Enter a number:");    
scanf("%d",&n);  */  
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
cout<<sum;    
return 0;  
}   
/*int main()
{  int p=5;
   int *c=0;
   int a[4]={4,6};
   int *k=&a[0];
   c=&p;
    std::cout<<"hello "<<endl;
    std::cout<<p<<endl;
        std::cout<<c<<endl;
        std::cout<<&p<<endl;
        std::cout<<*c<<endl;
        std::cout<<a[0]<<endl;
        std::cout<<a[1]<<endl;
        cout<<a[2]<<endl;
     std::cout<<&a[0]<<endl;
  std::cout<<&a[2]<<endl;
 std::cout<<&a[1]<<endl;
         std::cout<<&k<<endl;

 











    return 0;
}

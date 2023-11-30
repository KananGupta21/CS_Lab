#include<iostream>
int main()
{
    long int i,c,d,tc;
    for(i=1;i<=5;i++)
    {
    std::cout<<"enter cost of an item";
    std::cin>>c;
    std::cout<<"\n discount of 40% is applied";
    d=c*40/100;
    std::cout<<"\ndiscount= "<<d;
    tc=c-d;
    std::cout<<"\ntotal cost after discount= "<<tc<<"\n";
    }
    return 0;
}
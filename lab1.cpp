#include<stdio.h>
#include<iostream>
using namespace std;
class troad
{
public:
int length;
int width;
};
int main()
{
troad road;
road.width=3;
std::cout<<"road.width = "<<road.width<<std::endl;
return 0;
}
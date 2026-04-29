#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) 

{
cout<<"long:"<<sizeof(long)<<endl;
cout<<"int:"<<sizeof(int)<<endl;
cout<<"char:"<<sizeof(char)<<endl;
cout<<"bool:"<<sizeof(bool)<<endl;
cout<<"float:"<<sizeof(float)<<endl;
cout<<"double:"<<sizeof(double)<<endl;
int a=5;
cout<<&a<<endl;
cout<<a<<endl;
cout<<*(&a)<<endl;
cout<<sizeof(long*)<<endl;
cout<<sizeof(int*)<<endl;
cout<<sizeof(char*)<<endl;
cout<<sizeof(bool*)<<endl;
cout<<sizeof(float*)<<endl;
cout<<sizeof(double*)<<endl;
int* direccion;
cout<<direccion <<endl;
cout<<&direccion <<endl;
cout<<*direccion <<endl;
return 0;
}
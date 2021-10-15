#include<iostream>
using namespace std;
int main()
{
    int var_x=5, var_y=10,var_z=15;
    int* arr[]={&var_x,&var_y,&var_z};
    cout<<arr[1];
    return 0;

}

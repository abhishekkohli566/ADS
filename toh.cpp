#include <iostream>
using namespace std;
void towerOfHanoi(int n , char beg, char aux, char end)
{
    if(n==1)
    {
        cout<<"Move Disk 1 from "<<beg<<"to "<< end <<endl;
        return;
    }
    towerOfHanoi(n-1,beg,end,aux);
    
    cout<<"Move disk "<< "From" << beg <<"to"<<endl;
    towerOfHanoi(n-1,aux,beg,end);
}
int main(){
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
towerOfHanoi(n,'A','B','C');
return 0;

}
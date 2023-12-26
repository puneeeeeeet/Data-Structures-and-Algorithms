#include <iostream>
using namespace std;

int main()
{   
    int n =6;
    int arrayy[6]={1,1,1,0,1,0};
    
    // printing array
    for(int i=0;i<n;i++){
        cout<<arrayy[i]<<" ";
    }cout<<endl;
    
    int j=-1;
    int temp;
    // swaping the numbers if indexed number is less than 1
    for(int i=0;i<n;i++){
        if(arrayy[i]<1){
               j++;
               temp= arrayy[i];
               arrayy[i]=arrayy[j];
               arrayy[j]=temp;
            }
        }
    //printing the sorted array 
         for(int i=0;i<n;i++){
        cout<<arrayy[i]<<' ';
        }
    
    return 0;
}
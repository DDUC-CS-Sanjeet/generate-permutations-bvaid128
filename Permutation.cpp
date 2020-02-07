#include<iostream>
using namespace std;

int permutation(char array[],int beg,int end)
{
    if(beg==end)
    {
        cout<<array<<endl;
    }
    else
    {
        for(int i=beg;i<=end;i++)
        {
            swap(array[beg],array[i]);
            permutation(array,beg+1,end);
            swap(array[beg],array[i]);
        }     
        
    }
    
    

}

int main()
{
  
    int num;
    char alpha='a';
    cout<<"Enter number of characters";
    cin>>num;
    char* arr;
    arr=new char[num+1];
    arr[num]='\0';
    for(int i=0;i<num;i++,alpha++)
    arr[i]=alpha; 
    permutation(arr,0,num-1);
    return 0;
    
}
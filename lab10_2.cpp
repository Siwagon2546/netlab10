#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int x,int y)
{
    string O = "O";
    if (x>0 and y>0){
    for(int i=1;i<y;i++)
    {
        O+="O";
    }
    for(int j=0;j<x;j++)
    {
        cout<<O;
        cout<<"\n";
    }
    
    }
    else{
    cout<<"Invalid input";
    }
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

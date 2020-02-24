#include <iostream>
using namespace std;
void burbuja(int n)
{	
	int i,j,temp;
	int vec[n];		
	for (i=0;i<n;i++)
	{
		cout<<"Introduzca los numeros: \n"; 
		cin>>vec[i];
	}
	
	for (i=1;i<n;i++)
	{
		for (j=0;j<(n-1);j++)
		{
			if (vec[j]>vec[j+1])
			{
				temp=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=temp;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		cout<<vec[i]<<"  ";
	}
}

int main()
{
	int n;	
	cout<<"Ingrese el numero de valores: \n"; 
	cin>>n;	
	burbuja(n);	
}

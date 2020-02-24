#include <iostream>

using namespace std;

void insercion(){

int i,n,temp, v[100], p;
	

cout<<"Ingrese longitud de vector: "; cin>>n;	
cout<<"\t\t\t"<<endl;	

cout<<"Ingrese numero: " <<endl;
for (i=0; i<n; i++){
cout<<"["<<i<<"]"<<"=";	
cin>>v[i];
}	
for (i=0; i<n; i++){
p=i;
temp=v[i];


while ((p>0)&&(v[p-1]>temp)){ 
v[p]=v[p-1];
p--;

}
v[p]=temp;
}
cout<<"\t\t\t"<<endl;
cout<<" El ORDEN ES:  "; 
for (i=0; i<n; i++){   
cout<<v[i]<<"  ";
}
}

int main(){


	insercion();	
}


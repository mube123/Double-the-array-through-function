#include<iostream>
using namespace std;
int* doubleTheArray(int ptr[], int size);
int main()
{
	int s;
	cout<<"Enter Size of array: ";
	cin>>s;
	int* p=new int[s];
	for(int i=0;i<s;i++)
	{
		cout<<"Enter "<<i+1<<"Element: ";
		cin>>p[i];
	}
	int* newArray=doubleTheArray(p,s);
	for(int i=0; i<s*2; i++)
	{
		cout<<"Content of "<<i+1<<" Element: "<< newArray[i]<<endl;
	}
	delete[] p;
	p=0;
	delete[] newArray;
	newArray=0;
	system("pause");
	return 0;
}
int* doubleTheArray(int ptr[], int size)
{
	int* newArray= new int[size*2];
	for(int i=0;i<size;i++)
	{
		newArray[i]=ptr[i];
	}
	for(int i=size; i<size*2; i++)
	{
		newArray[i]=0;
	}
	
	return newArray;
}

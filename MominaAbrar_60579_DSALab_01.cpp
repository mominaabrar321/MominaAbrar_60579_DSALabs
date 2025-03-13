#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
int size=4;
int value;
	//cout<<"Enter 5 numbers for an array: ";
	//for(int i=0;i<size;i++)
	//{
	//	cin>>value;
	//}
	cout<<"Enter a number to add in the last: ";
	cin>>value;
	for(int i=0;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[4]=value;
	size++;
	cout<<"Updated Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"";
	}
}
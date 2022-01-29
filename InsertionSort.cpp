#include <iostream>

using namespace std;


void display(int *array, int sizeArray){
	for(int i=0; i<sizeArray; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void insertionSort(int *array, int sizeArray){
	int key,i,j;
	for(i=1; i<sizeArray; i++){
		key = array[i]; // take value
		j = i;
		while(j>0 && array[j-1]>key){
			array[j] = array[j-1];
			j--;
		}
		array[j] = key; // insert in right place
	}
}
 
 main(){
	int n,i;
	cout<<"Enter the number of element: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:"<<endl;
	
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Array before Shorting: ";
	display(arr,n);
	
	insertionSort(arr,n);
	
	cout<<"Array after Shorting: ";
	display(arr,n);
	
	return 0;
}

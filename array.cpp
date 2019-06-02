#include <iostream>
using namespace std;
int main(){
	int arr2[3][4]={{0, 1, 2, 3},
{4, 5, 6, 7},
{8, 9,10,11}};
cout << arr2<<endl;
cout << &arr2[0][0]<<endl;
for(int i=0;i<3;i++){
cout << arr2+i << " ";
cout << *(*(arr2+i)) <<" ";
cout << arr2[i] <<endl;
cout<<"-------------"<<endl;
int *ptr2=&arr2[1][1];
cout << ptr2<< endl;
cout << *ptr2<< endl;
cout << ptr2+5 << endl;
cout << *(ptr2+5) << endl;
}
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void twoDArray(int (*ptr)[3]){
for (int i = 0; i < 3; ++i)
{
	for (int j = 0; j < 3; ++j)
	{
	
		cout<<""<<*((*(ptr+i))+j)<<" ";
	}
	cout<<endl;
}
}
int main()
{	
	int matrix[3][3]={
	{11,12,13},
	{21,22,23},
	{31,32,33}
	};
	string test = "aditya";
	int z = sizeof(test)/sizeof(test[0]);
	string ztest[z];
	for(int x:test){
		ztest[x]=test[x];
	}
	// twoDArray(matrix);
	return 0;
}
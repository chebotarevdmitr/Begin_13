#include <iostream>

using namespace std;

int main(int argc, char** argv) { 
    printf("Reversing number");	
  int number, reversed_number=0 ;	 
	cout<<"Enter number " ;
	cin >>number;
	while(number!=0) {
	reversed_number  *= 10;  // => reversed_number*10; 	
	reversed_number += number % 10;
	number/=10;	
    }
	cout<<" Reversed = "<<reversed_number;
	system("pause>0");
}
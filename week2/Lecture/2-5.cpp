#include <iostream>
using namespace std;

int main(){
	int count = 1, sum = 0;
	do {
		sum += count;
		count++;
	} while (count <= 10);
	return 0;
}
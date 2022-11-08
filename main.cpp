#include <iostream>
#include <cstdint>

using namespace std;

#define NPRIMES 8
int primes[NPRIMES] = {2, 3, 5, 7, 11, 13, 17, 19};

int main(int argc, char **argv)
{
	int64_t res = 1;
	int target = 20;
	for(int i = 0; i < NPRIMES; i++){
		int p = primes[i];
		int prod = p;
		int prevprod = 1;
		while(prod <= target){
			prevprod = prod;
			prod*=p;			
		} 
		res *= prevprod;
	}
	
	cout << res << endl;
	
    return 0;
}

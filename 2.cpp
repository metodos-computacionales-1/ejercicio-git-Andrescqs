#include <iostream>
#include <cmath>

bool tri(int a, int b, int c){
	return(a*a + b*b == c*c);
	}
int main(){
	std::cout <<"Para(3,4,5): " << tri(3,4,5) << ", Para(3,4,6):  " << tri(3,4,6) << std::endl;

return 0;
}


#include <iostream>
#include <cmath>

string tri(int a, int b, int c){
	if(a*a + b*b == c*c){return "Verdad"}
	else if(c*c - a*a == b*b){return "Verdad"}
	else if(c*c - b*b == a*a){return "Verdad"}
	else(){return "Falso"}
	}

int main(){
	std::cout <<"Para(3,4,5): " << tri(3,4,5) << ", Para(3,4,6):  " << tri(3,4,6) << std::endl;

return 0;
}


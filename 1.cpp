#include <iostream>
#include <cmath>

int main(){
	float diam(float r){
		return 2*r;
		}
	float peri(float r){
		return 2*3.1415926*r;
		};
	float area(float r){
		return 3.1415926*r*r;
		}
	std::cout << diam(2) << " " << peri(2) << " " << area(2) << std::endl;
	
return 0;
}

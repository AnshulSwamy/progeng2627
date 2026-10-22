#include <iostream>

int main(){
	/*int n;
	int counter = 0;

	std::cin >> n; 

	while (counter < n){
		std::cout << "hello" << std::endl;
		counter += 1;
	}*/

	/*double n, x;
	int res = 0;
	int counter = 0;
	
	std::cin >> x >> n;

	while (counter < n){
		res += x;
		counter += 1;
	}

	std::cout << x << "*" << n << " = " << res << std::endl;*/

	/*std::string n;

	std::cin >> n;

	while (n != "STOP" && n != "stop" && n != "Stop" ){
		std::cout << n << std::endl;
		std::cin >> n;
	}*/

	//Sum so far and Avg so far
	
	/*int n;
	int i = 0;
	double sum = 0;

	std::cout << "enter a num" << std::endl;
	std::cin >> n;

	while (n != 0){
		i += 1;
		sum = (sum + n) / i;
		std::cout << "Running avg: " << sum << std::endl;
		std::cout << "enter a num" << std::endl;
		std::cin >> n;
	}*/

	//Div as repeated subtraction

	int n, div;
	int quotient = 0, rem = 0;

	std::cin >> n >> div;

	while (n >= div){
		n -= div;
		quotient += 1;
	}

	rem = n;

	std::cout << "quotient: " << quotient << std::endl;
	std::cout << "rem: " << rem << std::endl;
}

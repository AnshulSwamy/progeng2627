#include <iostream>

int main(){

	/*double len_in, len_out;
	std::string unit_in, unit_out;

	const double mile_to_km = 1.609;
	std::cin >> len_in >> unit_in;

	if (unit_in == "km"){
		unit_out = "mile";
		len_out = len_in / mile_to_km;
		std::cout << len_out << " " << unit_out << std::endl;
	}
	else if (unit_in == "mile") { 
		unit_out = "km";
		len_out = len_in * mile_to_km;
		std::cout << len_out << " " << unit_out << std::endl;
	}
	else {
		std::cout << "error" << std::endl;
	}*/
	
	double len_in, len_out, convTrue;
	std::string unit_in, unit_out;

	const double mile_to_km = 1.609;
	std::cin >> len_in >> unit_in;
	
	convTrue = (unit_in == "F" || unit_in == "C" || (unit_in == "f") || (unit_in == "c")) ? 1 : 0;
	
	if (convTrue){
		if (unit_in == "F" || unit_in == "f"){
			unit_out = "C";
			len_out = (len_in - 32) * 5/9.0;
		}
		else { 
			unit_out = "F";
			len_out = (len_in * 9/5.0) + 32;
		}
		std::cout << len_out << " " << unit_out << std::endl;
	}

	else {
		std::cout << "unit not recognised" << std::endl;
	}

}

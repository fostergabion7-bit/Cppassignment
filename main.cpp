 #include <iostream>
#include <iomanip>
#include <string>

int main() {
	std::string name;
	int days = 0;
	double costPerDay = 0.0;

	std::cout << "Enter customer name: ";
	std::getline(std::cin, name);

	std::cout << "Enter number of days stayed: ";
	while (!(std::cin >> days) || days < 0) {
		std::cout << "Please enter a valid non-negative integer for days: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Enter accommodation cost per day: ";
	while (!(std::cin >> costPerDay) || costPerDay < 0.0) {
		std::cout << "Please enter a valid non-negative number for cost: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	double accommodationCost = days * costPerDay;
	double serviceCharge = 0.10 * accommodationCost; // 10%
	double finalAmount = accommodationCost + serviceCharge;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\n========== Hotel Bill ==========" << std::endl;
	std::cout << std::left << std::setw(25) << "Customer name:" << name << std::endl;
	std::cout << std::left << std::setw(25) << "Number of days stayed:" << days << std::endl;
	std::cout << std::left << std::setw(25) << "Accommodation cost:" << "$" << accommodationCost << std::endl;
	std::cout << std::left << std::setw(25) << "Service charge (10%):" << "$" << serviceCharge << std::endl;
	std::cout << std::left << std::setw(25) << "Final amount to be paid:" << "$" << finalAmount << std::endl;
	std::cout << "===============================\n";

	return 0;
}

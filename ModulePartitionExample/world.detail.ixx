export module world : detail;
import <cstdlib>;
import <iostream>;

struct Random { // Not exported - used internally
	void SaySomething() const {
		std::cout << "Bla bla: " << rand() << std::endl;
	}
};


module world : hello;
import : detail;
import <iostream>;

namespace world {
	void SayHello() {
		std::cout << "Hello" << std::endl;
	}

	void SayHi() {
		std::cout << "Hi" << std::endl;
	}

	void SaySomething() {
		Random{}.SaySomething();
	}
}
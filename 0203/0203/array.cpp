#include <iostream>
int main() {
	double nums[3] = { 1.5, 2.5, 3.5 };

	std::string fruit[2][3] = {
		{ "apple", "banana", "orange"},
		{ "apple2", "banana2", "orange2" }
	};

	// fruit[1] = { "apple2", "banana2", "orange2" }

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << fruit[i][j] << std::endl;
		}
	}

	for (auto& f : fruit) {
		for (std::string f2 : f) {
			std::cout << f2 << std::endl;
		}
	}

	std::cout << fruit << std::endl;

	std::string friends[] = { "È«±æµ¿", "¼ºÃáÇâ", "ÄÚµù¿Â" };
	/*std::cout << friends[0] << std::endl;
	std::cout << friends[1] << std::endl;
	std::cout << friends[2] << std::endl;*/

	for (int i = 0; i < 3; i++) {
		std::cout << friends[i] << std::endl;
	}

	// sizeof() : sizeof ¾È¿¡ º¯¼ö or typeÀ» ÀÎÀÚ·Î ³Ñ°ÜÁÜ. Å©±â¸¦ byte´ÜÀ§·Î ±¸ÇÔ.
	// sizeof(friends)/sizeof(friends[0])
	for (int i = 0; i < sizeof(friends) / sizeof(std::string); i++) {
		std::cout << friends[i] << std::endl;
	}

	for (std::string f : friends) {
		// f = "È«±æµ¿"
		// f = "¼ºÃáÇâ" ·Î ¹Ù²ñ
		// f = "ÄÚµù¿Â" ·Î ¹Ù²ñ
		std::cout << f << std::endl;
	}


	// friends = { "È«±æµ¿", "¼ºÃáÇâ" }
	return 0;
}
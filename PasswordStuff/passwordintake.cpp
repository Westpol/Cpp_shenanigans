    #include <iostream>
    #include "SHA256.cpp"
    using namespace std;

int main() {
    string passIn;
    while(true){
        std::cin >> passIn;
        SHA256 sha;
		sha.update(passIn);
		std::array<uint8_t, 32> digest = sha.digest();

		std::cout << SHA256::toString(digest) << std::endl;
        if(SHA256::toString(digest) == "0747f7aecd1572460c3c90c0c75cbdde641b1039190ade8538b0ed0c559070df"){
            break;
        }
    }
    return 0;
} 
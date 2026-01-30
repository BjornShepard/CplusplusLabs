#include<iostream>
#include<coding.h>

int main() {
    std::string s;
    while(std::cin >> s){
        for(unsigned char c : s)  {
            std::cout << decode(c) << '\n';
        }
    }
}

// ./decode < encoded.enc > encoded.enc.dec
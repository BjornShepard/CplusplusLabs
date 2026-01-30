#include<iostream>
#include<coding.h>

int main() {
    std::string s;
    while(std::cin >> s){
        for(unsigned char c : s)  {
            std::cout << encode(c) << '\n';
        }
    }
}

// ./encode < text.txt > encoded.enc
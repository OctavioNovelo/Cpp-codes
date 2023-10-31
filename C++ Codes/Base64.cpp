#include <bits/stdc++.h>
#include <string>
#include <vector>

std::string base64_decode(const std::string &input) {
    // Caracteres Base64 válidos
    const std::string base64_chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    std::vector<uint8_t> decoded_data;
    int in_len = input.length();
    int i = 0;

    while (i < in_len) {
        uint32_t sextet_a = (i < in_len) ? base64_chars.find(input[i++]) : 0;
        uint32_t sextet_b = (i < in_len) ? base64_chars.find(input[i++]) : 0;
        uint32_t sextet_c = (i < in_len) ? base64_chars.find(input[i++]) : 0;
        uint32_t sextet_d = (i < in_len) ? base64_chars.find(input[i++]) : 0;

        uint32_t triple = (sextet_a << 18) + (sextet_b << 12) + (sextet_c << 6) + sextet_d;

        decoded_data.push_back((triple >> 16) & 0xFF);
        if (sextet_c != 64) {
            decoded_data.push_back((triple >> 8) & 0xFF);
        }
        if (sextet_d != 64) {
            decoded_data.push_back(triple & 0xFF);
        }
    }

    return std::string(decoded_data.begin(), decoded_data.end());
}

int main() {
    std::string encodedText = "SGVsbG8gV29ybGQ=";
    std::string decodedText = base64_decode(encodedText);

    std::cout << "Texto decodificado: " << decodedText << std::endl;

    return 0;
}

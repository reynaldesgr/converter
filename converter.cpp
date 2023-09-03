#include <iostream>
#include <bitset>
#include <iomanip>


using namespace std;


// decimal => binary

void dec_to_bin(int dec)
{

    bitset<sizeof(dec) * 8> binaire(dec);

    cout << "Binary number : " << binaire << endl;
    cout << "Decimal number : " << dec << endl;
    
    return;
}

// decimal => hexa

void dec_to_hex(int dec)
{
    cout << "Hexadecimal number : " << hex << dec << endl;

    return;
}


// bin => hexa

void bin_to_hex(const string& bin)
{
    // convert the binary string to dec
    int dec = stoi(bin, nullptr, 2);

    cout << "Hexadecimal number : " << hex << dec << endl;

    return;
}



// hexa => bin

void hex_to_bin(const string& hex)
{
    int dec = stoi(hex, nullptr, 16);
    bitset<32> binaire(dec);

    cout << "Binary number : " << binaire << endl;

    return;
}

int main()
{
    int dec = 4;

    dec_to_bin(4);

    dec_to_hex(10);

    bin_to_hex("1011");

    hex_to_bin("A");

    return 0;
}
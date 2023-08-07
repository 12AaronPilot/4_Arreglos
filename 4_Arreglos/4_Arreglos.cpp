#include <iostream>
#include <Windows.h>
#include <iomanip>

int main()
{
    //Decirle a windows que queremos que la consola use UTF8
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "El niño puño 👊 y el pingüino 🐧 y un hoyo negro 🌌\n";
    std::cout << "  Esto es una arroba \x40" << "\n";
    std::cout << "  Esto es un kanji \xE9\x9B\xBB" << "\n";
    std::cout << "  Esro es un emoji \xF0\x9F\x92\x80" << "\n";

    //imprimir un arreglo de emojis
    std::cout << "Emojis del F0F9200 al F09F92FF\n";
    char emojibytes[5] = "\xF0\x9F\x92\x00";
    std::cout << emojibytes << "\n";

    //Escribir los bytes de la cadena
    for (char c = 0; c < 5; c++)
    {
        std::cout << 
            std::hex << 
            std::setw(2) <<
            std::setfill('0') <<
            static_cast<int>( static_cast<unsigned char > (emojibytes[c]));
    }
    std::cout << std::endl;

    //Imprimir valores exadecimales del emoji
    for (int i = 0; i <= 0xF; i++) //oxF es 16
    {
        for (int j = 0; j <= 0xF; j++)
        
            for (int c = 0; c < 5; c++)
            {
                std::cout << 
                    std::hex << 
                    std::setw(2) << 
                    std::setfill('0') << static_cast<int>(static_cast<unsigned char> (emojibytes[c]));
            }
          std::cout << emojibytes << " ";
          emojibytes[4] + 1;
        }
        std::cout << "\n";
    }
//Imprimir emoji
for (int i = 0; i <= 0xF; i++) //oxF es 16
{
    for (int j = 0; j <= 0xF; j++)
    {
        std::cout << emojibytes << " ";
        emojibytes[4] + 1
    }
std::cout << "\n";
}
    }
    return 0;
}

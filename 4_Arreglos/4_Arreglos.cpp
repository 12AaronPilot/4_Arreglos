#include <iostream>
#include <Windows.h>
#include <iomanip>
#include "Array.h"
#include "GenericArray.h"

int main()
{
    //decirle  windows que queremos que la consola use UTF-8
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "El niño puño 👊 y el pingüino 🐧 \n";
    std::cout << "Esto es una arroba \x40" << "\n";
    std::cout << "Esto es un kanji \xE9\x9B\xBB" << "\n";
    std::cout << "Esto es una emoji \xF0\x9F\x92\x80" << "\n";

    /*
    //imprimir un arreglo de emojis
    std::cout << "Emojis del F09F9200 al F09F92FF\n";
    char emojibytes[5] = "\xF0\x9F\x92\x00";
    std::cout << emojibytes << "\n";

    //escribir los bytes de la cadena
    for (int c = 0; c < 5; c++)
    {
        std::cout <<
            std::hex <<
            std::setw(2) <<
            std::setfill('0') <<
            static_cast<int>(static_cast<unsigned char>(emojibytes[c]));
    }
    std::cout << std::endl;

    //imprimir valores exadecimales del emoji
    for (int i = 0; i <= 0xF; i++) //0xF es 16
    {
        for (int j = 0; j <= 0xF; j++)
        {
            for (int c = 0; c < 5; c++)
            {
                std::cout <<
                    std::hex <<
                    std::setw(2) <<
                    std::setfill('0') <<
                    static_cast<int>(static_cast<unsigned char>(emojibytes[c]));
            }
            std::cout << " ";
            emojibytes[3] += 1;
        }
        std::cout << "\n";
    }

    //imprimir emoji
    for (int i = 0; i <= 0xF; i++) //0xF es 16
    {
        for (int j = 0; j <= 0xF; j++)
        {
            std::cout << emojibytes << " ";
            emojibytes[3] += 1;
        }
        std::cout << "\n";
    }

    //Seccion: prueba de clase Array
    Array* arreglodegatos = new Array(9);

    std::cout << "size of uint 32" << sizeof(uint32) << "\n";
    puts("Arreglo de uint32");

    const char* gato = "\xf0\x9f\x90\x88";
    uint32 res;
    std::memcpy(&res, gato, 4);
    std::cout << "valor en bytes: " << res << "\n";

    for (int i = 0; i < arreglodegatos->Size(); i++)
    {
        std::cout << arreglodegatos->Get(i) << "\n";
    }
}*/

    GenericArray<int> *enteros = new GenericArray<int>(10);

    (*enteros)[0] = 12;
    (*enteros)[1] = 99;
    enteros->print
    return 0;
}
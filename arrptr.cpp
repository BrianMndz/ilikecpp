#include <iostream>
#include <array>

int main()
{
    const char *pstars[] { "Sirius", "Alpha Centauri", "Canis Majoris", "Betelgeuse", "Arcturus", "Rigel" };
    std::cout << "Pick a lucky star! Enter 1 and " << std::size(pstars) << ": ";
    
    size_t choice {};
    std::cin >> choice;

    if(choice >= 1 && choice <= std::size(pstars))
    {
        std::cout << "Your lucky star: " << pstars[choice - 1] << std::endl;
    }
    else
    {
        std::cout << "Sorry, you dont have star!" << std::endl;
    }
    

    return 0;
}
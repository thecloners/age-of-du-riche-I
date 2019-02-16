#include "Personnage/personnage.hpp"
#include "Personnage/personnage.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        Personnage test;
        window.clear();
        window.draw(test);
        window.display();
    }

    return 0;

}

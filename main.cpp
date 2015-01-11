#include <SFML/Graphics.hpp>
#include "Piece.h"
#include "Grille.h"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "test diamands");
    sf::CircleShape shape(100.f);
	Grille g;
	sf::Texture texture;
	texture.loadFromFile("Images/fond1.png");
	sf::Sprite sprite;
	sprite.setTexture(texture);

	window.setFramerateLimit(60);
    while (window.isOpen())
    {
	
		sf::Event event;
       while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	

		window.clear();
		window.draw(sprite);


		g.afficheGrille(&window);
		window.display();

    }

    return 0;
}

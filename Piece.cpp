#include "Piece.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>


Piece::Piece()
{
    m_posX=0;
	m_posY=0;
	m_forme=4;
}


 
Piece::Piece(sf::Texture texture, int posX,int posY)
{
    m_posX=posX;
	m_posY=posY;
	

	m_sprite.setTexture(texture);
	m_sprite.setPosition( m_posX, m_posY);	
}

sf::Sprite& Piece::GetSprite()
{
    return m_sprite;
}





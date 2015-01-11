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


 
Piece::Piece(int forme, int posX,int posY)
{
    m_posX=posX;
	m_posY=posY;
	m_forme=forme;
	
	switch (forme)
	{
		case 0: 
		{
			  m_cheminPiece = "Images/image1.png";
			  break;
		}
		case 1:
	    {
			  m_cheminPiece = "Images/image2.png";
			  break;
		}
		case 2:
	    {
			   m_cheminPiece = "Images/image3.png";
			  break;
		}
	   case 3:
	    {
			   m_cheminPiece = "Images/image4.png";
			  break;
		}
	}
	
	m_texture.loadFromFile(m_cheminPiece);
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition( m_posX, m_posY);	
}

sf::Sprite& Piece::GetSprite()
{
    return m_sprite;
}





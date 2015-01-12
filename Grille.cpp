#include "Grille.h"
#include "Piece.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>     
#include <time.h>  


Grille::Grille()
{
	grille.resize(GRILLE_X, std::vector<Piece>(GRILLE_Y));
	m_gameTexture[0].loadFromFile("Images/casque.png");
	m_gameTexture[1].loadFromFile("Images/darkvador.png");
	m_gameTexture[2].loadFromFile("Images/r2.png");
	m_gameTexture[3].loadFromFile("Images/yoda.png");
	int forme,posX,posY;
    for(posX = 0; posX < GRILLE_X; ++posX)
	{
        for(posY = 0; posY < GRILLE_Y; ++posY)
		{
			forme=newPiece();
           grille[posX][posY] = Piece(Grille::getTexture(forme),64*posX+200,posY*64+190);
		}
	}
}
 

int Grille::newPiece()
{
	int nbr=(int)(((double)rand() * (double)(4 - 0) / (double)RAND_MAX)) + 0;
	return nbr;
}

sf::Texture& Grille::getTexture(int type)
 {
   return m_gameTexture[type];
 }


void Grille::afficheGrille(sf::RenderWindow* window)
{ 
	for(int i = 0; i < GRILLE_X; ++i)
   {
        for(int j = 0; j < GRILLE_Y; ++j)
		{	
				window->draw(grille[i][j].GetSprite());	
		}
   }  
}

std::vector<std::vector<Piece>>&	Grille::getGrille()
{
	return grille;
}

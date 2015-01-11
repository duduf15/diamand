#include "Grille.h"
#include "Piece.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>     
#include <time.h>  


Grille::Grille()
{
	grille.resize(GRILLE_X, std::vector<Piece>(GRILLE_Y));
	int forme,posX,posY;
    for(posX = 0; posX < GRILLE_X; ++posX)
	{
        for(posY = 0; posY < GRILLE_Y; ++posY)
		{
			forme=newPiece();
            grille[posX][posY] = Piece(forme,64*posX+200,posY*64+190);
		}
	}
}
 

int Grille::newPiece()
{
	int nbr=(int)(((double)rand() * (double)(4 - 0) / (double)RAND_MAX)) + 0;
	return nbr;
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

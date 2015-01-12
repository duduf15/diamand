#ifndef GRILLE_H
#define GRILLE_H_H
 
#include "Piece.h"

const int GRILLE_X = 9;
const int GRILLE_Y = 8;
 
 
class Grille
{

private:
	std::vector<std::vector<Piece>> grille;
	sf::Texture  m_gameTexture[4];

public:

	sf::Texture& getTexture(int type);
	Grille									();
    int			newPiece();
	void		afficheGrille				(sf::RenderWindow* window);
    void		drawPiece					();
	std::vector<std::vector<Piece>>&	Grille::getGrille				();
};
 
#endif

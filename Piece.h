#ifndef PIECE_H
#define PIECE_H
#include <string>
#include <SFML/Graphics.hpp>
 
class Piece
{
 
private:
    
	std::string		m_cheminPiece; 
    int				m_forme; 
    int				m_posX; // Son ordonnée dans l'aire de jeu
    int				m_posY; // Son abscisse dans l'aire de jeu
	sf::Texture		m_texture;
	sf::Sprite		m_sprite;


public:

    Piece							();
    Piece::Piece(int forme, int posX,int posY);
	sf::Sprite&	Piece::GetSprite	();
	void		draw				(sf::RenderWindow* window);
};
 
#endif

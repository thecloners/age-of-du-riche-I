#ifndef PART_
#define PART_

#include <iostream>
#include <SFML/Graphics.hpp>

// On hérite de la classe Drawable qui nous permet de nous faire dessiner

class Partie : sf::Drawable 
{
  private:
    int mNbJoueur;
    int mTaillePlateau;
    int mNbTour; // Wtf les gars y'a pas de tours dans AOII
    void genereMap();
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    // Fonction qui est appellée quand on fait window.draw(partie)
    // En gros, RenderTarget s'utilise comme window. 
    // RenderStates je sais plus
  public:
    std::string nom;
    Partie(); // Le constructeur, (entre autre faut qu'il appelle genereMap)
    void sendEvent(sf::Event); // Cette fonction récupère les évènements du clavier
    void update();             // Cette fonction est appellée en continu. Elle gère tout les trucs
                               // Qui prennent du temps (e.g : flèches, personnages qui marchent, etc)
};
#endif

#ifndef MESSAGE_H
#define MESSAGE_H

#include "Background.hpp"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

#include <vector>

class Message
{
    private:
        Background background;
        std::string key;
        std::vector<std::string> vecStrings;


    public:
        Message();
        void updateKey(char x);
        void clearKey();
        void draw(sf::RenderWindow& w);
        bool correctKey();
};

#endif
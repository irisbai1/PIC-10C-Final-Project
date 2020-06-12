
//
//  main.cpp
//  Doodle Jump
//
//  Created by Iris Bai on 5/29/20.
//  Copyright © 2020 Iris Bai. All rights reserved.
//
//  This is the main code for my game of Doodle Jump.

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <time.h>
#include "constants.h"
#include "ResourcePath.hpp"

using namespace sf;

struct point
{ int x,y;};

int main(int, char const**)
{
    srand(time(0));
    
    RenderWindow app(VideoMode(FRAME_WIDTH,FRAME_HEIGHT), "Doodle Game!");
    app.setFramerateLimit(80);//controls speed of doodler
    
    Texture tpb,tbg,tpf,td;
    tpb.loadFromFile(resourcePath()+ "playbutton.PNG");
    tbg.loadFromFile(resourcePath()+ "background.png");
    tpf.loadFromFile(resourcePath()+ "myplatform.PNG");
    td.loadFromFile(resourcePath()+ "panda.png");
    
    Sprite sPlaybutton(tpb), sBackground(tbg), sPlat(tpf), sPers(td);
    
    point plat[20];
    
    // randomize platform appearance
    for (int i=0; i<10; i++) {
        plat[i].x=rand()%FRAME_WIDTH;
        plat[i].y=rand()%FRAME_HEIGHT;
    }
    
    int x=100, y=100, h=200;
    float dx = 0, dy=0;
    
    bool play = false;
    
    // Run app
    while (app.isOpen()) {
        Event e;
        while(app.pollEvent(e)) {
            if (e.type == Event::Closed) {
                app.close();
            }
            // Create working play button
            if (e.type == Event::MouseButtonPressed) {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(app);
                sf::Vector2f mousePositionFloat((float)mousePosition.x, (float)mousePosition.y);
                if (sPlaybutton.getGlobalBounds().contains(mousePositionFloat))
                {
                    play = true;
                }
            }
        }
        
        // make doodle respond to keyboard controls
        if(Keyboard::isKeyPressed(Keyboard::Right)) {x+=DOODLE_XMOVE;}
        if(Keyboard::isKeyPressed(Keyboard::Left)) {x-=DOODLE_XMOVE;}
        
        // make Doodler jump
        dy+= 0.2;
        y+=dy;
        if (y>500) {dy = -10;}
        
        // make Doodler bounce when it collides with platform
        for(int i=0; i<10; i++){
            if ((x+DOODLER_WIDTH>plat[i].x) && (x<plat[i].x+PLATFORM_WIDTH) && (y+DOODLER_HEIGHT>plat[i].y) && (y+DOODLER_HEIGHT<plat[i].y+PLATFORM_HEIGHT) && (dy>0)) {dy=-10;}
        }
        
        //scrolls up the screen when Doodler gets high enough and generates more platforms
        if(y<h) {
            for (int i=0; i<10; i++) {
                y=h;
                plat[i].y=plat[i].y-dy;
                if (plat[i].y>FRAME_HEIGHT) {
                    plat[i].y = 0;
                    plat[i].x = rand()%FRAME_WIDTH;
                }
            }
        }
        
        // allows Doodler to die
        if (sPers.getGlobalBounds().top+DOODLER_HEIGHT > FRAME_HEIGHT) {
            app.draw(sPlaybutton);
            play = false;
        }
        
        sPers.setPosition(x,y);
        app.draw(sBackground);

        if (!play) {
            app.draw(sPlaybutton);
            sPlaybutton.setPosition(75,200);
        }
        
        else {
            app.draw(sPers);
//            sPers.setPosition(200,400);
            
            for (int i=0;i<10; i++) {
                sPlat.setPosition(plat[i].x,plat[i].y);
                app.draw(sPlat);
            }
        }
        app.display();
        
    }


    return EXIT_SUCCESS;
}

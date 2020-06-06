
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <time.h>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"
#include "constants.h"

using namespace sf;

struct point
{ int x,y;};

int main(int, char const**)
{
    srand(time(0));
    
    RenderWindow app(VideoMode(400,533), "Doodle Game!");
    app.setFramerateLimit(80);//controls speed of doodler
    
    Texture t1,t2,t3;
    t1.loadFromFile(resourcePath()+ "background.png");
    t2.loadFromFile(resourcePath()+ "platform.png");
    t3.loadFromFile(resourcePath()+ "Doodler.png");
    
    Sprite sBackground(t1), sPlat(t2), sPers(t3);
    
    point plat[20];
    
    // randomize platform appearance
    for (int i=0; i<10; i++) {
        plat[i].x=rand()%400;
        plat[i].y=rand()%533;
    }
    
    int x=100, y=100, h=200;
    float dx = 0, dy=0;
    
    while (app.isOpen()) {
        Event e;
        while(app.pollEvent(e)) {
            if (e.type == Event::Closed) {
                app.close();
            }
        }
        
        if(Keyboard::isKeyPressed(Keyboard::Right)) {x+=3;}
        if(Keyboard::isKeyPressed(Keyboard::Left)) {x-=3;}
        
        // make Doodler jump
        dy+= 0.2;
        y+=dy;
        if (y>500) {dy = -10;}
        
        // make Doodler bounce when it collides with platform
        for(int i=0; i<10; i++){
            if ((x+50>plat[i].x) && (x+20<plat[i].x+69) && (y+70>plat[i].y) && (y+70<plat[i].y+14) && (dy>0)) {dy=-10;}
        }
        
        if(y<h) {
            for (int i=0; i<10; i++) {
                y=h;
                plat[i].y=plat[i].y-dy;
                if (plat[i].y>533) {
                    plat[i].y = 0;
                    plat[i].x = rand()%400;
                }
            }
        }
        
        sPers.setPosition(x,y);
        
        app.draw(sBackground);
        sBackground.setScale(FRAME_WIDTH,FRAME_HEIGHT);
        app.draw(sPers);
        
        for (int i=0;i<10; i++) {
            sPlat.setPosition(plat[i].x,plat[i].y);
            app.draw(sPlat);
        }
        app.display();
        
    }


    return EXIT_SUCCESS;
}

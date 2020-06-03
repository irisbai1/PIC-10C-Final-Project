
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

using namespace sf;

struct point
{ int x,y;};

int main(int, char const**)
{
    srand(time(0));
    
    RenderWindow app(VideoMode(400,533), "Doodle Game!");
    Texture t1,t2,t3;
    t1.loadFromFile(resourcePath()+ "background.png");
    t2.loadFromFile(resourcePath()+ "platform.png");
    t3.loadFromFile(resourcePath()+ "Doodler.png");
    
    Sprite sBackground(t1), sPlat(t2), sPers(t3);
    
    point plat[20];
    
    for (int i=0; i<10; i++) {
        plat[i].x=rand()%400;
        plat[i].y=rand()%533;
    }
    
    while (app.isOpen()) {
        Event e;
        while(app.pollEvent(e)) {
            if (e.type == Event::Closed) {
                app.close();
            }
        }
        
        app.draw(sBackground);
        app.draw(sPers);
        
        for (int i=0;i<10; i++) {
            sPlat.setPosition(plat[i].x,plat[i].y);
            app.draw(sPlat);
        }
        app.display();
        
    }


    return EXIT_SUCCESS;
}

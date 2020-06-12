# PIC-10C-Final-Project

## Doodle Jump
The purpose of this code is to replicate the game Doodle Jump. I decided to draw my own images to make the game my own.
This was coded using Xcode version 11.3.1 (11C504) and the SFML 2.5.1 library. 
### Video Demo
https://youtu.be/hqK14PxabOE

## Resources I Used (not comprehensive)
    https://www.sfml-dev.org/tutorials/2.5/start-osx.php
    https://www.youtube.com/watch?v=7Vf_vQIUk5Q
    https://www.sfml-dev.org/tutorials/2.5/graphics-sprite.php
    https://markdown-guide.readthedocs.io/en/latest/basics.html
    https://stackoverflow.com/questions/23530360/how-do-you-make-a-clickable-sprite-in-sfml/23578981
    https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Rect.php#abd3d3a2d0ad211ef0082bd0aa1a5c0e3
    
## How to Play
1. Run application.
2. Click on Play button.
3. Use left and right arrow keys to move the doodle and have it jump on platforms.
4. Doodle will die and game will end if it falls to the bottom of the window.

## Timeline
### 5/9/20 - 20 min
+ found quick tutorial to code doodle jump online (see youtube link in Resources I Used section)
  
### 5/21/20 - 2 hrs
+ Started actual project, but I'm having issues connecting and pushing to Github. I think its because I'm trying to use both the Qt interface and the terminal. The error has something to do with creating an index.lock file.

### 5/29/20 - 3.5 hrs
+ I did a lot of research on how to use Qt to make this, but couldn't find anything really clear, so I decided to just code this on Xcode using SFML for MacOS.
<br>    - Configuring SFML for my Mac took me 3 hours because there were so many errors.
    
### 6/2/20 - 2 hrs
+ There was another error when I first tried to compile my SFML App. Fixed it by googling the error.
+ Started following the tutorial for the code, but the sizes of my images don't match the ones he has.

### 6/5/20 - 2 hrs
+ Fixed the sizes of the images by using the images from the tutorial instead of my own. I think it's because my images originally were the wrong dimensions.
+ Doodler can now be controlled by keyboard and rebound when it collides with platforms.
<br>    -  My doodler originally jumped way too fast, but I realized I didn't set the Frameratelimit.
+ Also figuring out how to use markdown

### 6/7/20 - 3 hrs
+ Drew a play button and platform cushion (playbutton.PNG and myPlatform.PNG) on my iPad to customize game a little more. Didn't implement the new images yet.

### 6/9/20 - 4 hrs
+ Drew a panda to replace Doodler. Switched platform and doodler to use the images(cushion and panda) I drew. Also reuploaded my previous drawings to have transparent background and correct size.
+ I'm trying to implement the play button by making a clickable sprite. I am trying to make it so that the play button appears when bool play = false and the game appears when play = true. However, when I try to compile the code, my app doesn't open.
<br>    - Succeeded in implementing the play button. I just deleted my previous code that didn't work and tried a few more times.
  
### 6/10/20 - 1 hr
+ Implemented an "end of game" by making the doodler die if it falls to the bottom of the screen.
<br>    - Took a long time to figure out because I didn't realize SFML has its (0,0) origin at the top left and numbers increase to the bottom right.

### 6/11/20 - 0.5 hrs
+ Added constants.h to make the code more readable

### 6/12/20 - 0.5 hrs
+ Recorded a screen recording of my project.

## What I learned
+ I learned how to install software on my own and how to fix issues that come up when installing new things onto my computer.
+ Following the tutorial step by step allowed me to figure out how each part of my code works and what each line does. I don't think I would have been able to come up with it myself with my limited coding knowledge, but I learned a lot from figuring out what each line of code is used for.
+ I learned SFML and how Sprites work. I think SFML is pretty useful in making apps because if allows me to easily use images, sounds, and other files in my projects.
+ The main connection that I can make between my code is this class is creating graphics with my code and being able to connect events such as a mouse click with my application. SFML is similar but not exactly the same as Qt, as SFML is just a library and not an entire GUI.
+ This project also gave me a lot of practice using git and markdown.

## Ways to Improve
+ Whenever the Doodle dies and the Play Button appears again, it seems that the actual game is still running in the background. Because of this, whenever I try to press "Play" again, the game doesn't regenerate platforms and the Doodle is still jumping in the same place that it died. If I move the section of my code that randomizes platform appearance anywhere else in my code, the game doesn't work properly. If I can figure out how to make the game actually end and restart, it would improve the game.
+ I think I should change the code to make a platform class and a doodle class with member functions to control thier actions, but I didn't really have the time to fully figure it out. It would just make the code a little easier to read. The tutorial I followed just hard coded everything and only had the most basic parts of the game.
+ It would be fun to add sounds when the doodle jumps and when the doodle dies.
+ I didn't have time to draw it, but adding a Game Over screen and a Play Again button would make the game more complete.

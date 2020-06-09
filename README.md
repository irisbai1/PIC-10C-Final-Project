# PIC-10C-Final-Project

## Doodle Jump
The purpose of this code is to replicate the game Doodle Jump. I decided to draw my own images to make the game my own.

## Resources I Used (not comprehensive)
    https://www.youtube.com/watch?v=7Vf_vQIUk5Q
    https://www.sfml-dev.org/tutorials/2.5/graphics-sprite.php
    https://markdown-guide.readthedocs.io/en/latest/basics.html
    https://stackoverflow.com/questions/23530360/how-do-you-make-a-clickable-sprite-in-sfml/23578981
    
## How to Play
1. Run application.
2. Click on Play button.
3. Use left and right arrow keys to move the doodle and have it jump on platforms.

## Timeline
### 5/9/20 - 20 min
+ found quick tutorial to code doodle jump online
  
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
  

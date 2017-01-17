/* 
* File:   main.c
* Author: James Phillips
* Copyright (C) James Phillips <james@jamesphillipsuk.com> 2014, 2017
* This application is released under the GNU GPL v2 and has NO Warranty to the extent permissible by law.
* The GNU General Public License version 2.0 can be found at: http://www.gnu.org/licenses/gpl-2.0.html
*
* LOG OF EDITS:
*  
* Created on 25th February 2014, 17:11
* Edited on: 26th February 2014
* Edited on: 03rd March 2014
* Edited on: 11th March 2014
* Edited on: 21st May 2014
* Edited on: 22nd May 2014
* Edited on: 23rd May 2014
* Edited on: 24th May 2014
* 
* Remastered on: 17th January 2017
* 
*BROKEN WARRIOR, A C Text-Based Adventure-Game
* By James Phillips
* 
*/

#include <stdio.h>
#include <stdlib.h>

char string1[1024];
int strcmp(const unsigned char
        *s1, const unsigned char *s2);

int intro()
{
    printf ( "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                 Broken Warrior\n\n\n\n\n\n\n\n Press ENTER/RETURN" );
    getchar ();
    printf ( "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                               -By James Phillips\n\n\n\n\n\n\n\n Press ENTER/RETURN" );
    getchar ();
    printf ( "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nThis application is released under the GNU GPL v2 and has NO Warranty to the\nextent permissible by law.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Press ENTER/RETURN" );
    getchar ();
    printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHOW TO PLAY: \n");
    printf ( "1. This is a text adventure, you will be presented with a series of scenarios. \n" );
    printf ( "2. Once you have read these scenarios, simply type a response to progress \n   through the story. \n" );
    printf ( "3. Hints through the game are displayed in CAPITALS. \n" );
    printf ( "4. Where a response requires more than one word, simply join them, likethis. \n" );
    printf ( "5. always put your responses in CPAITALS. \n" );
    printf ( "6. Required answers are always simple phrases, if you type an incorrect answer,\n   the level restarts. \n" );
    printf ( "7. Press ENTER/RETURN to begin once you have read the instructions and \n   scenario. \n" );
    printf ( "\n\nSCENARIO: \n" );
    printf ( "You are walking along the streets of downtown New York, late, one Friday night.\n" );
    printf ( "You hear the loud sound of glass smashing and feel a sharp pain against the\nback of your head.\n" );
    printf ( "Suddenly you feel extremely light-headed and drowsy. you collapse in a heap on\nthe road.\n" );
    printf ( "You look up. You see a dark, mysterious, hooded-figure. The world fades\nto black..." );
    printf ( "\n\nLET THE GAME BEGIN! \n" );
    return (0);
}
int lvl1()
{
    char string2[1024] = "LEFT";
    char string3[1024] = "RIGHT";
    printf ( "\n\nLEVEL 1 \n" );
    printf ( "\n\nYou are in a forest... Cliched,right?... \n" );
    printf ( "There is a clearing to the LEFT of you and a cliff to the RIGHT. \n" );
    scanf ( "%1024s", &string1 );
    if (strcmp(string1, string2) == 0)
    {
        printf ( "Success! \n" );
        lvl2();
    }
    else if (strcmp(string1, string3) == 0)
    {
        printf ( "You fall off a cliff and a jagged rock spears through your chest. \nYou die a slow and painful death due to bleeding out. \nYou can`t call for or get to help because all your limbs and your jaw are broken. \n Never play near cliffs. \nOuch! \n" );
        printf ( "Respawning...\n" );
        lvl1();
    }
    else
    {
        printf ( "Sorry, I didn't quite catch that. Let's try this again... \n" );
        lvl1 ();
    }
    return (0);
}

int lvl2 ()
{
    char string2[1024] = "GETSPADE";
    char string3[1024] = "SPADE";
    char string4[1024] = "GET";
    char string5[1024] = "BACK";
    printf ( "\n\nLEVEL 2 \n" );
    printf ( "\n\nYou find yourself in a clearing.\n" );
    printf ( "On the ground there is a SPADE you could GET, or you could go BACK. \n" );
    scanf ( "%1024s", &string1 );
    if (strcmp(string1,string2) == 0)
    {
        printf ( "Success! \n" );
        lvl3();
    }
    else if (strcmp(string1,string3) == 0)
    {
        printf ("Do what to it? \n" );
        lvl2();
    }
    else if (strcmp(string1,string4) == 0)
    {
        printf ( "Get what? \n" );
        lvl2();
    }
    else if (strcmp(string1,string5) == 0)
    {
        lvl1();
    }
    else
    {
        printf ( "Sorry, I didn't quite catch that. Let's try this again... \n" );
        lvl2 ();
    }
    return (0);
}

int lvl3 ()
{
    char string2[1024] = "DIG";
    char string3[1024] = "DIGASHAFT";
    printf ( "\n\nLEVEL 3 \n" );
    printf( "\n\nYou have a spade, there`s only one thing to do with it, right?... \n" );
    scanf ( "%1024s", &string1 );
    if (strcmp(string1,string2) == 0)
    {
        printf ( "Success! \n" );
        lvl4();
    }
    else if (strcmp(string1,string3)== 0)
    {
        printf ( "well, it's smutty, but I'll reward you for it anyway... \n" );
        lvlboss();
    }
    else
    {
        printf ( "Sorry, I didn't quite catch that. Let's try this again... \n" );
        lvl3 ();
    }
    return (0);
}

int lvl4 ()
{
    char string2[1024] = "FORWARDS";
    char string3[1024] = "BACKWARDS";
    char string4[1024] = "CLIMBUP";
    printf ( "\n\nLEVEL 4 \n" );
    printf ( "\n\nYou dig down and emerge in a dark cave, FORWARDS, there is a light in \nthe distance. BACKWARDS, there is a dark tunnel with little visibility. \nYou could try to CLIMB UP \n" );
    scanf ( "%1024s", &string1 );
    if (strcmp(string1,string2) == 0)
    {
        printf ( "you walk towards the emanating light; stepping closer and closer... \nSuddenly, the ground gives way beneath you: you fall into a pit of magma. \nYou burn to death in excruciating pain, your blood boiling in the magma. \n" );
        printf ( "Respawning... \n" );
        lvl1();
    }
    else if (strcmp(string1,string3)== 0)
    {
        printf ( "Success! \n" );
        lvl5();
    }
    else if (strcmp(string1,string4)== 0)
    {
        lvl3();
    }
    else
    {
        printf ( "Sorry, I didn't quite catch that. Let's try this again... \n" );
        lvl4 ();
    }
    return (0);
}

int lvl5 ()
{
    char string2[1024] = "ATTACK";
    char string3[1024] = "SPADE";
    char string4[1024] = "WITHSPADE";
    char string5[1024] = "ATTACKWITHSPADE";    
    int timer = 5;
    int lvl5cont ()
    {
        printf ( "\n\nLEVEL 5 \n" );
        printf ("You crawl along the cave using your hands to feel your way through the darkness. \nYou place your hand on a surface, it's warm... and scaly... \nThe room is lit up as a fire breathing salamander lets out a burst of flames! \nYou must ATTACK him before he incinerates you!\n");
        if (timer == 0) 
        {
            printf ( "You have been slain in an explosive fireball \n" );
            printf ( "Respawning..." );
            timer = 5;
            lvl1();
        }
        while ( timer > 0 )
        {
            scanf ( "%1024s", &string1 );
            if (strcmp(string1,string2) == 0)
            {
                printf( "WITH what?\n" );
                timer = timer - 1;
                lvl5cont();
            }
            if (strcmp(string1,string3) == 0)
            {
                printf( "What about it?\n" );
                timer = timer - 1;
                lvl5cont();
            }
            if (strcmp(string1,string4) == 0)
            {
                printf( "Do what with it?\n" );
                timer = timer - 1;
                lvl5cont();
            }
            if (strcmp(string1,string5) == 0)
            {
                printf ( "A voice is heard resonating around the cave. \n  'Congratulations young warrior, on slaying the fiery behemoth and passing \n  the first test of many. Do not fear, but you are about to feel very sleepy. \n  I'll be watching this one's reactions very closely... ' \n" );
                printf ( "Success!\n" );
                timer = 5;
                lvl6();
            }
            else
            {
                printf ( "Sorry, I didn't quite catch that. Let's try this again... \n" );
                timer = timer - 1;
                lvl5cont ();
            }
        }
    }
    lvl5cont ();
    return (0);
}

int lvl6 ()
{
    char string2[1024] = "PULL";
    char string3[1024] = "RIGHT";
    char string4[1024] = "HAND";
    char string5[1024] = "PULLHAND";
    char string6[1024] = "PULLRIGHT";
    char string7[1024] = "PULLRIGHTHAND";
    printf ( "\n\nLEVEL 6 \n" );
    printf ( "You awaken in a dungeon, you seem to be chained to a wall, but the manacles seem\nrusty. You could try to PULL your RIGHT hand free, it seems rustier.\n" );
    scanf ( "%1024s", &string1 );
    if (strcmp(string1,string2) == 0)
    {
        printf ( "Pull what?" );
        lvl6();
    }
    else if (strcmp(string1,string3) == 0)
    {
        printf ( "What about it?" );
        lvl6();
    }
    else if (strcmp(string1,string4) == 0)
    {
        printf ( "Is still reasonably clean, surprisingly enough." );
        lvl6();
    }
    else if (strcmp(string1,string5) == 0)
    {
        printf ( "You pull at your left hand, the manacle cuts into your wrist and you die of \ntetanus from the rust and dirt embedded in the manacle...\nNasty!\n" );
        printf ( "Respawning...\n" );
        lvl1();
    }
    else if (strcmp(string1,string6) == 0)
    {
        printf ( "You lean right and hit your head on the wall. Dazed, you fall asleep and \ndrift away peacefully in your sleep due to extreme concussion.\n" );
        printf ( "Respawning...\n" );
        lvl1();
    }
    else if (strcmp(string1,string7) == 0)
    {
        printf ( "Success!\n" );
        lvl7();
    }
    return (0);
}

int lvl7 ()
{
    char string2[1024] = "ALPHA";
    char string3[1024] = "BETA";
    char string4[1024] = "GAMMA";
    printf ( "\n\nLEVEL 7 \n" );
    return (0);
}

int lvlboss ()
{
    char string2[1024] = "ALPHA";
    char string3[1024] = "BETA";
    char string4[1024] = "GAMMA";
    printf ( "\n\nBOSS LEVEL \n" );
    return (0);
}

int main(int argc, char** argv)
{
    intro();
    getchar();
    printf ( " \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n" );
    lvl1();
    return (EXIT_SUCCESS);
}

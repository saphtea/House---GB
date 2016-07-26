#include <gb/gb.h>  // Angle brackets check the compiler's include folders
#include "house.c" // double quotes check the folder of the code that's being compiled

void main() {

    int counter = 0;
    int i = 0;


        // DRAWING THE INITAL FRAME
        // Printing left half of building (1st frame)
        SPRITES_8x16; // Makes Tiles 8x16
        set_sprite_data(0, 8, house); // Loads Sprites
        set_sprite_tile(0, 0); // Sprite 0 (and as a consequence, Sprite 1) are loaded into Tile 0
        move_sprite(0, 80, 72); // Dooo da move (Centered)

        // The right half of the first frame
        set_sprite_tile(1, 2); // Sprite 2 and consequently Sprite 3 are made to Tile 1
        move_sprite(1, 80 + 8, 72); // Do more of da move but with Tile 1 dis time (Centered)
        // Pls display
        SHOW_SPRITES;

        // Infinite loop for the animation
        while(1) {

            // Incrememnt counter to trigger if statement for glithciness
            counter++;

            if (counter == 4){
                SPRITES_8x8; // WELCOME 8x8 TILES WE MISSED YOU
                set_sprite_tile(0, 3); // Mess me up
                set_sprite_tile(1, 8); // Seriously though MESS ME UP
                delay(640); // Oh no not for this long
                set_sprite_tile(0, 8); // ROUND TWO FAM
                set_sprite_tile(1, 3); // ROUND TH-- ERR ROUND TWO STILL FAKSLMFALSD
                delay(280); // Swings by like a summer breeze

                SPRITES_8x16; // Welcome home 8x16! We're still going to use you and reverse the building sides

                // For your entertainment
                // Right side of the building goes on left side and vice versa. Essentially reverses
                for (i = 0; i != 4; i++) {
                    set_sprite_tile(0, 6);
                    set_sprite_tile(1, 4);
                    delay(500);
                    set_sprite_tile(0, 2);
                    set_sprite_tile(1, 4);
                    delay(500);
                }

                // Repeating this code just because we're transitioning out of the house glitch
                // Otherwise it's just a hard cut and feels as though it was explicitly uninentional
                // Which is cool in some cases, but this might be cooler

                SPRITES_8x8; // WELCOME 8x8 TILES WE MISSED YOU
                set_sprite_tile(0, 7); // Mess me up
                set_sprite_tile(1, 8); // Seriously though MESS ME UP
                delay(200); // Oh how nice this time around
                set_sprite_tile(0, 3); // ROUND TWO FAM
                set_sprite_tile(1, 7); // ROUND TH-- ERR ROUND TWO STILL FAKSLMFALSD
                delay(249); // Swings by like a winter storm

                SPRITES_8x16; // No more nightmares (oh wait this loops)

                // Reset counter before exiting if statement just so it can be triggered again
                counter = 0;
            }

            // Normal displaying of the building
            // Starting with the second "Frame" (Sprites 4-7)
            set_sprite_tile(0, 4); // Set Tile 0 to Sprite 4
            set_sprite_tile(1, 6); // Set Tile 1 to Sprite
            delay(500);

            // Coming back to original frame (Sprites 0-3)
            set_sprite_tile(0, 0); // Set Tile 0 back to Sprite 0
            set_sprite_tile(1, 2); // Set Tile 1 back to Sprite 2
            delay(500);
        }
}

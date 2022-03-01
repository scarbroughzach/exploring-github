
// ====================
// Solving Mars Lander
// ==================== 

// This document will walk you through solving the Mars Lander puzzle on `codingame.com <https://www.codingame.com/ide/puzzle/mars-lander-episode-1>`_

// .. image:: mars_lander_ss_png.png
//
// 



// The puzzle focuses on the use of conditions in the C language


// Press `here <https://tutorialtpoint.in/c/conditional-statements-in-c/>`_ for a review of conditional statements in C

// =========================
// Thoughts Before Coding
// =========================

// For the puzzle we are given seven integer type variables

// 1. X coordinate of the rocket
// 2. Y coordinate of the rocket
// 3. Horizontal Speed
// 4. Vertical Speed
// 5. Fuel Level
// 6. Angle of Rotation
// 7. Thrust Power

// **Things to consider**

// * How quickly will the fuel run out?
// * At what elevation does speed need to be sharply reduced?
// * What is the maximum speed the lander can have and still make a safe landing (Safe meaning not blowing up on impact)


// *For this puzzle, all we need to worry about is the Y coordinate of the rocket, the vertical speed, the fuel level, and the thruster power.*

// =========================
// Implementing Code
// =========================

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// Auto-generated code below aims at helping you parse
// the standard input according to the problem statement.
 

int main()
{// the number of points used to draw the surface of Mars.
    int surface_n;
    scanf("%d", &surface_n);
    for (int i = 0; i < surface_n; i++) {
// X coordinate of a surface point. (0 to 6999)
        int land_x;
// Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        int land_y;
        scanf("%d%d", &land_x, &land_y);
    }

// game loop
    while (1) {
        int X;
        int Y;
// the horizontal speed (in m/s), can be negative.
        int h_speed;
// the vertical speed (in m/s), can be negative.
        int v_speed;
// the quantity of remaining fuel in liters.
        int fuel;
// the rotation angle in degrees (-90 to 90).
        int rotate;
// the thrust power (0 to 4).
        int power;
        scanf("%d%d%d%d%d%d%d", &X, &Y, &h_speed, &v_speed, &fuel, &rotate, &power);

// **The code below contains the solution, everything above was pre generated for this puzzle**

// The solution begins with an if else statement that looks at the Y altitude. If the landers is more than 1250 meters, it was retain a speed of -25 m/s as to not gain too much speed and lose control.

// The else statements attached to the two nested if else conditions are set to make the thruster level 1. Setting the thruster to the lowest level when we are not at our target speed helps us maintain said speed.

        if(Y > 1250)
        {
            if(v_speed < -25)
            {
                printf("0 4\n");
            }
            else
            {
                printf("0 1\n");
            }
        }
// Once below 1250 meters, the else condition is set to run. This is because at this distance you need to begin slowing down as to not crash onto the ground. 
// Though instead of -8 we could have used -1 for a guaranteed safe landing, we have to take fuel into account. -8 m/s is the slowing you can get to at our altitude of 1250 meters and still have enough fuel to make it to the ground.
        else
        {
            if(v_speed < -8)
            {
                printf("0 4\n");
            }
            else
            {
                printf("0 1\n");
            }
        }
        
    }

    return 0;
}

// **ATTENTION**: The height of 1250m and thrust power of 4 is just one way to solve this puzzle. If you allow the max speed to be -40, the minimum height could be adjusted along with the appropriate thrust.

// To summarize, this puzzle can be solved with a nearly infinite amount of methods, depending on the coders preference

// .. image:: mars_lander_complete_ss.png

// Congrats! You have landed on Mars succesfully!
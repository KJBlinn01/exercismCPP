/**
 * Name: Kevin Blinn
 * Date: January 29 2024
 * Language: C++
 * Exercism: Pac-Man Rules
 * Difficulty: Learning Exercise
 * Link: https://exercism.org/tracks/cpp/exercises/pacman-rules  
*/

/** Instructions
 * 
 * You need to translate some rules from the classic game Pac-Man into 
 * C++ functions. You have four rules to translate, all related to the 
 * game states.
 * 
 * This exercise will help you practice boolean logic
*/


/** can_eat_ghost(bool, bool)
 * 
 * This function checks to see if pac-man can eat a ghost. Pac-man can only eat
 * a ghost if a power pellet if active AND he's touching a ghost.
 * 
 * @param power_pellet_active the current state if power pellet is active
 * @param touching_ghost the current state if pac-man is touching a ghost
 * @return true if power_pellet_active == true && touching_ghost == true,
 * false OW
 * 
*/
bool can_eat_ghost(bool power_pellet_active, bool touching_ghost){
    if (power_pellet_active && touching_ghost){
        return true;
    }
    return false;
}

/** scored(bool, bool)
 * 
 * This function checks to see if Pac-man has scored. He scores by either
 * touching a power pellet or a dot.
 * 
 * @param touching_power_pellet the current state if he's touching a pellet
 * @param touching_dot the current state if pac-man is touching a dot
 * @return true if touching_power_pellet == true OR touching_dot == true,
 * false OW
*/
bool scored(bool touching_power_pellet, bool touching_dot){
    if (touching_power_pellet || touching_dot){
        return true;
    }
    return false;
}

/** lost(bool, bool)
 * 
 * This function checks to see if Pac-man lost. He loses by touching a ghost
 * while the power pellet isn't activated.
 * 
 * @param power_pellet_active the current state if power pellet is active
 * @param touching_ghost the current state if pac-man is touching a ghost
 * @return true if power_pellet_active == false && touching_ghost == true,
 * false OW
 * 
*/
bool lost(bool power_pellet_active, bool touching_ghost){
    if (!power_pellet_active && touching_ghost){
        return true;
        }
    return false;
}

/** won(bool, bool, bool)
 * 
 * This function checks to see if Pac-man wins. He wins by eating all the dots
 * and not losing. 
 * 
 * @param has_eaten_all_dots the current state if pac-man eats all the dots
 * @param power_pellet_active the current state if power pellet is active
 * @param touching_ghost the current state if pac-man is touching a ghost
 * @return true if has_eaten_all_dots == true && lost == false, false OW
 * 
*/
bool won(bool has_eaten_all_dots, bool power_pellet_active, bool touching_ghost){
    if (has_eaten_all_dots && !lost(power_pellet_active, touching_ghost)){
        return true;
    }
    return false;
}
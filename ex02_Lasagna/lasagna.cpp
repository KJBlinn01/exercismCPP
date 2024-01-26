/**
 * Name: Kevin Blinn
 * Date: January 26 2024
 * Language: C++
 * Exercism: Lasagna
 * Difficulty: Easy 
*/

/** Instructions
 * 
 * Lucian's girlfriend is on her way home and he hasn't cooked their anniversary
 * dinner!
 *
 * Write a program that calculates the time the lasagna in the oven, the
 * remaining time left in the oven, the preparation time in minutes, and the
 * elapsed time.
 * 
*/

/** ovenTime()
 * 
 * Function that tells us how long the lasagna needs to be in the oven. Based
 * on the cookbook, the lasagna needs 40 minutes to cook.
 * 
 * @return 40, the total cooking time
 * 
*/
int ovenTime(){
    return 40;
}

/** remainingOvenTime(int)
 * 
 * This function takes in actualMinutesInOven, which represents the 
 * time the lasagna was already in the oven for, and returns the remaining time
 * needed to cook the lasagna
 * 
 * @param actualMinutesInOven is the time the lasagna was already in the oven
 * @pre 0 <= actualMinutesInOven < 40
 * @return time remaining to finish cooking
 * 
*/
int remainingOvenTime(int actualMinutesInOven){
    return 40 - actualMinutesInOven;
}

/** preparationTime(int)
 * 
 * This function calculates the preparation time for the lasagna based on the
 * amount of layers. Every layer takes ~2 min to complete. 
 * 
 * @param layers the amount of layers the lasagna has
 * @pre layers > 0
 * @return the total preparation time based on the amount of layers
 * 
*/
int preparationTime(int layers){
    return 2 * layers;
}

/** elapsedTime(int, int)
 * 
 * This function calculating the total time the lasagna was prepared. This is
 * done by combining the total preparation time with the time the lasagna was 
 * already in the oven. 
 * 
 * @param numberOfLayers the number of layers off the lasagna
 * @param actualMinutesInOven the time the lasagna was already in the oven
 * @pre numberOfLayers > 0 AND 0 <= actualMinutesInOven <= 40
 * @return the total time elapsed 
 * 
*/
int elapsedTime(int numberOfLayers, int actualMinutesInOven){
    return 2 * numberOfLayers + actualMinutesInOven;
}

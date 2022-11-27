/* An automatic object is allocaetd at the beginning of an enclosing code block,
 * and it's deallocated at the end. The enclosing code block is the automatic object's scope.
 * Automatic objects are said to have automatic storage duration.
 * For example, function parameters are automatic.
*/

void power_up_rat_thing(int nuclear_isotopes) {
    int waste_heat = 0;
    /* This function has two automatic variables, nuclear_isotopes and waste_heat
     * They are allocated each time power_up_rat_thing is invoked. Just before 
     * the function returns, these variables are deallocated.
     * Because you cannot access these variables outside this scope, automatic variables are also called local variables.
     */
}
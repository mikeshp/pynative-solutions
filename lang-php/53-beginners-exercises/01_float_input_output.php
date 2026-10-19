<?php
declare(strict_types=1);

/* 
 * Exercise 01: Float Input Output 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

/*** GLOBALS ***/
$user_input = 0;
/*** FUNCTIONS ***/
function get_user_input(float& $user_input): void
{
	printf("%s: ", "Enter a floating-point number (e.g., 3.14569)");
	fscanf(STDIN, "%f", $user_input);
}
function show_user_input(float $user_input): void
{
	printf("%s: %.2f\n", "The number rounded to two decimal places is", $user_input);
}
/*** MAIN ***/
get_user_input($user_input);
show_user_input($user_input);

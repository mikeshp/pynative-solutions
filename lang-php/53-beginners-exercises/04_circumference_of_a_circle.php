<?php
declare(strict_types=1);

/* PYnative.com C Exercise Solutions
 * 
 * Exercise 04: Circumference Of A Circle 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

/* GLOBAL VARS */

$PI = 3.14159;

/* FUNCTIONS */

function get_user_radius(): float
{
	printf("Enter circle radius: ");
	fscanf(STDIN,"%f",$radius);
	return $radius;
}
function calc_circle_area(float $radius): float
{
	global $PI;
	return $PI * $radius * $radius;
}
function calc_circumference(float $radius): float
{
	global $PI;
	return $PI * $radius * 2;
}

/* MAIN */

$radius = get_user_radius();
$circlearea = calc_circle_area($radius);
$circumference = calc_circumference($radius);
printf("Given a circle with the radius of %.2f,\n", $radius);
printf("Area of the circle: %.2f\n", $circlearea);
printf("Circumference of the circle: %.2f\n", $circumference);

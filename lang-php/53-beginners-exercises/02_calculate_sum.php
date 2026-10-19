<?php
declare(strict_types=1);

/* PYnative.com C Exercise Solutions
 * 
 * Exercise 02: Calculate Sum 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

/* GLOBALS */
$number_a = 0;
$number_b = 0;
$sum = 0;

/* FUNCTIONS */
function sum(int $a, int $b): int
{
	return $a + $b;
}

/* MAIN */
printf("Enter the first integer: ");
fscanf(STDIN,"%d",$number_a);
printf("Enter the second integer: ");
fscanf(STDIN,"%d",$number_b);
printf("The sum of %d and %d is: %d\n",
$number_a,$number_b,sum($number_a,$number_b));

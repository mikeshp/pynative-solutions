<?php
declare(strict_types=1);

/* PYnative.com C Exercise Solutions
 * 
 * Exercise 05: Simple Interest 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

/* GLOBAL VARS */

$principal;
$rate;
$time;
$interest;

/* FUNCTIONS */

function get_loan_data(): void
{
	global $principal;
	global $rate;
	global $time;

	printf("Enter principal: ");
	fscanf(STDIN, "%f", $principal);
	printf("Enter rate: ");
	fscanf(STDIN, "%f", $rate);
	printf("Enter time in years: ");
	fscanf(STDIN, "%f", $time);
}
function calculate_simple_interest(): float
{
	global $principal;
	global $rate;
	global $time;
	return $principal / 100 * $rate * $time;
}

/* MAIN */

get_loan_data();
$interest = calculate_simple_interest();
printf("Simple interest is: %.2f\n", $interest);

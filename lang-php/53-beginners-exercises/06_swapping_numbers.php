<?php
declare(strict_types=1);

/* 
 * Exercise 06: Swapping Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

/* GLOBALS VARS */
$number_a = 10;
$number_b = 20;

/* FUNCTIONS */
function swap_numbers(&$a,&$b): void
{
	$temp = $a;
	$a = $b;
	$b = $temp;
}
function show_numbers($a,$b): void
{
	printf("A = %d, B = %d\n",$a,$b);
}

/* MAIN */
printf("--- Before Swap ---\n");
show_numbers($number_a,$number_b);
swap_numbers($number_a,$number_b);
printf("--- After Swap ---\n");
show_numbers($number_a,$number_b);

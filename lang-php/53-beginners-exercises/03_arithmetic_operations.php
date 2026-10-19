<?php
declare(strict_types=1);

/* PYnative.com C Exercise Solutions
 * 
 * Exercise 03: Arithmetic Operations 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

/* GLOBALS */
$a = 10;
$b = 20;


/* FUNCTIONS */
function summ(int $a, int $b): int
{
	return $a + $b;
}
function diff(int $a, int $b): int
{
	return $a - $b;
}
function prod(int $a, int $b): int
{
	return $a * $b;
}
function quot(int $a, int $b): float
{
	return $a / $b;
}

/* MAIN */
printf("%s: %d + %d = %d\n","Sum",$a,$b,summ($a,$b));
printf("%s: %d - %d = %d\n","Difference",$a,$b,diff($a,$b));
printf("%s: %d * %d = %d\n","Product",$a,$b,prod($a,$b));
if ($b == 0)
{
	printf("%s: %s\n","Quotient","Cannot devide by zero!");
}
else
{
	printf("%s: %d : %d = %.2f\n","Quotient",$a,$b,quot($a,$b));
}

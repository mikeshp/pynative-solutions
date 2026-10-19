(* 
 * Exercise 02: Calculate Sum 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program
	CalculateSum;
uses
	crt;
var
	num1, num2: integer;
begin

	write	('Enter the first integer: ');
	readln	(num1);

	write	('Enter the second integer: ');
	readln	(num2);

	writeln	('The sum of ', num1, ' and ', num2, ' is: ', num1 + num2);

end.

(* 
 * Exercise 01: Float Input Output 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program
	FloatNumber;
uses
	crt;
var
	float: real;
begin

	write	('Enter a floating-point number (e.g., 3.14159): ');
	readln	(float);

	writeln	('Your number rounded to two decimal places is : ', float:0:2);
end.

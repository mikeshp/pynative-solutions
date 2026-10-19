(* 
 * Exercise 04: Circumference Area Of A Circle 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program
	CircumferenceAndArea;
uses
	crt;
const
	PI = 3.14159;
var
	radius: real;
begin

	write	('What is the circle radius? ');
	readln	(radius);

	writeln	('Area of the circle: ', (PI * radius * radius):0:3);
	writeln	('Circumference of the circle: ', (2 * PI * radius):0:3);

end.

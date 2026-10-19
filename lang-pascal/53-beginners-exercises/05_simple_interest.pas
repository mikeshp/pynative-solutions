(* 
 * Exercise 05: Simple Interest 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program SimpleInterest;
uses	crt;

const
	RATE = 8;
var
	principal, time: real;

begin

	write	('How much to loan? ');
	readln	(principal);

	write	('How many years? ');
	readln	(time);

	writeln	('With ', RATE, '% rate, the interest for loan is ',
			(principal / 100 * RATE * time):0:2);

end.

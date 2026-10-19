(* 
 * Exercise 13: Natural Numbers For Loop 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program NaturalNumbers;
uses	crt;

var
	i, num: integer;

begin

//	num := 10;

	write	('How many numbers to print? ');
	read	(num);

	writeln	('The first ', num, ' natural numbers are:');

	for i := 1 to num do
	begin
		write(i, ' ');
	end;
	writeln();

end.

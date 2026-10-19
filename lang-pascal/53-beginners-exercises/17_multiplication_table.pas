(* 
 * Exercise 17: Multiplication Table 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program MultiplicationTable;
uses	crt;

var
	num, i: integer;

begin

//	num := 2;

	write	('Enter a number: ');
	read	(num);

	writeln	('Multiplication TAble for ', num, ' :');

	for i := 1 to 10 do
	writeln	(num, ' x ', i, ' = ', num * i);

end.

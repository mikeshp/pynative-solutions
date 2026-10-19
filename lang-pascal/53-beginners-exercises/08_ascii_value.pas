(* 
 * Exercise 08: Ascii Value 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program ASCII_Value;
uses	crt;

var
	input: char;

begin

	write	('Enter a character: ');
	readln	(input);

	writeln	('The character entered is: ', input);
	writeln	('The ASCII value of ''', input, ''' is: ', ord(input));

end.

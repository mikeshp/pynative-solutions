(* 
 * Exercise 33: Copy String 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CopyString;

var
	str_source	: string;
	str_destin	: string[20];

begin

	write	('Enter a string: ');
	readln	(str_source);

	str_destin := str_source;

	writeln	('Source: ', str_source);
	writeln	('Destination: ', str_destin);

end.

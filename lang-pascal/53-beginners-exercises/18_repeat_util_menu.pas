(* 
 * Exercise 18: Repeat Util Menu 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program Menu;
uses	crt;

var
	input: char;

begin

	repeat
	
		writeln	('1. Greet');
		writeln ('2. Say Goodbye');
		writeln	('3. Exit');

		readln	(input);

		case (input) of
			'1':
				writeln('Greetings!');
			'2':
				writeln('Live long and prosper!');
			'3':
				writeln('Exiting...');
			else
				writeln('Wrong input...');
		end;

	until input = '3';

end.

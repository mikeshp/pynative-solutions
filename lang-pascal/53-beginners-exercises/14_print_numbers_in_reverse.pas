(* 
 * Exercise 14: Print Numbers In Reverse 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program NumbersInReverse;
uses	crt;

var
	num, i: integer;

begin

//	num := 10;

	write	('Enter top number to start: ');
	read	(num);

	writeln	('Numbers in reverse order:');

	i := num;
	while (i > 0) do
	begin
		write(i, ' ');
		i := i - 1;
	end;
	writeln();

end.

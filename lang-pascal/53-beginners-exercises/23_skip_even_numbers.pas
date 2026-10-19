(* 
 * Exercise 23: Skip Even Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program	SkipEvenNumbers;

var
	number, i: integer;

begin

	number := 20;

	writeln('Odd numbers from 1 to ', number, ':');

	for i := 1 to number do
	begin
		if (i mod 2 = 0) then continue;
		write(i, ' ');
	end;

	writeln();

end.

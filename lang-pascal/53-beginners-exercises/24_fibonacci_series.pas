(* 
 * Exercise 24: Fibonacci Series 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program FibonacciSeries;

var
	number, i	: integer;
	n1, n2, next: uint64;

begin

	n1 := 0;
	n2 := 1;
	number := 8;

	writeln	('Fibonacci Series up to ', number, ' terms:');
	write	(n1, ', ', n2, ', ');

	for i := 3 to number - 1 do
	begin
		next := n1 + n2;
		n1	 := n2;
		n2	 := next;
		write(next, ', ');
	end;

	writeln	(n1 + n2);

end.

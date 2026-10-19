(* 
 * Exercise 26: Input And Print Array 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program InputAndPrintArray;

var
	num: integer;
	arr: array[1..5] of integer;
	  i: integer;

begin

	num := 5;

	writeln	('Enter ', num, ' integers:');

	for i := 1 to num do
	begin
		write('Enter element ', i, ': ');
		read(arr[i]);
	end;

	writeln	();

	write	('Elements stored in the array: ');
	for i := 1 to num do write(arr[i], ' ');
	writeln	();

end.

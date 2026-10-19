(* 
 * Exercise 27: Sum Of Array Elements 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program	SumOfArrayElements;

const
	ARRAY_SIZE = 5;

var
	i: integer;
	sum: int64;
	arr: array[1..ARRAY_SIZE] of integer;

begin

	writeln	('Enter array elements:');

	for i := 1 to ARRAY_SIZE do
	begin
		write	('Enter element ', i, ': ');
		read	(arr[i]);
	end;

	writeln	();

	write	('The elements are: ');
	for i := 1 to ARRAY_SIZE do
	write	(arr[i], ' ');
	writeln	();

	sum := 0;
	for i := 1 to ARRAY_SIZE do
	sum := sum + arr[i];

	writeln	('The sum of al array elements is: ', sum);

end.

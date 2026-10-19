(* 
 * Exercise 29: Search Element 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program SearchElement;

type
	int_array = array[integer] of int64;

const
	ARR_SIZE = 5;

var
	arr: int_array;
	i,k: integer;
	key: uint64;
//	isFound: boolean;

begin

	Randomize;
	for i := 1 to ARR_SIZE do arr[i] := random(100) + 1;

	write	('Given array: [ ');
	for i := 1 to ARR_SIZE do
	write	(arr[i], ' ');
	writeln	(']');

	writeln;

	write	('Enter the element to search: ');
	readln	(key);

	k := 0;

	for i := 1 to ARR_SIZE do
	begin
		if arr[i] = key then
		begin
			k := i;
			break;
		end;
	end;

	if (k > 0)
	then writeln('Element ', key, ' found at index ', k, '.')
	else writeln('Element ', key, ' not found!');

end.

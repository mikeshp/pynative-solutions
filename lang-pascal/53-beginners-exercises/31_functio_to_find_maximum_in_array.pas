(* 
 * Exercise 31: Functio To Find Maximum In Array 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program FindMaximum;

const
	ARR_SIZE = 6;

type
//	int_array = array[1..6] of integer;
	int_array = array of integer;

var
//	arr_size: integer;
//	data	: int_array = (8, 15, 2, 70, 9, 33);
	data	: array[1..ARR_SIZE] of integer = (8, 15, 2, 70, 9, 33);
	i, max	: integer;

function find_max(var arr: array of integer; size: integer): integer;
var
	i, max	: integer;
begin
	max := 0;

	for i := 1 to size do
	if arr[i] > max
	then max := arr[i];
	
	find_max := max;
end;

begin

//	arr_size := 6;

	write('The array elements are: (');
	for i := 1 to arr_size - 1 do
	write(data[i], ', ');
	writeln(data[arr_size], ')');

	max := find_max(data, ARR_SIZE);
	writeln('The largest element found by the function is: ', max);

end.

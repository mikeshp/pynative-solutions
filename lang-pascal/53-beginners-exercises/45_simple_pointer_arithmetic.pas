(* 
 * Exercise 45: Simple Pointer Arithmetic 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program SimplePointerArithmetic;

var
//	arr: array[1..3] of integer = (10, 20, 30);
	arr: array[1..3] of integer = (10, 20, 30);
	ptr: ^integer;
	i: integer;

begin

	ptr := @arr[1];

	for i:=1 to 3 do
	(ptr + i - 1)^ := i * 10;

	for i:=1 to 3 do
	writeln('arr[', i, ']: ', arr[i]);

	for i:=1 to 3 do
	writeln('(ptr+', i, ')^: ', (ptr + i - 1)^);

	writeln('Value of the first element (arr[1]): ', arr[1]);
	writeln('vAlue of the second element (via pointer arithmetic): ', (ptr + 1)^);
	inc(ptr);
	writeln('Value of the second element (ptr^ after increment): ', ptr^);

end.

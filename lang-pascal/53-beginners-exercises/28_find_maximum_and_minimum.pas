(* 
 * Exercise 28: Find Maximum And Minimum 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program FindMaxAndMin;

var
	i, min, max: integer;
	arr: array[1..6] of integer;

begin

//	arr[1] := 55;
//	arr[2] := 12;
//	arr[3] := 89;
//	arr[4] := 7;
//	arr[5] := 42;
//	arr[6] := 60;

	Randomize;
	for i := 1 to 6 do
	arr[i] := random(100) + 1;

	write  ('Array elements: ');
	for i := 1 to 5 do
	write  (arr[i], ', ');
	writeln(arr[6], '.');

	writeln;

	min   := 1;
	max   := 1;
	for i := 1 to 6 do
	begin
		if arr[i] > arr[max] then max := i;
		if arr[i] < arr[min] then min := i;
	end;

	writeln('Maximum element: ', arr[max]);
	writeln('Minimum element: ', arr[min]);

end.

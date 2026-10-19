(* 
 * Exercise 48: Copy Array 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CopyArray;

type
	ArrFive = array[1..5] of integer;

var
	source_arr: ArrFive = (1, 2, 3, 4, 5);
	dest_array: ArrFive;

procedure display_array(var arr: ArrFive; size: integer);
var
	i: integer;
begin
	for i:=1 to size do write(arr[i], ' ');
	writeln;
end;

procedure copy_array(var source: ArrFive; var destin: ArrFive; size: integer);
var
	i: integer;
begin
	for i:=1 to size do destin[i] := source[i];
end;


begin

	write('Source array elements: ');
	display_array(source_arr, 5);

	copy_array(source_arr, dest_array, 5);

	write('Destination array elements (after copy): ');
	display_array(dest_array, 5);

end.

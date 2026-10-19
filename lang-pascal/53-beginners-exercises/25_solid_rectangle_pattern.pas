(* 
 * Exercise 25: Solid Rectangle Pattern 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program	RectanglePattern;

var c, r, number: integer;

begin

	number:= 3;

	for r := 1 to number do
	begin
		for c := 1 to number do
		begin
			write('*');
		end;
		writeln();
	end;

end.

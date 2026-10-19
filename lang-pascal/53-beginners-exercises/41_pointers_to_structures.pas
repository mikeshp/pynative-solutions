(* 
 * Exercise 41: Pointers To Structures 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program PointersToStructures;

type
	Car = record
		model_year: integer;
		color: string;
	end;

var
//	new_car: Car;
	ptr_car: ^Car;

begin

//	ptr_car := @new_car;
	new(ptr_car);

	write('Enter car model year: ');
	readln(ptr_car^.model_year);
	write('Enter car color: ');
	readln(ptr_car^.color);

	writeln;

	writeln('--- Car Details (via Pointer) ---');
	writeln('Model Year: ', ptr_car^.model_year);
	writeln('Car Color: ', ptr_car^.color);

	dispose(ptr_car);

end.

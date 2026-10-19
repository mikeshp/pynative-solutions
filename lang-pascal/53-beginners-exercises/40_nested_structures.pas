(* 
 * Exercise 40: Nested Structures 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program NestedStructures;

type
	Date = record
		day  : integer;
		month: integer;
		year : integer;
	end;
	Employee = record
		id   : integer;
		name : string;
		date_of_joining: Date;
	end;

var
	employ1: Employee;

begin

	write	('Enter employee ID: ');
	readln	(employ1.id);
	write	('Enter employee name: ');
	readln	(employ1.name);
	write	('Enter date of joining (day month year): ');
	readln	(employ1.date_of_joining.day,
			 employ1.date_of_joining.month,
			 employ1.date_of_joining.year);
	writeln;
	writeln	('--- Employee Record ---');
	writeln	('ID: ', employ1.id);
	writeln	('Name: ', employ1.name);
	writeln	('Joning Date: ',
			 employ1.date_of_joining.day, '/',
			 employ1.date_of_joining.month, '/',
			 employ1.date_of_joining.year);

end.

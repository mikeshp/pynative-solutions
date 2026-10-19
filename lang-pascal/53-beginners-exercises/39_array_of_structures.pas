(* 
 * Exercise 39: Array Of Structures 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program ArrayOfRecords;

type
	StudentRecord = record
		name: string;
		roll: integer;
		perc: real;
	end;
	list_of_students = array[1..3] of StudentRecord;

var
	students: list_of_students;
	i: integer;

procedure display_students(var list: list_of_students);
var
	i: integer;
begin
	writeln('--- All Student Records ---');
	for i := 1 to 3 do
	writeln('Student ', i, ': Name=', list[i].name,
			', Roll=', list[i].roll, ', Marks=', list[i].perc:0:2);
end;

procedure record_student(var student: StudentRecord; i: integer);
begin
	writeln('--- Enter Data For Student ', i, ' ---');
	write  ('Name: ');
	readln (student.name);
	write  ('Roll Number: ');
	readln (student.roll);
	write  ('Marks: ');
	readln (student.perc);
end;

begin

	for i := 1 to 3 do
	record_student(students[i], i);

	writeln;
	display_students(students);

end.

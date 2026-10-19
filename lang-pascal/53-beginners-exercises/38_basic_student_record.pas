(* 
 * Exercise 38: Basic Student Record 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program BasicStudentRecord;

type
	StudentRecord = record
		name: string;
		roll: integer;
		perc: real;
	end;

var
	student: StudentRecord;

procedure record_student(var student: StudentRecord);
begin
	write('Enter Student Name: ');
	readln(student.name);
	write('Enter Roll Number: ');
	readln(student.roll);
	write('Enter Percentage: ');
	readln(student.perc);
end;

procedure display_student(student: StudentRecord);
begin
	writeln('--- Student Details ---');
	writeln('Name: ', student.name);
	writeln('Roll Number: ', student.roll);
	writeln('Percentage: ', student.perc:0:2, '%');
end;

begin

	record_student(student);
	writeln;
	display_student(student);
	
end.

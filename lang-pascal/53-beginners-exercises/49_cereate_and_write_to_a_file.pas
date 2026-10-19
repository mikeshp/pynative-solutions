(* 
 * Exercise 49: Cereate And Write To A File 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program WriteToFile;

var
	human_name: string;
	human_age: string;
	data_file: TextFile;

begin

	human_name := 'Name: Alice Johnson';
	human_age  := 'Age: 30 years';

	Assign(data_file, 'data.txt');
	Rewrite(data_file);
		writeln(data_file, human_name);
		writeln(data_file, human_age);
	Close(data_file);

end.

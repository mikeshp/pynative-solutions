(* 
 * Exercise 35: Words In A String 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program WordsInString;

var
	sentence: string;
	words	: integer;

function count_words(const str: string): integer;
var
	isWord	: boolean;
	count, i: integer;
begin
	count := 0;
	isWord:= false;

	for i := 1 to length(str) do
	begin
		if str[i] = ' '
		then
			begin
				if isWord then
				isWord := false;
			end
		else
			begin
				if not isWord then
				begin
					isWord := true;
					count  += 1;
				end;
			end;
	end;

	count_words := count;
end;

begin

//	sentence := 'This is a test string';
	sentence := 'This is another test string with more words';
	words := count_words(sentence);

	writeln('The string is: ', sentence);
	writeln('Total number of words: ', words);

end.

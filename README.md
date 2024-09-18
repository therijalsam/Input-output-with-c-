# Input-output-with-c-

Files are useful as an input source in particular so we no longer need to provide the input ourselves
through cin (especially useful if you’ve got a lot of input and need to test your program repeatedly as
you write it to make sure it works). Typically, our input files will follow some kind of specified format
that will allow us to expect certain information is placed in known locations throughout the file. This
means we don’t need to worry about error checking as we can assume that the format will be correctly
followed. The format will be described in any lab that uses file input and there will usually be a given an
example. The key is that these are just an example and that you cannot “hard code” the file to expect
exactly that data.
Hard-code: means to fix data into a program so that it cannot respond dynamically to new/different
data. Most programs are meant to respond to whatever input they are given – a program taking a
student’s name as input for instance should take in whatever the student name is and not be expecting
somewhere else in the program that the name is “Bob” for instance. If you hard code a value into your
code your program it then only works for that value. The art of programming is thinking about data
(input or output) as what type of information it is (number, name, file, image…) instead of exactly what
the value it is you expect. Eventually you may consider ranges and sizes, but you learned in chapter 2
that each numerical datatype is associated with a specific memory size (and has its own minimum and
maximum number is supports).
In this lab we will be taking in 3 files as input which will all be formatted the same. In each file will be a
vehicle receipt with information looking like
Example input:
Date: 1/1/21
Purchaser: Bill Brown
Address: 111 Dallas Ln
Address: 75005, Dallas, TX.
Make: Jeep
Model: Patriot
Year: 2016
Purchase Price: 11450
Curb wt: 3200
Odometer Reading: 12237
Body Type: SUV
VIN: 123JC48931HN123
In these files there is a lot of data that we wont be using. Unfortunately we are going to have to read it
in anyways and just ignore it. Your job will be to read in each of the 3 files and add up the total purchase
price for each vehicle as well as the total curb wt. Output to the screen and to an output file named
“Output.txt” the types of vehicles sold (make and model) as well as the total price and curb weight for
all the vehicles:
Example output:
Jeep, Patriot

Kia, Rio
Dodge, Dart
Total Cost: 28950
Total Curb weight: 9140
Remember that these inputs and outputs are only examples. You could potentially get any vehicle as a
receipt. The 3 input vehicle files will be named Receipt1.txt, Receipt2.txt, and Receipt3.txt and as stated
before your output should be to the screen as well as to a file named Output.txt. Any questions or
concerns should be asked to the instructor. Remember that I am always here to help you so please do
not turn to online resources unless it is absolutely necessary.

# a bash code to compile all c++ files in all directories of this directory

for dir in */
do
	g++ -std=c++11 *.cpp -o exe.o
done


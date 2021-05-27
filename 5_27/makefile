output: 1.o 2.o 4.o TwoD.o newuser.o
	g++ 1.o -o 1
	g++ 2.o TwoD.o -o 2
	g++ 4.o newuser.o -o 4
1.o:1.cpp
	g++ -c 1.cpp
2.o:2.cpp
	g++ -c 2.cpp
4.o:4.cpp
	g++ -c 4.cpp
TwoD.o:TwoD.cpp TwoD.h
	g++ -c TwoD.cpp
newuser.o:newuser.cpp newuser.h
	g++ -c newuser.cpp
clean:
	rm 1.o 2.o 4.o newuser.o TwoD.o
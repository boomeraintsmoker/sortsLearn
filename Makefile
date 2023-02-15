all: sorts_learn

sorts_learn: main.o sorts.o test_sorts.o arraywork.o sort_type.o
	g++ main.o sorts.o test_sorts.o arraywork.o sort_type.o -o sorts_learn

main.o: main.cpp	
	g++ -c main.cpp
        
sorts.o: sorts.cpp 	
	g++ -c sorts.cpp
    
test_sorts.o: test_sorts.cpp
	g++ -c test_sorts.cpp

arraywork.o: arraywork.cpp
	g++ -c arraywork.cpp

sort_type.o: sort_type.cpp
	g++ -c sort_type.cpp        

clean: 
	rm -rf *.o sorts_learn

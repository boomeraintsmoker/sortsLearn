all: sorts_learn

sorts_learn: main.o sorts.o test_sorts.o often_used_functions.o 
	g++ main.o sorts.o test_sorts.o often_used_functions.o -o sorts_learn

main.o: main.cpp	
	g++ -c main.cpp
        
sorts.o: sorts.cpp 	
	g++ -c sorts.cpp
    
test_sorts.o: test_sorts.cpp
	g++ -c test_sorts.cpp

often_used_functions.o: often_used_functions.cpp
	g++ -c often_used_functions.cpp
        
clean: 
	rm -rf *.o sorts_learn

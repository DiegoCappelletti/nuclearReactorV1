clear : 
	rm -f *.gch;
	rm -f *.o;
	rm -f reactor;

.PHONY : clear

HOME = home.cpp home.h

LOGIN = login.cpp login.h

P_I = paginainiziale.cpp paginainiziale.h

M_O = mansioniordinarie.cpp mansioniordinarie.h

U_A = ultimoatto.cpp ultimoatto.h

project : main.cpp $(HOME) $(LOGIN) $(P_I) $(M_O) $(U_A)
	g++ -o reactor main.cpp $(HOME) $(LOGIN) $(P_I) $(M_O) $(U_A)



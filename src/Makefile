CC=g++
LIBS= 

databaseProgram: driver.o database.o
	$(CC) -o databaseProgram driver.o database.o $(LIBS)

driver.o: driver.cpp database.h
	$(CC) -c -o driver.o driver.cpp  $(LIBS)

database.o: database.cpp database.h
	$(CC) -c -o database.o database.cpp  $(LIBS)

clean:
	rm -f ./*.o
	rm databaseProgram
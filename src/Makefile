CC=g++
LIBS=

databaseProgram: driver.o ui.o database.o 
	$(CC) -o databaseProgram driver.o database.o ui.o$(LIBS)

driver.o: driver.cpp database.h
	$(CC) -c -o driver.o driver.cpp  $(LIBS)

database.o: database.cpp database.h
	$(CC) -c -o database.o database.cpp  $(LIBS)

ui.o: ui.cpp ui.h
	$(CC) -c -o ui.o ui.cpp  $(LIBS)

clean:
	rm -f ./*.o
	rm databaseProgram

run:
	./databaseProgram
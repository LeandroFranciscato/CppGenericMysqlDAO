SOURCE=main.cpp	util/MySqlDatabase.cpp	util/MySqlDatabase.h
BUILDDIRECTORY=build/
MYPROGRAM=$(BUILDDIRECTORY)CppGenericMysqlDAO
MYINCLUDES=./websocketpp/   -lmysqlcppconn

MYLIBRARIES=mysql-connector-c++/lib
CC=g++
MKDIR=mkdir

#------------------------------------------------------------------------------

$(MYPROGRAM): $(SOURCE)		
	rm -r $(BUILDDIRECTORY)
	$(MKDIR) $(BUILDDIRECTORY)
	$(CC) -I $(MYINCLUDES) $(SOURCE) -o $(MYPROGRAM) -L $(MYLIBRARIES)
clean:
	rm -r $(BUILDDIRECTORY)



#g++ -std=c++11 -lmysqlcppconn main.cpp -I ./websocketpp/ -L mysql-connector-c++/lib -o main
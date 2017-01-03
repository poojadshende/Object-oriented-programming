library: book.o periodic.o film.o video.o media.o searchengine.o main.o
	g++ -Wall -pedantic -g -o library book.o periodic.o film.o video.o media.o searchengine.o main.o 

main.o: main.cpp searchengine.h
	g++ -Wall -pedantic -g -c main.cpp

searchengine.o: searchengine.h searchengine.cpp media.h book.h film.h video.h periodic.h
	g++ -Wall -pedantic -g -c searchengine.cpp 

video.o: video.h video.cpp
	g++ -Wall -pedantic -g -c video.cpp 

film.o: film.h film.cpp
	g++ -Wall -pedantic -g -c film.cpp 

periodic.o: periodic.h periodic.cpp
	g++ -Wall -pedantic -g -c periodic.cpp 

book.o: book.h book.cpp
	g++ -Wall -pedantic -g -c book.cpp 

media.o: media.h media.cpp
	g++ -Wall -pedantic -g -c media.cpp 

clean:
	rm -f *.o library

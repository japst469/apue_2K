#include 	<iostream>
#include 	<ctime>
#include 	<fstream>
#include 	<string>
#include 	"ourhdr.h"

#define		BUFFSIZE 		8192

int main( int argc, char * argv[] ) 
{
	std::ofstream 	outfile;
	
	time_t		t = time(0);
	struct tm *	now = localtime( &t );
	char 		timebuf[80];
	char 		buf[BUFFSIZE];
	int 		n;

	strftime(timebuf, sizeof(timebuf), "%Y:%m:%d:%X", now);

	outfile.open( "j_log", std::ios_base::app );
	// write out the current date-time
	outfile << buf << "-";
	
	std::cout << "Whats the category? > ";
	std::cin >> buf;
	outfile << buf << std::endl;
	
	std::cin >> buf;
	outfile << buf << std::endl;		

	outfile.close();

	exit(0);
}






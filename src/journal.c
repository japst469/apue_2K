#include 	<iostream>
#include 	<ctime>
#include 	<fstream>
#include 	<sstream>
#include 	"ourhdr.h"

#define		BUFFSIZE 		8192

int main( int argc, char * argv[] ) 
{
	std::ofstream 	outfile;
	
	time_t		t = time(0);
	struct tm *	now = localtime( &t );
	char 		timebuf[128];
	std::string	category;
	std::string 	line;

	strftime(timebuf, sizeof(timebuf), "%Y:%m:%d:%X", now);

	outfile.open( "j_log", std::ios_base::app );
	// write out the current date-time	
	std::cout << "What is the category? > ";
	std::getline( std::cin, category );
	std::cout << timebuf << "-" << category << std::endl;
	std::cout.flush();
	
	//std::cout.rdbuf(outfile.rdbuf()); //redirect std::cout to our file
	outfile << "{ " << timebuf << "-" << category;

	while(std::getline(std::cin, line))  //input from the cin
	{
		outfile << line << std::endl;   //output to the new buffer
	}
	t = time(0);
	now = localtime( &t );
	strftime(timebuf, sizeof(timebuf), "%Y:%m:%d:%X", now);
	outfile << category << "-" << timebuf << " }" << std::endl ;

	outfile << "";

	outfile.close();

	exit(0);
}






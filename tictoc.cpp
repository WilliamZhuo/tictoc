#include <chrono>
 
using namespace std::chrono;
int tictoc(int&timestamp)
{
	milliseconds ms = duration_cast<milliseconds>(
		system_clock::now().time_since_epoch()
		)
	int timediff = (int)ms - timestamp;
	timestamp = (int)ms;
	return timediff;
}
#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char *argv[]){
	int cs1, cs2, cs3, cs4;
	cs1 = csinfo();
	cs2 = csinfo();
	sleep(1);
	cs3 = csinfo();
	sleep(1000);
	sleep(1);
	trace(1);
	sleep(1);
	sleep(1);
	sleep(1);
	sleep(1);
	sleep(1);
	trace(0);
	sleep(1);
	sleep(1);
	cs4 = csinfo();
	printf(1, "context switch counts = %d, %d, %d, %d\n", cs1, cs2, cs3, cs4);

	exit();//must exit
}

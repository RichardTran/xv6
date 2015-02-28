#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
	trace(1);
	sleep(5);
	sleep(1);
	trace(0);
	exit();//must exit
}

#include "gameLogic.h"

#if defined(WIN32) && defined(NDEBUG)
#include <Windows.h>

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
#else
int main(int argc, char *argv[])
#endif
{ 
	if (argc >= 2) {
    	cruceGameOptions(argc,argv);
	}
	else {
		cruceGameLogic();
	}
    return EXIT_SUCCESS;
}

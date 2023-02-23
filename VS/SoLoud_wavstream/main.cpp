#include "soloud.h"
#include "soloud_wav.h"

// Entry point
int main(int argc, char* argv[])
{
	// Define a couple of variables
	SoLoud::Soloud soloud;  // SoLoud engine core

	// initialize SoLoud.
	soloud.init();

	SoLoud::Wav boom;
	boom.load("littleidea.mp3");
	soloud.play(boom); // Play the wave : OK!

	getchar();

	// Clean up SoLoud
	soloud.deinit();

    // All done.
    return 0;
}

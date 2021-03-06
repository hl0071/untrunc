#include <string.h>  // memset
#include <iostream>

//#include "libavutil/ffversion.h"
#include "../common.h"
#include "gui.h"

using namespace std;

int main(int argc, char* argv[]) {
	g_ignore_unknown = true;
	g_interactive = false;

	Gui::init();
	if (argc > 1) uiEntrySetText(Gui::Repair::entry_ok_, argv[1]);
	if (argc > 1) uiEntrySetText(Gui::Analyze::entry_ok_, argv[1]);
	if (argc > 2) uiEntrySetText(Gui::Repair::entry_bad_, argv[2]);
	Gui::run();

	return 0;
}

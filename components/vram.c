#include "../slstatus.h"
#include "../util.h"

const char *vram_perc(const char *unused) {
	static char perc[16];

	if (pscanf("/sys/class/drm/card1/device/mem_busy_percent", "%s15s", perc) != 1)
		return NULL;

	return perc;
}

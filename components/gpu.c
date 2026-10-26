#include "../slstatus.h"
#include "../util.h"

const char *gpu_perc(const char *unused) {
	static char perc[16];

	if (pscanf("/sys/class/drm/card1/device/gpu_busy_percent", "%s15s", perc) != 1)
		return NULL;

	return perc;
}

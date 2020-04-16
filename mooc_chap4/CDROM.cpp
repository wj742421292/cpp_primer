#include "CDROM.h"

void
CDROM::setInstall(CDROM_INSTALL r)
{
	install = r;
}

void
CDROM::setInterface(CDROM_Interface f)
{
	interface = f;
}

void
CDROM::setCache(unsigned v)
{
	cache = v;
}

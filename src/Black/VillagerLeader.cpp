// Unreferenced by any function, so it is declared extern to still be emitted. It must also come
// before the includes to land first in .rdata, ahead of the Base.h pair, as in the original object.
extern "C" const float villager_leader_float1000p0_0x0099a9ac = 1000.0f;

#include "Villager.h"

// BW1W120 007626e0 BW1M100 1058ad90 Villager::CheckLeaderNeeded(void)
bool32_t Villager::CheckLeaderNeeded()
{
	return false;
}

#include "RE/NetImmerse/NiAVObject.h"

#include "RE/NetImmerse/NiCollisionObject.h"
#include "RE/NetImmerse/NiNode.h"
#include "RE/NetImmerse/NiUpdateData.h"

namespace RE
{
NiAVObject::NiAVObject()
{
    stl::emplace_vtable(this);
    local.MakeIdentity();
    world.MakeIdentity();
    previousWorld.MakeIdentity();
    flags.flags = 0xE;
}

NiAVObject::~NiAVObject()
{
} // NOLINT(modernize-use-equals-default)

void NiAVObject::Update(NiUpdateData &a_data)
{
    UpdateDownwardPass(a_data, 0);
    if (parent && ((a_data.flags & 0x200) == 0))
    {
        parent->UpdateUpwardPass(a_data);
    }
}
} // namespace RE

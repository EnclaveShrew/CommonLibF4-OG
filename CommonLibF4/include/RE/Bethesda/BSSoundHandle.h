#pragma once

namespace RE
{
class BSSoundHandle
{
  public:
    ~BSSoundHandle() noexcept
    {
    } // NOLINT(modernize-use-equals-default)

    bool FadeInPlay(std::uint16_t a_milliseconds)
    {
        using func_t = decltype(&BSSoundHandle::FadeInPlay);
        REL::Relocation<func_t> func{REL::ID(353528)};
        return func(this, a_milliseconds);
    }

    bool FadeOutAndRelease(std::uint16_t a_milliseconds)
    {
        using func_t = decltype(&BSSoundHandle::FadeOutAndRelease);
        REL::Relocation<func_t> func{REL::ID(260328)};
        return func(this, a_milliseconds);
    }

    // members
    std::uint32_t soundID; // 0
    bool assumeSuccess;    // 4
    std::int8_t state;     // 5
};
static_assert(sizeof(BSSoundHandle) == 0x8);
} // namespace RE

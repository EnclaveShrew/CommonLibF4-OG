#pragma once

#include "RE/Bethesda/TESObjectREFRs.h"

namespace RE
{
class Actor;

namespace CombatFormulas
{
[[nodiscard]] inline float GetWeaponDisplayAccuracy(const BGSObjectInstanceT<TESObjectWEAP> &a_weapon, Actor *a_actor)
{
    using func_t = decltype(&CombatFormulas::GetWeaponDisplayAccuracy);
    REL::Relocation<func_t> func{REL::ID(1137654)};
    return func(a_weapon, a_actor);
}

[[nodiscard]] inline float GetWeaponDisplayDamage(const BGSObjectInstanceT<TESObjectWEAP> &a_weapon, const TESAmmo *a_ammo, float a_condition)
{
    using func_t = decltype(&CombatFormulas::GetWeaponDisplayDamage);
    REL::Relocation<func_t> func{REL::ID(1431014)};
    return func(a_weapon, a_ammo, a_condition);
}

[[nodiscard]] inline float GetWeaponDisplayRange(const BGSObjectInstanceT<TESObjectWEAP> &a_weapon)
{
    using func_t = decltype(&CombatFormulas::GetWeaponDisplayRange);
    REL::Relocation<func_t> func{REL::ID(1324037)};
    return func(a_weapon);
}

[[nodiscard]] inline float GetWeaponDisplayRateOfFire(const TESObjectWEAP &a_weapon, const TESObjectWEAP::InstanceData *a_data)
{
    using func_t = decltype(&CombatFormulas::GetWeaponDisplayRateOfFire);
    REL::Relocation<func_t> func{REL::ID(1403591)};
    return func(a_weapon, a_data);
}

[[nodiscard]] inline double CalculateAimModelWobble(Actor *a_actor)
{
    using func_t = decltype(&CombatFormulas::CalculateAimModelWobble);
    static REL::Relocation<func_t> func{REL::ID(211411)};
    return func(a_actor);
}

[[nodiscard]] inline float CalcResistedPercentage(const ActorValueInfo *a_avif, float a_damage, float a_value)
{
    using func_t = decltype(&CombatFormulas::CalcResistedPercentage);
    static REL::Relocation<func_t> func{REL::ID(420470)};
    return func(a_avif, a_damage, a_value);
}

[[nodiscard]] inline float CalcTargetedLimbDamage(RE::Actor *a_actor, const RE::BGSBodyPart *a_bodyPart, float a_baseDamage, RE::BSTArray<RE::BSTTuple<RE::TESForm *, RE::BGSTypedFormValuePair::SharedVal>> *a_damageTypes)
{
    using func_t = decltype(&CombatFormulas::CalcTargetedLimbDamage);
    static REL::Relocation<func_t> func{REL::ID(1530751)};
    return func(a_actor, a_bodyPart, a_baseDamage, a_damageTypes);
}
} // namespace CombatFormulas
} // namespace RE

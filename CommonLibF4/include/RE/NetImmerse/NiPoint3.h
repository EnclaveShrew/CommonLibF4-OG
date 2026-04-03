#pragma once

namespace RE
{
class NiPoint3
{
  public:
    using value_type = float;
    using size_type = std::size_t;
    using reference = value_type &;
    using const_reference = const value_type &;
    using pointer = value_type *;
    using const_pointer = const value_type *;

    reference operator[](size_type a_pos) noexcept;
    const_reference operator[](size_type a_pos) const noexcept;
    bool operator==(const NiPoint3 &a_rhs) const;
    bool operator!=(const NiPoint3 &a_rhs) const;
    NiPoint3 operator+(const NiPoint3 &a_rhs) const;
    NiPoint3 operator-(const NiPoint3 &a_rhs) const;
    float operator*(const NiPoint3 &a_rhs) const;
    NiPoint3 operator*(float a_scalar) const;
    NiPoint3 operator/(float a_scalar) const;
    NiPoint3 operator-() const;
    NiPoint3 &operator+=(const NiPoint3 &a_rhs);
    NiPoint3 &operator-=(const NiPoint3 &a_rhs);
    NiPoint3 &operator*=(const NiPoint3 &a_rhs);
    NiPoint3 &operator/=(const NiPoint3 &a_rhs);
    NiPoint3 &operator*=(float a_scalar);
    NiPoint3 &operator/=(float a_scalar);

    [[nodiscard]] NiPoint3 Cross(const NiPoint3 &pt) const;
    [[nodiscard]] float Dot(const NiPoint3 &pt) const;
    [[nodiscard]] float GetDistance(const NiPoint3 &a_pt) const noexcept;
    [[nodiscard]] float GetSquaredDistance(const NiPoint3 &a_pt) const noexcept;
    [[nodiscard]] float Length() const;
    [[nodiscard]] float SqrLength() const;
    [[nodiscard]] NiPoint3 UnitCross(const NiPoint3 &a_pt) const;
    [[nodiscard]] float GetZAngleFromVector();
    float Unitize();

    // members
    value_type x{0.0F}; // 0
    value_type y{0.0F}; // 4
    value_type z{0.0F}; // 8
};
static_assert(sizeof(NiPoint3) == 0xC);

class alignas(0x10) NiPoint3A : public NiPoint3
{
  public:
};
static_assert(sizeof(NiPoint3A) == 0x10);
} // namespace RE

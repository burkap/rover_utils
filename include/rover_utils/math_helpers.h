/**
 * @author B. Burak Payzun
 * @date 2022-01-01
 * 
 */

#ifndef ROVER_MATH_HELPERS_H
#define ROVER_MATH_HELPERS_H

#define RAD_TO_DEG 57.3248407643
#define DEG_TO_RAD 0.01744444444

namespace rover
{
  /**
 * @brief Clamps the given value between the given upper and lower boundaries.
 * 
 * @param value Value to bound in between the range.
 * @param lower The lower value of given range.
 * @param upper The upper value of given range.
 * @return The result between the upper and lower values.
 */
  double clamp(double value, double lower, double upper)
  {
    return std::max(lower, std::min(value, upper));
  }

  /**
 * @brief Linearly interpolate between two values. 
 * 
 * @param a Start value
 * @param b End value
 * @param t Value to interpolate between a and b. Should be in between 0 and 1.
 * @return Interpolated value.
 */
  inline double lerp(double a, double b, double t)
  {
    return a + (b - a) * t;
  }

  /**
 * @brief Re-maps a value from one range to another.
 * 
 * For example, map(50, 0, 100, 200, 300) returns 250.
 * 
 * @param value The value to re-map.
 * @param current_from Lower boundary of current range.
 * @param current_to Upper boundary of current range.
 * @param target_from Lower boundary of target range.
 * @param target_to Upper boundary of target range.
 * @return double Re-mapped value.
 */
  inline double map(double value, double current_from, double current_to, double target_from, double target_to)
  {
    return target_from + (value - current_from) / (current_to - current_from) * (target_to - target_from);
  }

} // namespace rover
#endif //
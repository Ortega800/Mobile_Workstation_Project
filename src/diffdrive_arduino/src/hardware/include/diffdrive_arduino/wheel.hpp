#ifndef DIFFDRIVE_ARDUINO_WHEEL_HPP
#define DIFFDRIVE_ARDUINO_WHEEL_HPP

#include <string>
#include <cmath>


class Wheel
{
    public:

    std::string name = "";
    double cmd = 0;
    double pos = 0;
    double vel = 0;
    long tach = 0;

    /* Radius of wheels: 0.0735 meters
     * Pi: 3.141526535
     * Encoder counts per revolution: 6
     */
    const double metersPerCount = (0.0735 * 2 * 3.141526535) / 6;
    
    /* Variables below are not needed since we won't be returning state values to the controller.
    int enc = 0;
    double rads_per_count = 0;
    */

    Wheel() = default;

    Wheel(const std::string &wheel_name)
    {
      name = wheel_name;
    }

    
    void setup(const std::string &wheel_name)
    {
      name = wheel_name;
    }
};


#endif // DIFFDRIVE_ARDUINO_WHEEL_HPP

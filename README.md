# Punctum Lucis

This is a repo for a laser light pointing project for  the Hackaday 2026 Frikkin Lasers Contest.

Idea: A device that uses a laser pointer to point at the exact correct direction of orbiting celestial bodies, artificial satellites, and even potentially overhead flying objects (commercial flights).

## Thoughts:

- This would need to be realtime otherwise, what's the point?
- Necessary requirements:
    - Internet connectivity for real-time lookup of objects
        - Some form of html parsing or database 
    - User interface to select objects
    - This also implies the device knows where it is: GPS
    - The device will need to know where it is pointed:
        - Heading: Magnetometer
        - Orientation: IMU
        - 9 dof?
    - Motion 
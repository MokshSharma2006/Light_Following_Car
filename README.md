# Light Following Car

🚗 Light-Following Robot Car – Arduino-Based Self Project
This is a self-led robotics project where I built a light-following robot car using an Arduino Uno R3. The car is capable of detecting the direction of a light source using three LDR (Light Dependent Resistor) sensors, and autonomously moves toward it by controlling four gear motors.

🔧 Components Used:
Arduino Uno R3 – Microcontroller board for processing sensor data and controlling motors

L293D Motor Driver Shield – Controls the direction and speed of the gear motors

3 LDR Sensors – Detect ambient light intensity for directional control

4 Gear Motors with Wheels – Enable movement and turning

2 x 18650 Li-ion Batteries (3.7V) – Provide portable power supply

AFMotor Library – Used to program motor functions easily

🧠 How It Works:
The LDR sensors constantly monitor light intensity from three directions: left, center, and right.

The Arduino compares the sensor readings and determines where the brightest light is.

Based on the readings, the car adjusts its movement to turn or move forward toward the light.

The motor driver shield, controlled by the AFMotor library, ensures precise motor operation.

🚀 Skills Practiced:
Embedded programming (Arduino C++)

Sensor integration and analog data handling

Motor control and power management

Circuit design and autonomous system logic

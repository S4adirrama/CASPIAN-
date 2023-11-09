ROV "Caspian" - Dead Body Detection
Overview
"Caspian" is an Remotely Operated Vehicle (ROV) designed for underwater dead body detection using the YOLO v5 (You Only Look Once) object detection framework. The ROV is equipped with a stereocamera for precise camera calibration, enhancing accuracy in detecting and localizing objects in the underwater environment.

Features
Dead Body Detection: Utilizes YOLO v5 for real-time detection of dead bodies in underwater scenarios.
Stereocamera Calibration: Employs a stereocamera setup to enhance calibration accuracy, compensating for underwater distortions.
Navigation: Equipped with advanced navigation capabilities for efficient exploration of underwater environments.
Communication: Utilizes a 5-10 meter data cable for seamless communication between the ROV and the surface.
Requirements
YOLO v5: The YOLO v5 framework for object detection.
Stereocamera: A stereoscopic camera setup for accurate camera calibration.
Arduino Nano: Microcontroller for controlling various components.
Servo Motors: Used for maneuvering and controlling the ROV body.
2 Turbines: Propulsion system for underwater movement.
Installation
YOLO v5 Installation:

Follow the installation instructions for YOLO v5 from the official GitHub repository.
Arduino Nano Setup:

Connect the Arduino Nano to the control system, ensuring proper wiring for servo motors and other components.
Stereocamera Calibration:

Use the stereocamera calibration procedure provided in the repository to enhance the accuracy of object detection.
Data Cable Connection:

Connect the 7.5-meter data cable to establish communication between the ROV and the surface control system.
Usage
Run YOLO v5:
Launch the YOLO v5 framework on the control system with the specified configuration for dead body detection.
bash
Copy code
python detect.py --source <source_path> --weights <weights_path> --conf 0.5
Underwater Exploration:

Deploy the ROV "Caspian" into the underwater environment to explore and detect dead bodies in real-time.
Monitor Results:

Monitor the detection results on the surface control system for effective decision-making.
Notes
Ensure proper calibration of the stereocamera before deployment to mitigate underwater distortions.
Regularly check and maintain the ROV components, including servo motors and turbines, for optimal performance.
Consider safety protocols and legal regulations when deploying the ROV for specific applications.
Contributors
[Ramazan Sadir]


---
layout: page
title: Results
permalink: /results/
---

<iframe width="357" height="634" src="https://www.youtube.com/embed/y5Qfcjh6fBQ" title="Guarded Safe" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>


Our final product meets all the specifications we laid out. The system can take user input via the keypad, track users using a ToF sensor, and shoot the user or open a box with servos. The keypad, ToF sensor, and servos are able to carry out their duties reliably. Initially, the FPGA had a bug where a user holding down a key and pressing another button in the column resulted in an additional keypress being registered to the initial button pressed. This bug was eliminated so that the keypad functions as expected. The communication with the ToF sensor is reliable: the distance of the user is quickly and accurately read, from when they enter the range of the ToF sensor to when they leave it. The servos used to open the guarded safe, turn the water gun and fire the water gun were consistent through use testing. They accurately track the target, solidly fire the water gun and open the box. The system is not perfect. Namely, the lack of waterproofing makes it risky to run a water gun near the electronics, and wire routing of the sensors and servos could be improved. However, we are happy with the final product. 

# **CarND-PID-Control-Project** 

## Writeup
---

**PID Control Project**
* This repository conatins the implementation of a PID controller for steering angle and speed in c++
* This project is part Udacity self driving car nanodegree.

The PID controller Parameters effect on the steering angle are as follows:
* The proportional term acts proportionnaly to the cte values it allows to reach the desired value, this term should be choosen carefully because overshoots could cause the car to lose the track.

* The derivative term is the reaction term, it is proportional to the change of cte and is an important parameter in this application because of the dynamics of the car on the track that affects the desired angle.

* The Integrator term is proportinal to the sum of the cte, this term must be neglected in this application because the sum of the errors is high due to the dynamics of the car and the track. This term palys a role only when the car reachs static state(i.e long straigh road) which is not possible in this track.

The PID controller is tuned manually, starting with a low value of P and a higher value of D, while the I term is set to a very low value and not tuned for the reasons mentionned early.

To make the car more stable on the road and to avoid continuos acceleration a PID controller is added to control the speed.

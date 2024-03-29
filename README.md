# Mechatronics Project

This repository contains the code for my Mechatronics group project.
It is basically a football penalty game, where two players compete against each other.

## How to play: 

Player 1 controls the cannon that shoots the ball. The cannon makes use of two servo motors, one to adjust the angle of the shot and the other to trigger the cannon and release the football.

Player 2 controls the goalkeeper. The goalkeeper uses a rack and pinion setup connected to a DC motor to move the goalkeeper left and right, and a servo motor to make the goalkeeper dive in the position he is in. 

Both players control their actions with the use of joysticks. Player 1 uses one joystick, and player 2 has two. 

## Scoring: 

The score is calculated with the use of an ultrasonic sensor, which detects changes in the distance from the surface in front of it. Once a goal is scored, the ball is fed down a funnel and lands in front of the ultrasonic sensor, causing a decrease in the distance measured by it and the score is incremented by 1. The Arduino then goes into a delay of 10 seconds so as to allow the players to reload the ball into the cannon..


## A few videos demonstrating the game:

https://user-images.githubusercontent.com/57823333/134794405-bf468370-f05a-4d0d-a036-7de8418de3e3.mp4


https://user-images.githubusercontent.com/57823333/134794589-6c0d4912-10b2-4768-b580-e33521e5ab50.mp4


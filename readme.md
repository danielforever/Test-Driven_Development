# Test-Driven Development

## Part 2 Authors

Driver: Abhinav
Navigator: Chang 

## Below is the class diagram for our PID controller

![alt text](https://github.com/danielforever/Test-Driven_Development_Pair2/blob/master/images/class_diagram.jpg?raw=true)

## Below is the activity diagram for our PID controller

![alt text](https://github.com/danielforever/Test-Driven_Development_Pair2/blob/master/images/Activity_diagram.jpg?raw=true)

## PID fomula

![alt text](https://github.com/danielforever/Test-Driven_Development_Pair2/blob/master/images/PID_fomula.jpg?raw=true)

Above is the fomula that needed for this implementation

u(t)	=	PID control variable

Kp	=	proportional gain

e(t)	=	error value

Ki	=	integral gain

de	=	change in error value

dt	=	change in time

## This is the pair-programming roles

![alt text](https://github.com/danielforever/Test-Driven_Development_Pair2/blob/master/images/pair_role.jpg?raw=true)

## Build file

mkdir build && cd build

cmake ..

make


## Run test

cd build/test

./cpp-test

# To do list :

1. We have to replace EXPECT_EQ with EXPECT_DOUBLE_EQ since we were facing problems with precision as the test case was not satisfied even if the result and expected result was "26.11001" and "26.1100100001"

2. For the third test case in case 3 we had to replace EXPECT_EQ with EXPECT_NEAR since we were facing the same issue of precision.

# Additional Test

1. EXPECT_DOUBLE_EQ(pid.compute(75.0,0.1),7.5); // to verify the function if error is large.

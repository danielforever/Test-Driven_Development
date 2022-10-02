# Below is the class diagram for our PID controller

https://drive.google.com/file/d/1MeQuLjsB8RfATyr2Ad50IrfAGODJQ3aA/view?usp=sharing

# PID fomula

![alt text](https://github.com/danielforever/Test-Driven_Development_Pair2/PID_fomula.jpg?raw=true)

Above is the fomula that needed for this implementation

u(t)	=	PID control variable
K_{p}	=	proportional gain
e(t)	=	error value
K_{i}	=	integral gain
{de}	=	change in error value
{dt}	=	change in time

# build file

mkdir build && cd build

cmake ..

make


# run test

cd build/test

./cpp-test


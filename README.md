# CMSC441Project

Group Member:
Myunghoon Cha
Jason Reckner
Matt Mangee

Progress Report
https://docs.google.com/document/d/1PO1W4ZdfBqBbq8ROVMgjB6G-rJ26EJ51fdB-3N8BWBU/edit?usp=sharing

   Update 2022-03-20
   ※ printMatirx() function in matrix.cpp
   ※ it makes errors when tried to print out the result of starssen
   ※ Cut-off for Starssen algorithm is 256
   ※ if matrix size is less than 256 it's same as basicmatrix function.

   ※ Formula of memory usage of matrices:
   ※ Basic Matrix Multiplication = A + B + C
   ※ A, B, C = matrixSize * matrixSize * sizeof(double*)
   ※ Strassen = A + B + D
   ※ D = (21) * A/2
 
When cut-off for Strassen is 2 it takes more time than Basic matrix Multiplication.

| Size| BasicT| StarssenT| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 6| 44| 2400| 6600| 
| 20| 37| 147| 9600| 26400| 
| 40| 284| 1057| 38400| 105600| 
| 80| 2367| 7570| 153600| 422400| 
| 160| 18648| 52923| 614400| 1.6896e+06| 
| 320| 154942| 372781| 2.4576e+06| 6.7584e+06| 
| 640| 1.22297e+06| 2.63157e+06| 9.8304e+06| 2.70336e+07|
  
| Size | BasicT | StarssenT | BasicM | StarssenM |
| -: | -: | -: | -: | -: | 
| 10| 6| 24| 2400| 6600| 
| 30| 121| 591| 21600| 59400| 
| 90| 3337| 7923| 194400| 534600| 
| 270| 89969| 326250| 1.7496e+06| 4.8114e+06| 
| 810| 2.53586e+06| 8.75232e+06| 1.57464e+07| 4.33026e+07| 
| 2430| 1.75766e+08| 1.17091e+08| 1.41718e+08| 3.89723e+08|\

| Size| BasicT| StarssenT| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 2| 1| 1| 96| 96| 
| 4| 1| 5| 384| 1056| 
| 8| 3| 22| 1536| 4224| 
| 16| 24| 163| 6144| 16896| 
| 32| 158| 1007| 24576| 67584| 
| 64| 1183| 6685| 98304| 270336| 
| 128| 9559| 46353| 393216| 1.08134e+06| 
| 256| 76790| 325541| 1.57286e+06| 4.32538e+06| 
| 512| 636525| 2.30459e+06| 6.29146e+06| 1.73015e+07| 
| 1024| 5.96127e+06| 1.61324e+07| 2.51658e+07| 6.9206e+07|

When cut-off for Strassen is 256

| Size| BasicT| StarssenT| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 6| 7| 2400| 2400| 
| 20| 37| 35| 9600| 9600| 
| 40| 287| 280| 38400| 38400| 
| 80| 2390| 2352| 153600| 153600| 
| 160| 18716| 18376| 614400| 614400| 
| 320| 150219| 132103| 2.4576e+06| 6.7584e+06| 
| 640| 1.20853e+06| 942650| 9.8304e+06| 2.70336e+07| 

| Size| BasicT| StarssenT| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 6| 5| 2400| 2400| 
| 30| 121| 120| 21600| 21600| 
| 90| 3269| 3327| 194400| 194400| 
| 270| 89723| 79612| 1.7496e+06| 4.8114e+06| 
| 810| 2.57341e+06| 1.87967e+06| 1.57464e+07| 4.33026e+07| 
| 2430| 1.74448e+08| 3.92443e+07| 1.41718e+08| 3.89723e+08| 

| Size| BasicT| StarssenT| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 2| 1| 1| 96| 96| 
| 4| 1| 0| 384| 384| 
| 8| 3| 3| 1536| 1536| 
| 16| 19| 18| 6144| 6144| 
| 32| 147| 144| 24576| 24576| 
| 64| 1204| 1173| 98304| 98304| 
| 128| 9767| 9457| 393216| 393216| 
| 256| 76655| 75451| 1.57286e+06| 1.57286e+06| 
| 512| 620175| 538452| 6.29146e+06| 1.73015e+07| 
| 1024| 6.1007e+06| 3.81094e+06| 2.51658e+07| 6.9206e+07| 

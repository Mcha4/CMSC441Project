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

When cut-off k = 256
| Size| BasicT| StarssenT| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 5| 5| 0| 0| 
| 20| 36| 36| 0| 0| 
| 30| 120| 123| 0| 0| 
| 40| 307| 284| 0| 0| 
| 50| 764| 559| 0| 0| 
| 60| 954| 1002| 0| 0| 
| 70| 1645| 1584| 0| 0| 
| 80| 2890| 2915| 0| 0| 
| 90| 3418| 3270| 0| 0| 
| 100| 4647| 4610| 0| 0| 
| 200| 37510| 37357| 0| 0| 
| 300| 127290| 115599| 0| 0| 
| 400| 309941| 271523| 0| 0| 
| 500| 630999| 544498| 0| 0| 
| 600| 1.13851e+06| 821008| 0| 0| 
| 700| 1.78481e+06| 1.33136e+06| 0| 0| 
| 800| 2.78928e+06| 1.93565e+06| 0| 0| 
| 900| 4.03224e+06| 2.81273e+06| 0| 0| 
| 1000| 6.96697e+06| 3.81864e+06| 0| 0| 
| 1100| 8.49469e+06| 4.45249e+06| 0| 0|

When k = 64
| Size| BasicT(s)| StarssenT(s)| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 7e-06| 6e-06| 0| 0| 
| 20| 3.6e-05| 3.6e-05| 0| 0| 
| 30| 0.000154| 0.00017| 0| 0| 
| 40| 0.000327| 0.000331| 0| 0| 
| 50| 0.000651| 0.000702| 0| 0| 
| 60| 0.00109| 0.001102| 0| 0| 
| 70| 0.001611| 0.001663| 0| 0| 
| 80| 0.002308| 0.002898| 0| 0| 
| 90| 0.004327| 0.004353| 0| 0| 
| 100| 0.004666| 0.004244| 0| 0| 
| 200| 0.036888| 0.032429| 0| 0| 
| 300| 0.128606| 0.09548| 0| 0| 
| 400| 0.303892| 0.225897| 0| 0| 
| 500| 0.595534| 0.426045| 0| 0| 
| 600| 1.04542| 0.68181| 0| 0| 
| 700| 1.7577| 1.05217| 0| 0| 
| 800| 2.62757| 1.60711| 0| 0| 
| 900| 4.01656| 2.22362| 0| 0| 
| 1000| 5.93358| 3.00345| 0| 0| 
| 2000| 89.8995| 21.075| 0| 0|

When k = 128
| Size| BasicT(s)| StarssenT(s)| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 6e-06| 5e-06| 0| 0| 
| 20| 3.6e-05| 4.6e-05| 0| 0| 
| 30| 0.000121| 0.00012| 0| 0| 
| 40| 0.000283| 0.000286| 0| 0| 
| 50| 0.000596| 0.000562| 0| 0| 
| 60| 0.000966| 0.001046| 0| 0| 
| 70| 0.001694| 0.001528| 0| 0| 
| 80| 0.002288| 0.002319| 0| 0| 
| 90| 0.003264| 0.003261| 0| 0| 
| 100| 0.004644| 0.004696| 0| 0| 
| 200| 0.03933| 0.034179| 0| 0| 
| 300| 0.128342| 0.10322| 0| 0| 
| 400| 0.302051| 0.247109| 0| 0| 
| 500| 0.606648| 0.47604| 0| 0| 
| 600| 1.09742| 0.763444| 0| 0| 
| 700| 1.89608| 1.21784| 0| 0| 
| 800| 3.26534| 1.74706| 0| 0| 
| 900| 4.38828| 2.42909| 0| 0| 
| 1000| 6.33066| 3.33954| 0| 0| 
| 2000| 90.9834| 23.9197| 0| 0|

When k = 256
| Size| BasicT(s)| StarssenT(s)| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 6e-06| 4e-06| 0| 0| 
| 20| 4e-05| 3.6e-05| 0| 0| 
| 30| 0.00012| 0.00014| 0| 0| 
| 40| 0.000284| 0.000364| 0| 0| 
| 50| 0.000556| 0.00057| 0| 0| 
| 60| 0.001093| 0.001321| 0| 0| 
| 70| 0.001758| 0.001535| 0| 0| 
| 80| 0.002327| 0.002285| 0| 0| 
| 90| 0.003354| 0.003453| 0| 0| 
| 100| 0.004692| 0.004675| 0| 0| 
| 200| 0.038351| 0.037607| 0| 0| 
| 300| 0.129374| 0.117204| 0| 0| 
| 400| 0.304898| 0.26998| 0| 0| 
| 500| 0.602853| 0.527025| 0| 0| 
| 600| 1.0636| 0.822871| 0| 0| 
| 700| 1.70656| 1.29488| 0| 0| 
| 800| 2.70673| 1.96645| 0| 0| 
| 900| 4.66287| 2.74339| 0| 0| 
| 1000| 6.63951| 3.89655| 0| 0| 
| 2000| 86.4496| 26.5857| 0| 0| 

When k = 512
| Size| BasicT(s)| StarssenT(s)| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 1.7e-05| 1.4e-05| 0| 0| 
| 20| 3.6e-05| 3.6e-05| 0| 0| 
| 30| 0.000121| 0.00012| 0| 0| 
| 40| 0.000285| 0.000283| 0| 0| 
| 50| 0.000557| 0.000564| 0| 0| 
| 60| 0.000965| 0.00101| 0| 0| 
| 70| 0.001546| 0.001714| 0| 0| 
| 80| 0.002594| 0.002277| 0| 0| 
| 90| 0.003329| 0.003332| 0| 0| 
| 100| 0.004586| 0.004562| 0| 0| 
| 200| 0.03689| 0.039553| 0| 0| 
| 300| 0.128606| 0.132267| 0| 0| 
| 400| 0.303207| 0.303017| 0| 0| 
| 500| 0.597752| 0.614256| 0| 0| 
| 600| 1.0535| 0.922319| 0| 0| 
| 700| 1.76083| 1.46355| 0| 0| 
| 800| 2.6504| 2.13529| 0| 0| 
| 900| 3.93738| 3.04437| 0| 0| 
| 1000| 5.82148| 4.2305| 0| 0| 
| 2000| 89.7206| 30.2611| 0| 0|

When k = 1024
| Size| BasicT(s)| StarssenT(s)| BasicM| StarssenM | 
| -: | -: | -: | -: | -: |
| 10| 5e-06| 5e-06| 0| 0| 
| 20| 3.6e-05| 3.6e-05| 0| 0| 
| 30| 0.000184| 0.000143| 0| 0| 
| 40| 0.000285| 0.000283| 0| 0| 
| 50| 0.000564| 0.000562| 0| 0| 
| 60| 0.000968| 0.000986| 0| 0| 
| 70| 0.001548| 0.001585| 0| 0| 
| 80| 0.002325| 0.002298| 0| 0| 
| 90| 0.003312| 0.004684| 0| 0| 
| 100| 0.006276| 0.005925| 0| 0| 
| 200| 0.037151| 0.038854| 0| 0| 
| 300| 0.127604| 0.128633| 0| 0| 
| 400| 0.305863| 0.303339| 0| 0| 
| 500| 0.615414| 0.621| 0| 0| 
| 600| 1.09139| 1.05904| 0| 0| 
| 700| 1.71993| 1.71364| 0| 0| 
| 800| 2.63895| 2.77378| 0| 0| 
| 900| 4.19567| 4.01056| 0| 0| 
| 1000| 5.94092| 5.77697| 0| 0| 
| 2000| 83.6326| 42.789| 0| 0|
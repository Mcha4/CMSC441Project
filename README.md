# CMSC441Project

Group Member:
Myunghoon Cha
Jason Reckner
Matt Mangee


To compile the program
   make main
To run program
   ./main


Table #1 
| Size| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 6e-06| 5e-06| 5e-06| 5e-06| 0| 1200| 1200| 1200| 1200| 1200| 
| 20| 3.6e-05| 3.6e-05| 3.6e-05| 3.6e-05| 0| 4800| 4800| 4800| 4800| 4800| 
| 30| 0.000124| 0.00012| 0.00012| 0.00012| 0| 10800| 10800| 10800| 10800| 10800| 
| 40| 0.000283| 0.000404| 0.000346| 0.000285| 0| 19200| 30400| 19200| 19200| 19200| 
| 50| 0.000613| 0.000931| 0.000676| 0.00089| 0| 30000| 47500| 30000| 30000| 30000| 
| 60| 0.001195| 0.001039| 0.001243| 0.001592| 0| 43200| 68400| 43200| 43200| 43200| 
| 70| 0.001577| 0.001602| 0.001549| 0.001614| 0| 58800| 149744| 93100| 58800| 58800| 
| 80| 0.004677| 0.003548| 0.00222| 0.004096| 0| 76800| 200000| 121600| 76800| 76800| 
| 90| 0.004371| 0.004278| 0.004934| 0.005767| 0| 97200| 248764| 153900| 97200| 97200| 
| 100| 0.005309| 0.006091| 0.005338| 0.004603| 0| 120000| 312500| 190000| 120000| 120000| 
| 200| 0.060089| 0.058842| 0.047524| 0.046592| 0| 480000| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.181441| 0.15427| 0.135446| 0.14836| 0| 1.08e+06| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.444056| 0.403517| 0.383403| 0.381197| 0| 1.92e+06| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.954515| 0.760628| 0.613373| 0.653942| 0| 3e+06| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 1.82447| 1.17049| 1.04966| 1.03719| 0| 4.32e+06| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 3.07363| 1.81263| 1.54944| 1.63413| 0| 5.88e+06| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 4.69042| 2.81758| 2.3566| 2.4562| 0| 7.68e+06| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 6.96996| 3.90711| 3.36668| 3.48236| 0| 9.72e+06| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 9.72785| 5.52214| 4.38685| 4.8443| 0| 1.2e+07| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07|

| Size| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 6e-06| 5e-06| 5e-06| 5e-06| 5e-06| 1200| 1200| 1200| 1200| 1200| 
| 20| 3.7e-05| 3.6e-05| 3.7e-05| 3.6e-05| 3.6e-05| 4800| 4800| 4800| 4800| 4800| 
| 30| 0.00012| 0.00012| 0.00012| 0.000137| 0.00012| 10800| 10800| 10800| 10800| 10800| 
| 40| 0.000283| 0.000421| 0.000416| 0.000391| 0.000346| 19200| 30400| 19200| 19200| 19200| 
| 50| 0.000645| 0.000625| 0.000717| 0.000615| 0.000553| 30000| 47500| 30000| 30000| 30000| 
| 60| 0.001015| 0.001017| 0.001023| 0.001037| 0.001678| 43200| 68400| 43200| 43200| 43200| 
| 70| 0.003846| 0.001746| 0.001951| 0.001581| 0.0016| 58800| 149744| 93100| 58800| 58800| 
| 80| 0.002357| 0.002643| 0.004971| 0.002842| 0.002633| 76800| 200000| 121600| 76800| 76800| 
| 90| 0.003473| 0.004834| 0.005452| 0.004619| 0.007314| 97200| 248764| 153900| 97200| 97200| 
| 100| 0.00615| 0.007135| 0.006409| 0.007726| 0.006609| 120000| 312500| 190000| 120000| 120000| 
| 200| 0.054979| 0.041635| 0.047736| 0.052765| 0.046904| 480000| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.190412| 0.13096| 0.153217| 0.161634| 0.173355| 1.08e+06| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.479931| 0.348555| 0.33237| 0.331103| 0.397362| 1.92e+06| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.882636| 0.576539| 0.582489| 0.65514| 0.737959| 3e+06| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 1.90982| 1.01504| 1.01115| 1.04933| 1.1852| 4.32e+06| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 3.06262| 1.4897| 1.45726| 1.57833| 1.88331| 5.88e+06| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 4.78428| 2.27995| 2.26625| 2.54107| 2.65729| 7.68e+06| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 7.03496| 3.25404| 3.1725| 3.45457| 3.91534| 9.72e+06| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 9.71187| 4.23671| 4.24827| 4.88177| 5.28274| 1.2e+07| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07| 
| 1100| 13.0672| 6.10663| 5.72752| 5.64174| 6.31795| 1.452e+07| 3.2169e+08| 1.85688e+08| 1.07972e+08| 6.35636e+07| 
| 1200| 21.7014| 6.90988| 6.86616| 7.44682| 8.261| 1.728e+07| 3.74401e+08| 2.21928e+08| 1.29892e+08| 7.587e+07| 
| 1300| 29.4807| 9.16544| 8.75183| 9.33139| 10.3755| 2.028e+07| 4.47634e+08| 2.59396e+08| 1.51831e+08| 8.88193e+07| 
| 1400| 36.5375| 10.4909| 10.5644| 11.6201| 13.0104| 2.352e+07| 5.07798e+08| 3.00265e+08| 1.7596e+08| 1.03268e+08| 
| 1500| 42.5397| 10.0503| 9.62977| 10.6339| 11.8668| 2.7e+07| 5.92555e+08| 3.43609e+08| 2.01355e+08| 1.1829e+08| 
| 1600| 51.7494| 12.4743| 12.1677| 13.2365| 14.3957| 3.072e+07| 6.93112e+08| 3.9899e+08| 2.3092e+08| 1.3488e+08| 
| 1700| 62.565| 13.9901| 14.3992| 15.6579| 17.1698| 3.468e+07| 7.66853e+08| 4.4873e+08| 2.59886e+08| 1.51976e+08| 
| 1800| 58.6331| 16.8558| 16.8229| 18.2407| 20.3074| 3.888e+07| 8.70954e+08| 5.02007e+08| 2.9118e+08| 1.70708e+08| 
| 1900| 62.5192| 18.5255| 19.8546| 21.3707| 23.7768| 4.332e+07| 9.53394e+08| 5.57623e+08| 3.23602e+08| 1.89876e+08| 
| 2000| 72.5415| 22.3033| 22.6837| 25.1951| 27.8881| 4.8e+07| 1.07148e+09| 6.19237e+08| 3.60812e+08| 2.1075e+08| 
| 2500| 157.079| 42.3089| 42.1896| 43.6641| 48.1885| 7.5e+07| -1.41839e+09| 1.68738e+09| 9.71607e+08| 5.62591e+08| 
| 3000| 309.87| 69.5152| 67.2939| 74.5664| 82.3964| 1.08e+08| -1.65084e+08| -1.9077e+09| 1.39148e+09| 8.1003e+08| 
| 3500| 386.918| 107.087| 107.183| 118.401| 130.564| 1.47e+08| 1.37872e+09| -1.02273e+09| 1.89998e+09| 1.10124e+09| 
| 4000| 574.728| 156.439| 157.841| 176.506| 194.656| 1.92e+08| -1.12158e+09| 7.69123e+06| -1.80128e+09| 1.44325e+09| 

| Row&Col| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 0| 0| 0| 0| 0| 1200| 1200| 1200| 1200| 1200| 
| 20| 0| 0| 0| 0| 0| 4800| 4800| 4800| 4800| 4800| 
| 30| 0| 0| 0| 0| 0| 10800| 10800| 10800| 10800| 10800| 
| 40| 0| 0| 0| 0| 0| 19200| 30400| 19200| 19200| 19200| 
| 50| 0| 0| 0| 0| 0| 30000| 47500| 30000| 30000| 30000| 
| 60| 0| 0| 0| 0| 0| 43200| 68400| 43200| 43200| 43200| 
| 70| 0| 0| 0| 0| 0| 58800| 149744| 93100| 58800| 58800| 
| 80| 0| 0| 0| 0| 0| 76800| 200000| 121600| 76800| 76800| 
| 90| 0| 0| 0| 0| 0| 97200| 248764| 153900| 97200| 97200| 
| 100| 0| 0| 0| 0| 0| 120000| 312500| 190000| 120000| 120000| 
| 200| 0| 0| 0| 0| 0| 480000| 2107500| 1250000| 760000| 480000| 
| 300| 0| 0| 0| 0| 0| 1080000| 7802464| 4690768| 2812500| 1710000| 
| 400| 0| 0| 0| 0| 0| 1920000| 14432500| 8430000| 5000000| 3040000| 
| 500| 0| 0| 0| 0| 0| 3000000| 22315912| 13086468| 7812500| 4750000| 
| 600| 1| 0| 0| 0| 0| 4320000| 53897248| 32115376| 18967500| 11250000| 
| 700| 2| 1| 1| 1| 1| 5880000| 73102512| 43454964| 25697168| 15312500| 
| 800| 3| 1| 1| 1| 2| 7680000| 99747500| 57730000| 33720000| 20000000| 
| 900| 5| 2| 2| 2| 2| 9720000| 125347764| 72641012| 42522868| 25312500| 
| 1000| 7| 3| 3| 3| 3| 12000000| 154211384| 89605276| 52687500| 31250000| 
| 1100| 8| 4| 4| 4| 4| 14520000| 321690276| 185688032| 107972464| 63563568| 
| 1200| 16| 5| 5| 5| 6| 17280000| 374400736| 221927632| 129892500| 75870000| 
| 1300| 22| 6| 6| 7| 7| 20280000| 447634312| 259395912| 151831112| 88819268| 
| 1400| 29| 7| 8| 8| 9| 23520000| 507797584| 300264748| 175960176| 103267500| 
| 1500| 34| 9| 9| 10| 11| 27000000| 592554696| 343609412| 201354964| 118289968| 
| 1600| 46| 12| 12| 13| 14| 30720000| 693112500| 398990000| 230920000| 134880000| 
| 1700| 56| 13| 14| 15| 17| 34680000| 766852560| 448729664| 259886212| 151975668| 
| 1800| 54| 16| 16| 18| 20| 38880000| 870954348| 502007084| 291180076| 170707500| 
| 1900| 64| 18| 19| 21| 24| 43320000| 953394368| 557623132| 323602464| 189876368| 
| 2000| 74| 22| 22| 25| 27| 48000000| 1071479688| 619236932| 360812500| 210750000| 
| 2500| 134| 39| 39| 41| 45| 75000000| -1418388124| 1687383080| 971606564| 562591412| 
| 3000| 267| 65| 63| 70| 78| 108000000| -165084424| -1907701412| 1391484748| 810029776| 
| 3500| 343| 100| 100| 112| 123| 147000000| 1378720360| -1022731028| 1899978332| 1101242464| 
| 4000| 496| 147| 150| 167| 185| 192000000| -1121576776| 7691228| -1801279796| 1443250000|

| Row&Col| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 7e-06| 6e-06| 6e-06| 7e-06| 6e-06| 1200| 1200| 1200| 1200| 1200| 
| 20| 6.5e-05| 3.6e-05| 3.6e-05| 3.6e-05| 4.3e-05| 4800| 4800| 4800| 4800| 4800| 
| 30| 0.000196| 0.000161| 0.000164| 0.000167| 0.000172| 10800| 10800| 10800| 10800| 10800| 
| 40| 0.00036| 0.000415| 0.000363| 0.00031| 0.000317| 19200| 30400| 19200| 19200| 19200| 
| 50| 0.000651| 0.000795| 0.000682| 0.000556| 0.000654| 30000| 47500| 30000| 30000| 30000| 
| 60| 0.00098| 0.001043| 0.000979| 0.000983| 0.000963| 43200| 68400| 43200| 43200| 43200| 
| 70| 0.001541| 0.001558| 0.001476| 0.003018| 0.001938| 58800| 149744| 93100| 58800| 58800| 
| 80| 0.002414| 0.002521| 0.00219| 0.002358| 0.00245| 76800| 200000| 121600| 76800| 76800| 
| 90| 0.004513| 0.003173| 0.003087| 0.003356| 0.005028| 97200| 248764| 153900| 97200| 97200| 
| 100| 0.005522| 0.004345| 0.004391| 0.005305| 0.004796| 120000| 312500| 190000| 120000| 120000| 
| 200| 0.040846| 0.03937| 0.034051| 0.03626| 0.044288| 480000| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.154163| 0.107589| 0.104831| 0.111677| 0.12603| 1.08e+06| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.343502| 0.255401| 0.246034| 0.268982| 0.297128| 1.92e+06| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.70526| 0.483889| 0.466668| 0.54358| 0.572086| 3e+06| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 1.24879| 0.774245| 0.746225| 0.810381| 0.883921| 4.32e+06| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 2.32346| 1.15576| 1.15057| 1.28489| 1.43291| 5.88e+06| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 3.69206| 1.79405| 1.77704| 1.9186| 2.06568| 7.68e+06| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 5.32434| 2.478| 2.40831| 2.6327| 2.93508| 9.72e+06| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 7.6089| 3.1938| 3.20785| 3.62182| 4.00254| 1.2e+07| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07| 
| 1100| 9.26023| 4.57691| 4.1858| 4.38427| 4.80513| 1.452e+07| 3.2169e+08| 1.85688e+08| 1.07972e+08| 6.35636e+07| 
| 1200| 17.3169| 5.29997| 5.23168| 5.65293| 6.22866| 1.728e+07| 3.74401e+08| 2.21928e+08| 1.29892e+08| 7.587e+07| 
| 1300| 24.1212| 7.22321| 6.60726| 7.25732| 7.4018| 2.028e+07| 4.47634e+08| 2.59396e+08| 1.51831e+08| 8.88193e+07| 
| 1400| 28.7514| 7.44688| 7.55599| 8.13247| 9.19483| 2.352e+07| 5.07798e+08| 3.00265e+08| 1.7596e+08| 1.03268e+08| 
| 1500| 35.0238| 9.38371| 9.09339| 10.0824| 11.228| 2.7e+07| 5.92555e+08| 3.43609e+08| 2.01355e+08| 1.1829e+08| 
| 1600| 46.5239| 11.7069| 11.5085| 12.5002| 13.7381| 3.072e+07| 6.93112e+08| 3.9899e+08| 2.3092e+08| 1.3488e+08| 
| 1700| 54.6721| 14.0023| 14.3116| 15.4135| 16.9898| 3.468e+07| 7.66853e+08| 4.4873e+08| 2.59886e+08| 1.51976e+08| 
| 1800| 62.3788| 15.95| 15.8875| 17.4127| 19.4265| 3.888e+07| 8.70954e+08| 5.02007e+08| 2.9118e+08| 1.70708e+08| 
| 1900| 79.7702| 17.5935| 18.472| 20.2912| 22.646| 4.332e+07| 9.53394e+08| 5.57623e+08| 3.23602e+08| 1.89876e+08| 
| 2000| 89.7163| 21.0933| 21.3923| 23.9934| 26.5255| 4.8e+07| 1.07148e+09| 6.19237e+08| 3.60812e+08| 2.1075e+08| 
| 2500| 186.965| 40.0621| 40.0425| 41.6866| 46.0622| 7.5e+07| -1.41839e+09| 1.68738e+09| 9.71607e+08| 5.62591e+08| 
| 3000| 333.698| 66.0115| 63.9215| 71.1892| 79.1058| 1.08e+08| -1.65084e+08| -1.9077e+09| 1.39148e+09| 8.1003e+08| 
| 3500| 532.891| 102.084| 101.966| 113.268| 124.799| 1.47e+08| 1.37872e+09| -1.02273e+09| 1.89998e+09| 1.10124e+09| 
| 4000| 825.685| 149.016| 151.037| 169.101| 186.819| 1.92e+08| -1.12158e+09| 7.69123e+06| -1.80128e+09| 1.44325e+09| 

| Row&Col| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 9e-06| 6e-06| 6e-06| 7e-06| 6e-06| 1200| 1200| 1200| 1200| 1200| 
| 20| 5e-05| 4.6e-05| 4.6e-05| 4.9e-05| 4.7e-05| 4800| 4800| 4800| 4800| 4800| 
| 30| 0.000154| 0.000172| 0.00016| 0.000166| 0.000164| 10800| 10800| 10800| 10800| 10800| 
| 40| 0.000374| 0.00044| 0.000291| 0.000282| 0.000303| 19200| 30400| 19200| 19200| 19200| 
| 50| 0.000579| 0.000622| 0.000588| 0.00057| 0.000559| 30000| 47500| 30000| 30000| 30000| 
| 60| 0.000964| 0.001012| 0.001008| 0.000963| 0.000962| 43200| 68400| 43200| 43200| 43200| 
| 70| 0.001588| 0.001613| 0.00158| 0.001603| 0.001606| 58800| 149744| 93100| 58800| 58800| 
| 80| 0.002368| 0.002403| 0.002235| 0.002424| 0.002356| 76800| 200000| 121600| 76800| 76800| 
| 90| 0.003341| 0.003087| 0.003103| 0.003384| 0.003404| 97200| 248764| 153900| 97200| 97200| 
| 100| 0.004574| 0.00513| 0.004921| 0.004586| 0.004642| 120000| 312500| 190000| 120000| 120000| 
| 200| 0.037939| 0.032269| 0.03192| 0.035592| 0.042692| 480000| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.12832| 0.096804| 0.095781| 0.108266| 0.119297| 1.08e+06| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.312551| 0.23389| 0.231894| 0.249811| 0.278142| 1.92e+06| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.616505| 0.43312| 0.42766| 0.485352| 0.536289| 3e+06| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 1.09593| 0.717761| 0.722763| 0.765147| 0.84168| 4.32e+06| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 1.74699| 1.05176| 1.06279| 1.16612| 1.31628| 5.88e+06| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 2.71577| 1.67757| 1.64879| 1.7923| 1.96016| 7.68e+06| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 4.63947| 2.28953| 2.2845| 2.47569| 2.77947| 9.72e+06| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 6.46702| 3.03414| 3.05822| 3.43245| 3.81094| 1.2e+07| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07| 
| 1100| 8.76724| 4.38542| 3.88386| 4.10653| 4.48859| 1.452e+07| 3.2169e+08| 1.85688e+08| 1.07972e+08| 6.35636e+07| 
| 1200| 15.5981| 5.00326| 4.95219| 5.31591| 5.87579| 1.728e+07| 3.74401e+08| 2.21928e+08| 1.29892e+08| 7.587e+07| 
| 1300| 22.6304| 6.64678| 6.22994| 6.8897| 7.402| 2.028e+07| 4.47634e+08| 2.59396e+08| 1.51831e+08| 8.88193e+07| 
| 1400| 29.9808| 7.50268| 7.77937| 8.71643| 10.0177| 2.352e+07| 5.07798e+08| 3.00265e+08| 1.7596e+08| 1.03268e+08| 
| 1500| 41.0405| 10.8209| 10.1879| 11.2512| 12.5376| 2.7e+07| 5.92555e+08| 3.43609e+08| 2.01355e+08| 1.1829e+08| 
| 1600| 52.5872| 12.473| 13.3688| 14.2437| 15.8289| 3.072e+07| 6.93112e+08| 3.9899e+08| 2.3092e+08| 1.3488e+08| 
| 1700| 62.6813| 14.9356| 14.3649| 17.6153| 19.4125| 3.468e+07| 7.66853e+08| 4.4873e+08| 2.59886e+08| 1.51976e+08| 
| 1800| 72.1672| 18.9197| 18.6799| 20.1836| 22.8789| 3.888e+07| 8.70954e+08| 5.02007e+08| 2.9118e+08| 1.70708e+08| 
| 1900| 90.4203| 20.1001| 21.196| 22.9142| 25.7838| 4.332e+07| 9.53394e+08| 5.57623e+08| 3.23602e+08| 1.89876e+08| 
| 2000| 103.035| 24.0477| 24.3856| 27.733| 31.0682| 4.8e+07| 1.07148e+09| 6.19237e+08| 3.60812e+08| 2.1075e+08| 
| 2500| 224.427| 46.1881| 46.3039| 47.6907| 52.7565| 7.5e+07| -1.41839e+09| 1.68738e+09| 9.71607e+08| 5.62591e+08| 
| 3000| 383.663| 75.9167| 72.9258| 81.3197| 90.0269| 1.08e+08| -1.65084e+08| -1.9077e+09| 1.39148e+09| 8.1003e+08| 
| 3500| 641.032| 118.576| 116.928| 131.94| 144.32| 1.47e+08| 1.37872e+09| -1.02273e+09| 1.89998e+09| 1.10124e+09| 
| 4000| 973.655| 169.001| 170.911| 190.218| 212.826| 1.92e+08| -1.12158e+09| 7.69123e+06| -1.80128e+09| 1.44325e+09|

| Row&Col| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 6e-06| 5e-06| 5e-06| 5e-06| 5e-06| 1200| 1200| 1200| 1200| 1200| 
| 20| 3.6e-05| 4e-05| 3.5e-05| 3.5e-05| 3.7e-05| 4800| 4800| 4800| 4800| 4800| 
| 30| 0.000131| 0.000137| 0.000139| 0.00012| 0.000147| 10800| 10800| 10800| 10800| 10800| 
| 40| 0.000349| 0.000344| 0.000407| 0.000378| 0.00037| 19200| 30400| 19200| 19200| 19200| 
| 50| 0.000664| 0.000709| 0.000662| 0.000735| 0.000602| 30000| 47500| 30000| 30000| 30000| 
| 60| 0.001053| 0.001032| 0.001011| 0.000983| 0.000988| 43200| 68400| 43200| 43200| 43200| 
| 70| 0.001523| 0.001553| 0.001476| 0.001545| 0.002655| 58800| 149744| 93100| 58800| 58800| 
| 80| 0.002762| 0.002511| 0.002187| 0.002391| 0.002349| 76800| 200000| 121600| 76800| 76800| 
| 90| 0.004748| 0.00402| 0.003186| 0.003391| 0.003472| 97200| 248764| 153900| 97200| 97200| 
| 100| 0.005298| 0.004478| 0.00427| 0.005181| 0.004858| 120000| 312500| 190000| 120000| 120000| 
| 200| 0.042812| 0.034273| 0.036619| 0.037153| 0.041603| 480000| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.139143| 0.10582| 0.107787| 0.110252| 0.123949| 1.08e+06| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.337384| 0.254143| 0.257116| 0.265022| 0.29556| 1.92e+06| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.750479| 0.465277| 0.473189| 0.51728| 0.600283| 3e+06| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 1.34211| 0.764261| 0.764609| 0.816422| 0.895385| 4.32e+06| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 2.23409| 1.12931| 1.15385| 1.23263| 1.43296| 5.88e+06| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 3.53894| 1.80633| 1.76491| 1.89565| 2.0939| 7.68e+06| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 5.13632| 2.40418| 2.44903| 2.67059| 2.98034| 9.72e+06| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 7.72185| 3.27264| 3.28098| 3.67569| 4.05088| 1.2e+07| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07| 
| 1100| 8.86258| 4.54926| 4.19983| 4.44286| 4.81574| 1.452e+07| 3.2169e+08| 1.85688e+08| 1.07972e+08| 6.35636e+07| 
| 1200| 16.0557| 5.33984| 5.36397| 5.71396| 6.26005| 1.728e+07| 3.74401e+08| 2.21928e+08| 1.29892e+08| 7.587e+07| 
| 1300| 23.7278| 7.17818| 6.61045| 7.33922| 8.15314| 2.028e+07| 4.47634e+08| 2.59396e+08| 1.51831e+08| 8.88193e+07| 
| 1400| 30.4573| 8.23125| 8.24192| 8.9867| 10.103| 2.352e+07| 5.07798e+08| 3.00265e+08| 1.7596e+08| 1.03268e+08| 
| 1500| 36.0953| 10.1784| 9.92878| 10.8841| 12.0123| 2.7e+07| 5.92555e+08| 3.43609e+08| 2.01355e+08| 1.1829e+08| 
| 1600| 46.4777| 12.6652| 12.4539| 13.5477| 14.8302| 3.072e+07| 6.93112e+08| 3.9899e+08| 2.3092e+08| 1.3488e+08| 
| 1700| 57.1363| 14.3514| 14.6856| 15.9165| 17.6855| 3.468e+07| 7.66853e+08| 4.4873e+08| 2.59886e+08| 1.51976e+08| 
| 1800| 68.2836| 17.3736| 17.3078| 18.7117| 21.3255| 3.888e+07| 8.70954e+08| 5.02007e+08| 2.9118e+08| 1.70708e+08| 
| 1900| 88.7211| 19.1531| 20.1124| 21.874| 24.8556| 4.332e+07| 9.53394e+08| 5.57623e+08| 3.23602e+08| 1.89876e+08| 
| 2000| 96.2113| 22.8279| 23.4104| 25.8201| 28.7007| 4.8e+07| 1.07148e+09| 6.19237e+08| 3.60812e+08| 2.1075e+08| 
| 2500| 202.243| 43.3453| 43.7523| 45.3956| 50.0336| 7.5e+07| -1.41839e+09| 1.68738e+09| 9.71607e+08| 5.62591e+08| 
| 3000| 363.12| 72.1198| 69.6591| 77.0631| 85.0447| 1.08e+08| -1.65084e+08| -1.9077e+09| 1.39148e+09| 8.1003e+08| 
| 3500| 578.811| 110.467| 109.841| 122.698| 135.194| 1.47e+08| 1.37872e+09| -1.02273e+09| 1.89998e+09| 1.10124e+09| 
| 4000| 901.706| 161.902| 163.581| 181.789| 203.248| 1.92e+08| -1.12158e+09| 7.69123e+06| -1.80128e+09| 1.44325e+09|

| Row&Col| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 8e-06| 7e-06| 6e-06| 6e-06| 5e-06| 1200| 1200| 1200| 1200| 1200| 
| 20| 4.9e-05| 4.9e-05| 4.9e-05| 4.4e-05| 5.1e-05| 4800| 4800| 4800| 4800| 4800| 
| 30| 0.000155| 0.000134| 0.00012| 0.000139| 0.000157| 10800| 10800| 10800| 10800| 10800| 
| 40| 0.000375| 0.000338| 0.000381| 0.00034| 0.000285| 19200| 30400| 19200| 19200| 19200| 
| 50| 0.000583| 0.000635| 0.000562| 0.000551| 0.000588| 30000| 47500| 30000| 30000| 30000| 
| 60| 0.000967| 0.000996| 0.000967| 0.000993| 0.000991| 43200| 68400| 43200| 43200| 43200| 
| 70| 0.001659| 0.001549| 0.002169| 0.001738| 0.001758| 58800| 149744| 93100| 58800| 58800| 
| 80| 0.002424| 0.002479| 0.002192| 0.002347| 0.003651| 76800| 200000| 121600| 76800| 76800| 
| 90| 0.004821| 0.00312| 0.003086| 0.003391| 0.005059| 97200| 248764| 153900| 97200| 97200| 
| 100| 0.005294| 0.004426| 0.004512| 0.005243| 0.004592| 120000| 312500| 190000| 120000| 120000| 
| 200| 0.041726| 0.033809| 0.034243| 0.0382| 0.040095| 480000| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.140138| 0.101991| 0.102478| 0.112055| 0.123225| 1.08e+06| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.384855| 0.257875| 0.253991| 0.278392| 0.293836| 1.92e+06| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.781449| 0.476277| 0.460218| 0.523599| 0.564856| 3e+06| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 1.36983| 0.753749| 0.739932| 0.815209| 0.892332| 4.32e+06| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 2.25445| 1.15767| 1.18087| 1.31167| 1.4294| 5.88e+06| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 3.43322| 1.78375| 1.7612| 1.94305| 2.07449| 7.68e+06| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 5.61197| 2.4814| 2.42692| 2.63862| 2.92983| 9.72e+06| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 7.77008| 3.19691| 3.30065| 3.79722| 4.28846| 1.2e+07| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07| 
| 1100| 9.40593| 4.67169| 4.10179| 4.37006| 4.76849| 1.452e+07| 3.2169e+08| 1.85688e+08| 1.07972e+08| 6.35636e+07| 
| 1200| 16.9332| 5.24625| 5.20524| 5.59831| 6.16867| 1.728e+07| 3.74401e+08| 2.21928e+08| 1.29892e+08| 7.587e+07| 
| 1300| 23.5708| 6.97786| 6.50793| 7.18821| 7.74497| 2.028e+07| 4.47634e+08| 2.59396e+08| 1.51831e+08| 8.88193e+07| 
| 1400| 29.9821| 7.92244| 8.00521| 8.6558| 9.77605| 2.352e+07| 5.07798e+08| 3.00265e+08| 1.7596e+08| 1.03268e+08| 
| 1500| 35.0845| 10.028| 9.63581| 10.6768| 11.8418| 2.7e+07| 5.92555e+08| 3.43609e+08| 2.01355e+08| 1.1829e+08| 
| 1600| 48.8766| 12.4098| 12.2509| 13.1964| 14.4731| 3.072e+07| 6.93112e+08| 3.9899e+08| 2.3092e+08| 1.3488e+08| 
| 1700| 57.3772| 13.8516| 14.4278| 15.7657| 17.19| 3.468e+07| 7.66853e+08| 4.4873e+08| 2.59886e+08| 1.51976e+08| 
| 1800| 68.5392| 16.8988| 17.0101| 18.3967| 20.5256| 3.888e+07| 8.70954e+08| 5.02007e+08| 2.9118e+08| 1.70708e+08| 
| 1900| 86.094| 18.6755| 20.0749| 22.1245| 24.1157| 4.332e+07| 9.53394e+08| 5.57623e+08| 3.23602e+08| 1.89876e+08| 
| 2000| 105.647| 24.1489| 24.5167| 27.2345| 30.3875| 4.8e+07| 1.07148e+09| 6.19237e+08| 3.60812e+08| 2.1075e+08| 
| 2500| 217.386| 45.7581| 45.2922| 46.8415| 52.0536| 7.5e+07| -1.41839e+09| 1.68738e+09| 9.71607e+08| 5.62591e+08| 
| 3000| 351.896| 66.587| 66.4551| 76.0674| 83.9489| 1.08e+08| -1.65084e+08| -1.9077e+09| 1.39148e+09| 8.1003e+08| 
| 3500| 563.161| 106.857| 106.48| 119.309| 131.898| 1.47e+08| 1.37872e+09| -1.02273e+09| 1.89998e+09| 1.10124e+09| 
| 4000| 810.138| 143.422| 168.281| 190.099| 205.195| 1.92e+08| -1.12158e+09| 7.69123e+06| -1.80128e+09| 1.44325e+09|

| Row&Col| BasicTime(s)| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 8e-06| 7e-06| 7e-06| 7e-06| 7e-06| 1200| 1200| 1200| 1200| 1200| 
| 20| 3.8e-05| 4.7e-05| 4.9e-05| 4.3e-05| 4.6e-05| 4800| 4800| 4800| 4800| 4800| 
| 30| 0.00015| 0.000149| 0.000183| 0.000143| 0.000148| 10800| 10800| 10800| 10800| 10800| 
| 40| 0.000373| 0.000398| 0.000321| 0.000398| 0.000309| 19200| 30400| 19200| 19200| 19200| 
| 50| 0.000652| 0.000637| 0.000553| 0.000625| 0.00082| 30000| 47500| 30000| 30000| 30000| 
| 60| 0.000983| 0.001013| 0.000994| 0.000963| 0.001491| 43200| 68400| 43200| 43200| 43200| 
| 70| 0.00156| 0.001804| 0.002385| 0.002272| 0.001755| 58800| 149744| 93100| 58800| 58800| 
| 80| 0.002448| 0.002421| 0.002183| 0.00238| 0.002846| 76800| 200000| 121600| 76800| 76800| 
| 90| 0.005149| 0.003232| 0.003068| 0.003349| 0.004032| 97200| 248764| 153900| 97200| 97200| 
| 100| 0.005618| 0.004476| 0.004788| 0.005215| 0.0047| 120000| 312500| 190000| 120000| 120000| 
| 200| 0.043968| 0.035658| 0.034739| 0.038559| 0.043828| 480000| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.146896| 0.109869| 0.107418| 0.112994| 0.122355| 1.08e+06| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.355891| 0.262737| 0.254963| 0.277677| 0.322219| 1.92e+06| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.711801| 0.470342| 0.462237| 0.523976| 0.583229| 3e+06| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 1.36477| 0.762584| 0.753856| 0.809693| 0.901828| 4.32e+06| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 2.19311| 1.14755| 1.15518| 1.24709| 1.40614| 5.88e+06| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 3.90055| 1.85262| 1.7994| 1.93243| 2.14264| 7.68e+06| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 5.30234| 2.61291| 2.50093| 2.72374| 3.05174| 9.72e+06| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 7.83927| 3.27055| 3.24025| 3.60855| 4.03302| 1.2e+07| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07| 
| 1100| 9.34442| 4.60138| 4.23054| 4.35355| 4.73027| 1.452e+07| 3.2169e+08| 1.85688e+08| 1.07972e+08| 6.35636e+07| 
| 1200| 17.0298| 5.17578| 5.09607| 5.60007| 6.03634| 1.728e+07| 3.74401e+08| 2.21928e+08| 1.29892e+08| 7.587e+07| 
| 1300| 23.7839| 6.89807| 6.39349| 7.10698| 7.68982| 2.028e+07| 4.47634e+08| 2.59396e+08| 1.51831e+08| 8.88193e+07| 
| 1400| 29.9969| 7.7815| 7.77026| 8.53769| 9.71529| 2.352e+07| 5.07798e+08| 3.00265e+08| 1.7596e+08| 1.03268e+08| 
| 1500| 38.7018| 9.86644| 9.5599| 10.7189| 11.8633| 2.7e+07| 5.92555e+08| 3.43609e+08| 2.01355e+08| 1.1829e+08| 
| 1600| 49.2187| 12.2981| 12.2437| 13.3698| 14.5269| 3.072e+07| 6.93112e+08| 3.9899e+08| 2.3092e+08| 1.3488e+08| 
| 1700| 58.3525| 13.9494| 14.4022| 15.6639| 17.9666| 3.468e+07| 7.66853e+08| 4.4873e+08| 2.59886e+08| 1.51976e+08| 
| 1800| 69.4913| 16.8096| 16.796| 18.3729| 20.6143| 3.888e+07| 8.70954e+08| 5.02007e+08| 2.9118e+08| 1.70708e+08| 
| 1900| 86.0908| 18.5856| 19.5477| 21.8947| 23.9022| 4.332e+07| 9.53394e+08| 5.57623e+08| 3.23602e+08| 1.89876e+08| 
| 2000| 97.2887| 22.0392| 22.1242| 24.7478| 27.6467| 4.8e+07| 1.07148e+09| 6.19237e+08| 3.60812e+08| 2.1075e+08| 
| 2500| 190.728| 42.2879| 41.6059| 43.3155| 47.8624| 7.5e+07| -1.41839e+09| 1.68738e+09| 9.71607e+08| 5.62591e+08| 
| 3000| 335.544| 69.2313| 68.2904| 75.7618| 82.5768| 1.08e+08| -1.65084e+08| -1.9077e+09| 1.39148e+09| 8.1003e+08| 
| 3500| 582.952| 109.396| 105.912| 115.902| 123.872| 1.47e+08| 1.37872e+09| -1.02273e+09| 1.89998e+09| 1.10124e+09| 
| 4000| 814.768| 147.744| 149.825| 167.994| 185.464| 1.92e+08| -1.12158e+09| 7.69123e+06| -1.80128e+09| 1.44325e+09|



| Row&Col| BasicTime(s)| StarssenTime(s)| StarssenTime(s) 16| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenTime(s)| StarssenMemory(Bytes) 16| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |
| 10| 2.2e-05| 0.000135| 2e-05| 2e-05| 1.9e-05| 1.9e-05| 2e-05| 1200| 2684| 1200| 1200| 1200| 1200| 1200| 
| 20| 0.00011| 0.000904| 0.000151| 0.000107| 0.00011| 0.000151| 0.000222| 4800| 17988| 7600| 4800| 4800| 4800| 4800| 
| 30| 0.000349| 0.003172| 0.000403| 0.000383| 0.000371| 0.000348| 0.000333| 10800| 48656| 17100| 10800| 10800| 10800| 10800| 
| 40| 0.001247| 0.00691| 0.000733| 0.000483| 0.000443| 0.000473| 0.000429| 19200| 122716| 50000| 30400| 19200| 19200| 19200| 
| 50| 0.000843| 0.00716| 0.000496| 0.000462| 0.000427| 0.000491| 0.000433| 30000| 278780| 75724| 47500| 30000| 30000| 30000| 
| 60| 0.000836| 0.005659| 0.000811| 0.000784| 0.001321| 0.000743| 0.000738| 43200| 333392| 112500| 68400| 43200| 43200| 43200| 
| 70| 0.001172| 0.009278| 0.0013| 0.001248| 0.001192| 0.001168| 0.001167| 58800| 660128| 237552| 149744| 93100| 58800| 58800| 
| 80| 0.00185| 0.012694| 0.002153| 0.001908| 0.001747| 0.00175| 0.001744| 76800| 846212| 337200| 200000| 121600| 76800| 76800| 
| 90| 0.00249| 0.014634| 0.002664| 0.002457| 0.002366| 0.002475| 0.002539| 97200| 923788| 414776| 248764| 153900| 97200| 97200| 
| 100| 0.003392| 0.03406| 0.003359| 0.003397| 0.003187| 0.003543| 0.003445| 120000| 1.93146e+06| 510068| 312500| 190000| 120000| 120000| 
| 200| 0.027478| 0.279207| 0.024283| 0.024402| 0.023727| 0.024739| 0.027616| 480000| 1.34402e+07| 3.49048e+06| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.093115| 0.687742| 0.089367| 0.077171| 0.075415| 0.078942| 0.081904| 1.08e+06| 3.39542e+07| 1.32479e+07| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.235891| 2.20499| 0.17332| 0.177448| 0.174538| 0.178718| 0.196108| 1.92e+06| 9.37615e+07| 2.41133e+07| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.46964| 3.32034| 0.319429| 0.337468| 0.335998| 0.358649| 0.401023| 3e+06| 1.13208e+08| 3.74422e+07| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 0.864044| 5.81855| 0.648289| 0.571993| 0.545404| 0.570216| 0.615158| 4.32e+06| 2.36959e+08| 9.20155e+07| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
| 700| 1.44607| 8.40528| 0.843684| 0.828514| 0.803951| 0.859427| 0.943024| 5.88e+06| 2.94753e+08| 1.20162e+08| 7.31025e+07| 4.3455e+07| 2.56972e+07| 1.53125e+07| 
| 800| 2.19094| 18.223| 1.29962| 1.32582| 1.25659| 1.33074| 1.48932| 7.68e+06| 6.55051e+08| 1.67513e+08| 9.97475e+07| 5.773e+07| 3.372e+07| 2e+07| 
| 900| 3.29966| 23.2114| 1.88472| 1.7758| 1.73123| 1.82644| 2.12287| 9.72e+06| 7.47946e+08| 2.17585e+08| 1.25348e+08| 7.2641e+07| 4.25229e+07| 2.53125e+07| 
| 1000| 4.96742| 28.5063| 2.29685| 2.34956| 2.32603| 2.57049| 2.85358| 1.2e+07| 7.90457e+08| 2.60095e+08| 1.54211e+08| 8.96053e+07| 5.26875e+07| 3.125e+07|

| Row&Col| BasicTime(s)| StarssenTime(s)| StarssenTime(s) 4| StarssenTime(s) 8| StarssenTime(s)| StarssenTime(s) 16| StarssenTime(s) 32| StarssenTime(s) 64| StarssenTime(s) 128| StarssenTime(s) 256| BasicMemory(Bytes)| StarssenTime(s)| StarssenTime(Bytes) 4| StarssenTime(Bytes) 8StarssenMemory(Bytes) 16| StarssenMemory(Bytes) 32| StarssenMemory(Bytes) 64| StarssenMemory(Bytes) 128| StarssenMemory(Bytes) 256| 
| -: | -: | -: | -: | -: | -: | -: | -: | -: | -: | -: |  -: |  -: |  -: |  -: | -: |  -: |  -: |  -: |
| 10| 2e-05| 0.000129| 5.9e-05| 2.7e-05| 1.3e-05| 1.2e-05| 1.2e-05| 1.3e-05| 1.3e-05| 1200| 2684| 2684| 1900| 1200| 1200| 1200| 1200| 1200| 
| 20| 0.000109| 0.000682| 0.000412| 0.000203| 0.000143| 0.000107| 0.000106| 0.000106| 0.000106| 4800| 17988| 17988| 12500| 7600| 4800| 4800| 4800| 4800| 
| 30| 0.000366| 0.002201| 0.000598| 0.000397| 0.000254| 0.000215| 0.000223| 0.000232| 0.000217| 10800| 48656| 39052| 26704| 17100| 10800| 10800| 10800| 10800| 
| 40| 0.000545| 0.002708| 0.001431| 0.000825| 0.000343| 0.000273| 0.000252| 0.00031| 0.000243| 19200| 122716| 122716| 84300| 50000| 30400| 19200| 19200| 19200| 
| 50| 0.000449| 0.004761| 0.001453| 0.00068| 0.000479| 0.000501| 0.00074| 0.000708| 0.000478| 30000| 278780| 211552| 125116| 75724| 47500| 30000| 30000| 30000| 
| 60| 0.000906| 0.005782| 0.001525| 0.001| 0.000854| 0.000833| 0.000813| 0.000752| 0.000745| 43200| 333392| 266164| 179728| 112500| 68400| 43200| 43200| 43200| 
| 70| 0.001173| 0.00931| 0.002143| 0.001298| 0.001265| 0.001205| 0.001165| 0.001222| 0.001296| 58800| 660128| 391216| 237552| 237552| 149744| 93100| 58800| 58800| 
| 80| 0.001783| 0.012232| 0.005914| 0.003188| 0.002104| 0.001894| 0.001693| 0.001734| 0.001821| 76800| 846212| 846212| 577300| 337200| 200000| 121600| 76800| 76800| 
| 90| 0.002519| 0.014735| 0.005723| 0.003334| 0.002663| 0.002427| 0.002429| 0.002563| 0.002479| 97200| 923788| 923788| 654876| 414776| 248764| 153900| 97200| 97200| 
| 100| 0.003412| 0.034054| 0.009206| 0.004959| 0.003327| 0.003378| 0.003269| 0.003424| 0.00341| 120000| 1.93146e+06| 1.46086e+06| 855812| 510068| 312500| 190000| 120000| 120000| 
| 200| 0.029365| 0.267352| 0.067933| 0.035827| 0.024441| 0.024699| 0.023587| 0.024756| 0.027857| 480000| 1.34402e+07| 1.0146e+07| 5.91068e+06| 3.49048e+06| 2.1075e+06| 1.25e+06| 760000| 480000| 
| 300| 0.100379| 0.685182| 0.121213| 0.118586| 0.08592| 0.076218| 0.075585| 0.078247| 0.081734| 1.08e+06| 3.39542e+07| 2.07775e+07| 2.07775e+07| 1.32479e+07| 7.80246e+06| 4.69077e+06| 2.8125e+06| 1.71e+06| 
| 400| 0.230143| 2.16046| 0.473553| 0.254291| 0.180571| 0.186664| 0.175461| 0.183955| 0.201702| 1.92e+06| 9.37615e+07| 7.07023e+07| 4.10548e+07| 2.41133e+07| 1.44325e+07| 8.43e+06| 5e+06| 3.04e+06| 
| 500| 0.47325| 3.23204| 0.537631| 0.369549| 0.316497| 0.333518| 0.320404| 0.340199| 0.391347| 3e+06| 1.13208e+08| 9.0149e+07| 6.05014e+07| 3.74422e+07| 2.23159e+07| 1.30865e+07| 7.8125e+06| 4.75e+06| 
| 600| 0.845588| 5.6648| 0.841286| 0.846304| 0.624582| 0.549073| 0.52709| 0.557427| 0.621409| 4.32e+06| 2.36959e+08| 1.44722e+08| 1.44722e+08| 9.20155e+07| 5.38972e+07| 3.21154e+07| 1.89675e+07| 1.125e+07| 
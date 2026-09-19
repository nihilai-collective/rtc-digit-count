# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the GCC 16.0.1 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor-AVX2): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 10.000000% AND mean shift < 5.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [4972187](https://github.com/realtimechris/benchmarksuite/commit/4972187).
 
----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1817.63 | 0.962184 | 17.1116ms | 102 | 96 | 25.528 | 53.5938 | 0.40567 | 1(Win) |
| lemire_digit_count | 1697.69 | 1.7022 | 3.85145ms | 105 | 30 | 30.3954 | 59.1333 | 0.477517 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5824.83 | 7.30186 | 1.66032ms | 1052 | 30 | 4746.69 | 172.267 | 0.3163 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5197.29 | 3.2579 | 1.67385ms | 1052 | 30 | 1186.89 | 193.067 | 0.378901 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9983.85 | 1.37932 | 4.28374ms | 10521 | 30 | 5764.83 | 1005 | 0.238472 | 1(Win) |
| lemire_digit_count | 7140.79 | 1.05042 | 4.45023ms | 10521 | 30 | 6535.5 | 1405.13 | 0.337073 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10699.1 | 0.250303 | 3.42405ms | 104990 | 30 | 16461.2 | 9358.43 | 0.230233 | 1(Win) |
| lemire_digit_count | 7209.24 | 3.74397 | 4.26422ms | 104990 | 30 | 8.11156e+06 | 13888.6 | 0.342266 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10325.2 | 1.613 | 19.2147ms | 1049697 | 30 | 7.33704e+07 | 96954.2 | 0.239598 | 1(Win) |
| lemire_digit_count | 7255.95 | 1.40306 | 26.5621ms | 1049697 | 30 | 1.12412e+08 | 137965 | 0.340981 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 507.61 | 2.10083 | 1.65402ms | 29 | 30 | 38.9437 | 54.2333 | 1.5612 | 1(Win) |
| lemire_digit_count | 459.845 | 3.4843 | 1.675ms | 29 | 30 | 130.533 | 59.8667 | 1.80139 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1673 | 4.61369 | 1.689ms | 302 | 30 | 1886.26 | 171.867 | 1.0492 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1521.07 | 2.35646 | 1.69034ms | 302 | 30 | 595.275 | 189.033 | 1.29353 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2875.43 | 1.2886 | 4.28895ms | 3008 | 30 | 4957.9 | 997.633 | 0.828644 | 1(Win) |
| lemire_digit_count | 2042.45 | 0.7774 | 4.44026ms | 3008 | 30 | 3576.47 | 1404.5 | 1.17958 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3045.72 | 0.21561 | 17.3129ms | 29983 | 48 | 19667.8 | 9388.33 | 0.80871 | 1(Win) |
| lemire_digit_count | 2136.18 | 0.251401 | 4.17394ms | 30022 | 30 | 34061.8 | 13403.1 | 1.15496 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2952.14 | 1.50069 | 19.1858ms | 300102 | 30 | 6.34991e+07 | 96946.6 | 0.83808 | 1(Win) |
| lemire_digit_count | 2096.15 | 0.848352 | 26.6787ms | 300102 | 30 | 4.025e+07 | 136536 | 1.1804 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 934.766 | 1.70356 | 3.9261ms | 53 | 30 | 25.2 | 53.8 | 0.73957 | 1(Win) |
| lemire_digit_count | 876.14 | 1.86704 | 3.87894ms | 53 | 30 | 34.4552 | 57.4 | 0.969659 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2941.75 | 4.77897 | 1.6559ms | 536 | 30 | 2066.44 | 173.667 | 0.624479 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2655.78 | 3.44476 | 1.69772ms | 536 | 30 | 1317.34 | 192.367 | 0.745815 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5219.54 | 1.19695 | 4.34105ms | 5510 | 30 | 4356.72 | 1006.8 | 0.45643 | 1(Win) |
| lemire_digit_count | 3753.42 | 0.837481 | 4.42231ms | 5510 | 30 | 4124.48 | 1400.07 | 0.642336 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5481.52 | 1.66923 | 7.99148ms | 55024 | 30 | 766041 | 9573.03 | 0.449542 | 1(Win) |
| lemire_digit_count | 3922.92 | 0.254771 | 4.16652ms | 54973 | 30 | 34778.1 | 13364.2 | 0.628687 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5443.11 | 1.47075 | 19.1764ms | 550055 | 30 | 6.0272e+07 | 96373.9 | 0.454447 | 1(Win) |
| lemire_digit_count | 3815.01 | 1.26498 | 26.5404ms | 550055 | 30 | 9.07634e+07 | 137502 | 0.648574 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1411.39 | 1.67577 | 1.65781ms | 81 | 30 | 25.3609 | 54.8667 | 0.458949 | 1(Win) |
| lemire_digit_count | 1288.05 | 1.49668 | 3.87493ms | 80 | 30 | 23.4989 | 59.1333 | 0.629382 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 4225 | 8.59832 | 1.66197ms | 799 | 30 | 7215.41 | 180.367 | 0.427332 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 3956.94 | 3.15825 | 3.93994ms | 800 | 30 | 1113.09 | 192.867 | 0.509018 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7564.41 | 1.52559 | 4.28805ms | 8016 | 30 | 7131.55 | 1010.63 | 0.315153 | 1(Win) |
| lemire_digit_count | 5487.78 | 0.702865 | 4.44868ms | 8016 | 30 | 2876.13 | 1393.07 | 0.438296 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8131.66 | 0.273978 | 3.4194ms | 80058 | 30 | 19851.8 | 9389.1 | 0.303006 | 1(Win) |
| lemire_digit_count | 5602.51 | 1.42362 | 4.16716ms | 80058 | 30 | 1.12915e+06 | 13627.6 | 0.440382 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7746.11 | 1.64228 | 19.2011ms | 800092 | 30 | 7.85109e+07 | 98504.6 | 0.319387 | 1(Win) |
| lemire_digit_count | 5539.91 | 1.33484 | 26.472ms | 800092 | 30 | 1.01404e+08 | 137733 | 0.446597 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1892.16 | 1.69672 | 1.6752ms | 108 | 30 | 25.5586 | 54.4 | 0.401482 | 1(Win) |
| lemire_digit_count | 1829.21 | 1.99318 | 3.86597ms | 111 | 30 | 39.7713 | 57.7667 | 0.469314 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5471.16 | 6.22402 | 1.67886ms | 1050 | 30 | 3890.52 | 182.967 | 0.323658 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5180.86 | 2.73726 | 3.91027ms | 1041 | 30 | 825.747 | 191.667 | 0.387873 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9942.22 | 1.38867 | 4.27588ms | 10499 | 30 | 5866.86 | 1007.03 | 0.239812 | 1(Win) |
| lemire_digit_count | 7167.92 | 0.831057 | 4.43021ms | 10499 | 30 | 4042.51 | 1396.8 | 0.33648 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10646.1 | 0.250918 | 3.4253ms | 104922 | 30 | 16685.4 | 9398.87 | 0.231424 | 1(Win) |
| lemire_digit_count | 7439.98 | 0.247665 | 4.31044ms | 104922 | 30 | 33284.2 | 13449.1 | 0.331619 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10442.6 | 1.47415 | 19.1752ms | 1049536 | 30 | 5.98937e+07 | 95849.3 | 0.236916 | 1(Win) |
| lemire_digit_count | 7296.34 | 1.22447 | 26.7051ms | 1049536 | 30 | 8.46454e+07 | 137180 | 0.339109 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1325.14 | 1.62512 | 1.66219ms | 74 | 30 | 22.5931 | 53.4 | 0.572327 | 1(Win) |
| lemire_digit_count | 1226.39 | 1.96843 | 1.65906ms | 74 | 30 | 38.7 | 57.7 | 0.689128 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4151.02 | 6.29872 | 1.70069ms | 751 | 30 | 3541.64 | 172.5 | 0.436315 | 1(Win) |
| lemire_digit_count | 3501.09 | 3.25868 | 8.43936ms | 748 | 48 | 2118.62 | 203.875 | 0.566665 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7136.46 | 1.21907 | 4.29034ms | 7500 | 30 | 4478.32 | 1002.23 | 0.33431 | 1(Win) |
| lemire_digit_count | 5129.03 | 0.550683 | 9.49017ms | 7496 | 48 | 2827.33 | 1393.69 | 0.469582 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7608.08 | 0.2937 | 3.42328ms | 75010 | 30 | 22878 | 9402.53 | 0.323812 | 1(Win) |
| lemire_digit_count | 5126.76 | 3.69291 | 4.15933ms | 75010 | 30 | 7.9655e+06 | 13953.3 | 0.481328 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7386.46 | 1.54522 | 19.1338ms | 750153 | 30 | 6.71941e+07 | 96853.1 | 0.334943 | 1(Win) |
| lemire_digit_count | 5239.21 | 1.13633 | 26.66ms | 750153 | 30 | 7.22273e+07 | 136548 | 0.472266 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1721.03 | 1.70813 | 1.65288ms | 99 | 30 | 26.254 | 54.7667 | 0.403373 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1687.36 | 1.86229 | 3.79498ms | 102 | 30 | 34.2402 | 57.3667 | 0.503777 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6639.43 | 0.427785 | 37.0481ms | 1002 | 192 | 72.8318 | 143.974 | 0.2752 | 1(Win) |
| lemire_digit_count | 4863.76 | 5.62011 | 1.67497ms | 1006 | 30 | 3688.63 | 197.3 | 0.403087 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9549.24 | 1.09566 | 4.27332ms | 10012 | 30 | 3600.71 | 999.9 | 0.249471 | 1(Win) |
| lemire_digit_count | 6852.34 | 0.839678 | 4.44107ms | 10012 | 30 | 4106.94 | 1393.43 | 0.351355 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10178.9 | 0.200437 | 3.4399ms | 99964 | 30 | 10572.1 | 9365.73 | 0.241973 | 1(Win) |
| lemire_digit_count | 6646.54 | 5.93406 | 10.1903ms | 100127 | 30 | 2.18039e+07 | 14366.6 | 0.371277 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9819.58 | 1.76959 | 19.2486ms | 999535 | 30 | 8.85272e+07 | 97074.5 | 0.251957 | 1(Win) |
| lemire_digit_count | 6918.05 | 1.34767 | 26.4948ms | 999535 | 30 | 1.03447e+08 | 137789 | 0.357653 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2207.33 | 0.660149 | 35.5625ms | 126 | 192 | 24.815 | 54.4583 | 0.312632 | 1(Win) |
| lemire_digit_count | 1947.52 | 1.99318 | 1.54508ms | 118 | 30 | 39.7713 | 57.7667 | 0.492229 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7139.51 | 5.6355 | 3.85976ms | 1249 | 30 | 2651.87 | 166.833 | 0.259521 | 1(Win) |
| lemire_digit_count | 6079.15 | 3.0086 | 3.91697ms | 1249 | 30 | 1042.48 | 195.933 | 0.324055 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12004.3 | 0.224075 | 83.2892ms | 12492 | 384 | 1899.07 | 992.456 | 0.198392 | 1(Win) |
| lemire_digit_count | 8527.87 | 0.818193 | 4.43087ms | 12524 | 30 | 3939.5 | 1400.57 | 0.282822 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12102.4 | 4.82118 | 3.45741ms | 124924 | 30 | 6.75735e+06 | 9844.07 | 0.203575 | 1(Win) |
| lemire_digit_count | 8590.59 | 3.49566 | 4.1639ms | 124924 | 30 | 7.05058e+06 | 13868.3 | 0.287277 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12376.5 | 1.45502 | 19.2898ms | 1250080 | 30 | 5.89304e+07 | 96325.4 | 0.199901 | 1(Win) |
| lemire_digit_count | 8377.1 | 1.79162 | 26.7315ms | 1250080 | 30 | 1.9503e+08 | 142313 | 0.295358 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2191.36 | 1.92905 | 3.87008ms | 126 | 30 | 33.4437 | 54.7333 | 0.330771 | 1(Win) |
| lemire_digit_count | 2057.49 | 1.75851 | 1.67877ms | 125 | 30 | 30.9931 | 57.8 | 0.423951 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7007.52 | 6.08873 | 3.85764ms | 1248 | 30 | 3209.15 | 169.867 | 0.250661 | 1(Win) |
| lemire_digit_count | 6100.46 | 3.41873 | 1.66579ms | 1253 | 30 | 1345.61 | 195.9 | 0.313295 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11681.1 | 1.64135 | 4.26516ms | 12492 | 30 | 8406.92 | 1019.9 | 0.203966 | 1(Win) |
| lemire_digit_count | 8499.16 | 1.1516 | 4.4422ms | 12492 | 30 | 7817.24 | 1401.73 | 0.283471 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12755.8 | 0.197133 | 3.41455ms | 125072 | 30 | 10193.9 | 9350.83 | 0.193156 | 1(Win) |
| lemire_digit_count | 8923.18 | 0.233467 | 4.15238ms | 125072 | 30 | 29218.1 | 13367.2 | 0.276495 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12321.2 | 1.65265 | 19.1674ms | 1249892 | 30 | 7.66878e+07 | 96743.2 | 0.200795 | 1(Win) |
| lemire_digit_count | 8757.26 | 1.02539 | 26.4714ms | 1249892 | 30 | 5.84403e+07 | 136115 | 0.282533 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2609.16 | 1.67367 | 1.67291ms | 149 | 30 | 24.869 | 54.4 | 0.273684 | 1(Win) |
| lemire_digit_count | 2447.22 | 1.73402 | 1.66464ms | 149 | 30 | 30.3448 | 58 | 0.337738 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9751.05 | 0.893692 | 36.9556ms | 1502 | 192 | 330.712 | 146.854 | 0.187765 | 1(Win) |
| lemire_digit_count | 7496.48 | 2.49996 | 1.67925ms | 1502 | 30 | 684.714 | 191.1 | 0.26251 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14091.1 | 1.34739 | 4.30466ms | 14999 | 30 | 5612.46 | 1015.13 | 0.168835 | 1(Win) |
| lemire_digit_count | 10211.8 | 0.829638 | 4.188ms | 14999 | 30 | 4051.63 | 1400.77 | 0.236034 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14747.1 | 3.64381 | 3.43976ms | 150025 | 30 | 3.74928e+06 | 9701.9 | 0.167094 | 1(Win) |
| lemire_digit_count | 10663.1 | 0.215245 | 4.15065ms | 150025 | 30 | 25023.2 | 13417.7 | 0.231367 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14661.7 | 2.17813 | 20.4706ms | 1499817 | 30 | 1.35456e+08 | 97556.1 | 0.168726 | 1(Win) |
| lemire_digit_count | 10359.4 | 1.43053 | 26.593ms | 1499817 | 30 | 1.17037e+08 | 138071 | 0.238844 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3032.84 | 2.4304 | 1.67889ms | 174 | 30 | 53.1506 | 54.7667 | 0.273684 | 1(Win) |
| lemire_digit_count | 2820.13 | 2.62751 | 17.1825ms | 175 | 96 | 232.831 | 59.2708 | 0.309046 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10548 | 3.83144 | 17.0712ms | 1747 | 96 | 3516.73 | 157.969 | 0.170356 | 1(Win) |
| lemire_digit_count | 8647.21 | 3.91347 | 1.69833ms | 1748 | 30 | 1707.89 | 192.8 | 0.231023 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 16496.2 | 1.27688 | 4.26965ms | 17504 | 30 | 5008.69 | 1011.93 | 0.144181 | 1(Win) |
| lemire_digit_count | 11948.6 | 0.882919 | 4.4434ms | 17504 | 30 | 4564.55 | 1397.07 | 0.201814 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 16867.9 | 4.94529 | 36.194ms | 175016 | 96 | 2.29874e+07 | 9895.02 | 0.146076 | 1(Win) |
| lemire_digit_count | 12090.6 | 2.39272 | 9.71734ms | 175017 | 30 | 3.27319e+06 | 13804.9 | 0.204073 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 16855.8 | 3.01678 | 19.2594ms | 1749869 | 30 | 2.67621e+08 | 99004.6 | 0.14679 | 1(Win) |
| lemire_digit_count | 12212.6 | 1.22829 | 26.5697ms | 1749869 | 30 | 8.45119e+07 | 136647 | 0.202603 | 2(Loss) |

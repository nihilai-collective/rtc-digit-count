# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the GCC 16.0.1 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1028 | 1.59816 | 1.65711ms | 57 | 30 | 21.5506 | 53.0333 | 0.742857 | 1(Win) |
| lemire_digit_count | 933.646 | 0.177282 | 1221.17ms | 55 | 6144 | 60.7765 | 56.1019 | 0.86687 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3599.49 | 0.90547 | 74.2934ms | 550 | 384 | 668.705 | 145.74 | 0.500978 | 1(Win) |
| lemire_digit_count | 3060.35 | 0.639255 | 634.042ms | 550 | 3072 | 3690.74 | 171.464 | 0.632533 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5537.6 | 1.72165 | 18.6969ms | 550019 | 30 | 7.97857e+07 | 94723.2 | 0.446772 | 1(Win) |
| lemire_digit_count | 4237.03 | 0.776749 | 24.1857ms | 550019 | 30 | 2.77406e+07 | 123799 | 0.583988 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 538.406 | 0.649498 | 34.6507ms | 30 | 192 | 23.3818 | 53.7292 | 1.35714 | 1(Win) |
| lemire_digit_count | 506.673 | 0.218551 | 1229.6ms | 30 | 6144 | 93.3954 | 56.4136 | 1.61312 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1989.56 | 0.424348 | 308.246ms | 300 | 1536 | 572.261 | 143.84 | 0.913371 | 1(Win) |
| lemire_digit_count | 1669.82 | 0.679224 | 35.3924ms | 300 | 192 | 260.513 | 171.495 | 1.16622 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2954.28 | 0.303502 | 18.7193ms | 3000 | 96 | 829.172 | 968.333 | 0.806084 | 1(Win) |
| lemire_digit_count | 2246.86 | 0.636535 | 20.0527ms | 3000 | 96 | 6305.43 | 1273.21 | 1.06954 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3121.54 | 0.124329 | 35.4729ms | 30018 | 96 | 12481 | 9170.95 | 0.7895 | 1(Win) |
| lemire_digit_count | 2354.55 | 0.185722 | 9.12752ms | 30005 | 30 | 15283.1 | 12153 | 1.04778 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1008.44 | 1.64974 | 1.67606ms | 56 | 30 | 23.2828 | 53.4 | 0.752066 | 1(Win) |
| lemire_digit_count | 906.75 | 1.78017 | 34.5917ms | 55 | 192 | 201.752 | 57.5833 | 0.890411 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3603.93 | 0.497759 | 306.06ms | 550 | 1536 | 805.363 | 145.473 | 0.504141 | 1(Win) |
| lemire_digit_count | 3059.87 | 0.347526 | 154.194ms | 549 | 768 | 271.931 | 171.223 | 0.631396 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5418.88 | 0.276838 | 19.1796ms | 5490 | 96 | 686.75 | 966.135 | 0.438785 | 1(Win) |
| lemire_digit_count | 3924.27 | 1.73343 | 4.39678ms | 5477 | 30 | 15970.2 | 1331.03 | 0.613637 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5574.76 | 1.75565 | 18.6245ms | 550086 | 30 | 8.18855e+07 | 94103.2 | 0.443809 | 1(Win) |
| lemire_digit_count | 4249.29 | 0.835479 | 24.1712ms | 550086 | 30 | 3.19169e+07 | 123457 | 0.582317 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1312.26 | 0.73993 | 154.22ms | 75 | 768 | 124.636 | 54.444 | 0.578882 | 1(Win) |
| lemire_digit_count | 1281.09 | 1.25728 | 17.1425ms | 76 | 96 | 48.7473 | 56.6771 | 0.601177 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4907.21 | 0.420517 | 609.833ms | 750 | 3072 | 1153.7 | 145.731 | 0.369434 | 1(Win) |
| lemire_digit_count | 4269.09 | 0.570193 | 8.38335ms | 751 | 48 | 43.9038 | 167.729 | 0.451609 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6738 | 2.08127 | 1.83269ms | 7505 | 30 | 14663.8 | 1062.27 | 0.354855 | 1(Win) |
| lemire_digit_count | 5493.12 | 0.904789 | 4.43326ms | 7505 | 30 | 4169.48 | 1302.97 | 0.438239 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1743.46 | 1.70676 | 3.86135ms | 100 | 30 | 26.1483 | 54.7 | 0.433333 | 1(Win) |
| lemire_digit_count | 1672.39 | 0.667113 | 302.549ms | 100 | 1536 | 222.289 | 57.0247 | 0.493763 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6598.04 | 0.786041 | 74.112ms | 1000 | 384 | 495.669 | 144.539 | 0.274828 | 1(Win) |
| lemire_digit_count | 5643.74 | 0.589816 | 8.32878ms | 1000 | 48 | 47.6804 | 168.979 | 0.342875 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9875.49 | 0.241959 | 18.6771ms | 10000 | 96 | 524.129 | 965.698 | 0.240744 | 1(Win) |
| lemire_digit_count | 7518.56 | 0.273211 | 19.4865ms | 10000 | 96 | 1152.92 | 1268.43 | 0.319448 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10187.9 | 1.78793 | 18.6333ms | 1000000 | 30 | 8.40342e+07 | 93608.8 | 0.242837 | 1(Win) |
| lemire_digit_count | 7757.27 | 0.773772 | 24.1493ms | 1000000 | 30 | 2.71474e+07 | 122939 | 0.318982 | 2(Loss) |

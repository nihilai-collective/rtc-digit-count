# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.18.33.2-microsoft-standard-WSL2 using the GCC 16.1.0 compiler).  

Latest Results: (Sep 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 2498.83 | 0.248494 | 284.374ms | 100 | 30 | 0.271264 | 38.2667 | 0.402926 | 1(Win) |
| rtc_digit_count | 2033.06 | 0.278867 | 233.238ms | 100 | 30 | 0.516092 | 47.0333 | 0.406582 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7030.7 | 2.13458 | 45.9816ms | 1058 | 48 | 450.762 | 143.562 | 0.309574 | 1(Win) |
| lemire_digit_count | 5046.2 | 1.97012 | 46.5288ms | 1058 | 48 | 745.383 | 200.021 | 0.474548 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 8062.78 | 1.60352 | 0.554928ms | 10487 | 30 | 11869.1 | 1240.43 | 0.370736 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 7870.11 | 1.47868 | 0.602551ms | 10487 | 30 | 10593.1 | 1270.8 | 0.380633 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 7801.75 | 0.844034 | 2.42436ms | 104951 | 30 | 351752 | 12829.1 | 0.386859 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 7767.5 | 0.834912 | 2.41623ms | 104951 | 30 | 347231 | 12885.7 | 0.388711 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 7911.06 | 0.855569 | 23.5686ms | 1049949 | 30 | 3.51802e+07 | 126571 | 0.383882 | 1(Win) |
| rtc_digit_count | 7702.57 | 0.936178 | 23.3723ms | 1049949 | 30 | 4.44328e+07 | 129997 | 0.394132 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 606.698 | 0.261793 | 220.083ms | 29 | 30 | 0.447126 | 46.6333 | 1.38315 | 1(Win) |
| lemire_digit_count | 599.838 | 0.205413 | 277.94ms | 29 | 30 | 0.281609 | 47.1667 | 1.67978 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2055.26 | 1.25886 | 33.2178ms | 304 | 30 | 94.7862 | 141.2 | 1.03845 | 1(Win) |
| lemire_digit_count | 1967.48 | 1.74317 | 32.575ms | 304 | 30 | 198.328 | 147.5 | 1.35524 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 2318.29 | 1.14046 | 0.546336ms | 2998 | 30 | 5937.83 | 1233.6 | 1.29133 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 2276.89 | 1.59801 | 0.585145ms | 2998 | 30 | 12086 | 1256.03 | 1.31546 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2249.8 | 0.432327 | 5.57678ms | 29953 | 30 | 90398.7 | 12697.2 | 1.34675 | 1(Win) |
| lemire_digit_count | 2166.77 | 1.60582 | 11.8966ms | 29977 | 48 | 2.15473e+06 | 13194 | 1.39742 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2248.31 | 0.74873 | 23.4699ms | 300070 | 30 | 2.72462e+07 | 127282 | 1.35066 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2247.39 | 0.437731 | 25.9346ms | 300070 | 30 | 9.32026e+06 | 127334 | 1.35148 | 1(Tie) |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 1420.35 | 0.277921 | 283.119ms | 55 | 30 | 0.326437 | 37.5333 | 0.714967 | 1(Win) |
| rtc_digit_count | 1137.49 | 0.222574 | 218.75ms | 55 | 30 | 0.326437 | 46.8667 | 0.741205 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 3457.65 | 2.00648 | 53.4679ms | 542 | 96 | 865.021 | 149.604 | 0.673792 | 1(Win) |
| rtc_digit_count | 3013 | 0.174994 | 32.1039ms | 552 | 30 | 2.8092 | 174.867 | 0.712321 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 4180.15 | 1.51944 | 0.555423ms | 5494 | 30 | 10883.2 | 1253.53 | 0.716195 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 4134.24 | 1.4236 | 0.978294ms | 5490 | 30 | 9751.22 | 1266.43 | 0.724381 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 4143.76 | 0.414663 | 2.46417ms | 54981 | 30 | 82595.8 | 12653.9 | 0.731996 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 4103.95 | 1.4433 | 2.35006ms | 54981 | 30 | 1.02016e+06 | 12776.6 | 0.735552 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 4044.84 | 1.02273 | 23.4548ms | 550080 | 30 | 5.27828e+07 | 129696 | 0.750325 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 4030.28 | 0.593065 | 23.5289ms | 550080 | 30 | 1.78775e+07 | 130164 | 0.753484 | 1(Tie) |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2063.31 | 0.261861 | 227.286ms | 80 | 30 | 0.286207 | 37.3 | 0.408509 | 1(Win) |
| lemire_digit_count | 1639.81 | 0.202607 | 272.488ms | 80 | 30 | 0.271264 | 46.9333 | 0.619166 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5508.53 | 0.986462 | 31.8061ms | 798 | 30 | 55.7299 | 138.167 | 0.395038 | 1(Win) |
| lemire_digit_count | 4147.06 | 1.13506 | 21.6193ms | 798 | 30 | 130.478 | 183.733 | 0.641203 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5999.74 | 1.5777 | 0.593087ms | 8025 | 30 | 12150.7 | 1275.6 | 0.499213 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5857.56 | 1.56836 | 0.946294ms | 7998 | 30 | 12512.6 | 1302.17 | 0.511592 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 6024.11 | 0.50028 | 6.07787ms | 80055 | 30 | 120597 | 12673.5 | 0.503647 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5873.1 | 1.35973 | 5.56209ms | 80055 | 30 | 937280 | 12999.3 | 0.514695 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5898.79 | 2.02548 | 23.39ms | 800008 | 30 | 2.05893e+08 | 129340 | 0.514839 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5853.39 | 1.04714 | 23.9797ms | 800008 | 30 | 5.58861e+07 | 130343 | 0.518769 | 1(Tie) |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2056.78 | 0.238071 | 218.382ms | 100 | 30 | 0.372414 | 46.8 | 0.40819 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2045.13 | 0.248137 | 265.551ms | 100 | 30 | 0.409195 | 47.0667 | 0.497688 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7270.91 | 0.102035 | 33.123ms | 1058 | 30 | 0.602299 | 138.867 | 0.295699 | 1(Win) |
| lemire_digit_count | 5790.6 | 0.0846784 | 34.2911ms | 1058 | 30 | 0.654023 | 174.367 | 0.402242 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7773.88 | 1.49735 | 0.583348ms | 10567 | 30 | 11303.8 | 1296.37 | 0.385294 | 1(Win) |
| lemire_digit_count | 7328.77 | 1.57205 | 0.557921ms | 10567 | 30 | 14019.3 | 1375.1 | 0.408523 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 7902.56 | 0.65185 | 5.79182ms | 104950 | 30 | 204480 | 12665.4 | 0.383763 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 7873.9 | 0.395322 | 2.42473ms | 104915 | 30 | 75704.3 | 12707.2 | 0.385023 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7807.32 | 0.77193 | 23.4377ms | 1049986 | 30 | 2.94064e+07 | 128257 | 0.389041 | 1(Win) |
| lemire_digit_count | 7427.17 | 1.9842 | 23.6554ms | 1049986 | 30 | 2.1469e+08 | 134822 | 0.408064 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1929.57 | 0.270358 | 223.49ms | 75 | 30 | 0.303448 | 37.2 | 0.43357 | 1(Win) |
| lemire_digit_count | 1527.23 | 0.204027 | 271.819ms | 75 | 30 | 0.275862 | 47 | 0.657662 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5130.61 | 0.138982 | 43.4203ms | 751 | 48 | 1.80807 | 139.646 | 0.418402 | 1(Win) |
| lemire_digit_count | 3955.96 | 0.0886002 | 33.0269ms | 749 | 30 | 0.768966 | 180.7 | 0.670076 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5717.07 | 1.26241 | 0.538054ms | 7509 | 30 | 7501.42 | 1252.6 | 0.523842 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5691.02 | 1.36317 | 0.546038ms | 7509 | 30 | 8826.99 | 1258.33 | 0.526106 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5567.25 | 0.439251 | 5.65278ms | 74982 | 30 | 95495.7 | 12844.5 | 0.544696 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5551.16 | 0.649329 | 2.53339ms | 75025 | 30 | 210137 | 12889.2 | 0.546501 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5612.62 | 0.748682 | 23.2189ms | 750037 | 30 | 2.73119e+07 | 127444 | 0.541081 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5480.25 | 1.47162 | 24.3345ms | 750037 | 30 | 1.10683e+08 | 130522 | 0.554257 | 1(Tie) |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 2012.34 | 0.219677 | 275.433ms | 99 | 30 | 0.322989 | 47.2333 | 0.495652 | 1(Win) |
| rtc_digit_count | 1981.57 | 0.30782 | 217.954ms | 99 | 30 | 0.654023 | 47.9667 | 0.423746 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5335.18 | 2.00681 | 43.6858ms | 996 | 48 | 613.202 | 178.104 | 0.394702 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5167.76 | 1.70409 | 21.7844ms | 997 | 30 | 295.266 | 184.1 | 0.514602 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 7520.79 | 1.41904 | 0.844496ms | 10001 | 30 | 9717.53 | 1268.3 | 0.398282 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 7323.32 | 1.98909 | 0.58545ms | 10001 | 30 | 20136.6 | 1302.5 | 0.408823 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 7518.91 | 0.742479 | 2.37391ms | 99860 | 30 | 265319 | 12666 | 0.40326 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 7369.57 | 1.29257 | 5.5553ms | 99855 | 30 | 836935 | 12922 | 0.41171 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7516.83 | 0.582306 | 23.5376ms | 1000119 | 30 | 1.63779e+07 | 126887 | 0.404027 | 1(Win) |
| lemire_digit_count | 7318.06 | 0.777697 | 23.5883ms | 1000119 | 30 | 3.08216e+07 | 130334 | 0.414928 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2660.53 | 0.226905 | 216.378ms | 130 | 30 | 0.34023 | 46.9333 | 0.315173 | 1(Win) |
| lemire_digit_count | 2638.05 | 0.25492 | 273.326ms | 130 | 30 | 0.436782 | 47.3333 | 0.380601 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 6680.71 | 2.15896 | 32.0779ms | 1250 | 30 | 445.706 | 178.533 | 0.326972 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 6396.47 | 2.37171 | 31.8544ms | 1250 | 30 | 586.74 | 186.467 | 0.415805 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 9893.82 | 0.87779 | 0.541056ms | 12507 | 30 | 3359.77 | 1205.6 | 0.302536 | 1(Win) |
| rtc_digit_count | 9592.53 | 1.0119 | 0.599704ms | 12507 | 30 | 4749.71 | 1243.47 | 0.312263 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 9427 | 0.595705 | 2.42541ms | 124987 | 30 | 170204 | 12644.2 | 0.321686 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 9265.19 | 1.1909 | 2.59522ms | 124987 | 30 | 704195 | 12865.1 | 0.327334 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 9068.93 | 1.68009 | 24.7618ms | 1249912 | 30 | 1.46296e+08 | 131439 | 0.334785 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 8996.87 | 1.92149 | 24.1618ms | 1249912 | 30 | 1.94436e+08 | 132492 | 0.337498 | 1(Tie) |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2558.82 | 0.24348 | 233.211ms | 125 | 30 | 0.386207 | 46.6 | 0.328446 | 1(Win) |
| lemire_digit_count | 2529.87 | 0.243574 | 282.867ms | 125 | 30 | 0.395402 | 47.1333 | 0.40016 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8582.84 | 0.10555 | 33.5932ms | 1250 | 30 | 0.644828 | 138.9 | 0.25004 | 1(Win) |
| lemire_digit_count | 6548.97 | 1.06013 | 22.9737ms | 1252 | 30 | 112.092 | 182.333 | 0.406277 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 9523.13 | 1.49781 | 0.984354ms | 12495 | 30 | 10537.9 | 1251.3 | 0.314514 | 1(Win) |
| rtc_digit_count | 7878.45 | 0.89591 | 0.54568ms | 12501 | 30 | 5514.42 | 1513.3 | 0.379973 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 9332.26 | 1.04025 | 5.62016ms | 124965 | 30 | 529425 | 12770.3 | 0.325072 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 9137.85 | 1.23878 | 102.915ms | 125003 | 384 | 1.00295e+07 | 13046 | 0.331447 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 9065.84 | 1.74299 | 24.453ms | 1250057 | 30 | 1.576e+08 | 131499 | 0.334972 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 8973.56 | 1.78356 | 23.9298ms | 1250057 | 30 | 1.68433e+08 | 132851 | 0.338474 | 1(Tie) |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3849.73 | 0.373553 | 225.638ms | 150 | 30 | 0.57931 | 37.2 | 0.215316 | 1(Win) |
| lemire_digit_count | 3042.71 | 0.248137 | 272.142ms | 150 | 30 | 0.409195 | 47.0667 | 0.334961 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10119.6 | 1.40321 | 44.1985ms | 1497 | 48 | 188.121 | 141.083 | 0.213418 | 1(Win) |
| lemire_digit_count | 9766.29 | 0.124984 | 43.0267ms | 1497 | 48 | 1.60239 | 146.188 | 0.271838 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 11297.8 | 1.36334 | 0.580819ms | 15009 | 30 | 8951.17 | 1267 | 0.265102 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 11064.6 | 1.30925 | 1.07467ms | 15010 | 30 | 8607.96 | 1293.8 | 0.269726 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 11351.1 | 0.406528 | 2.46494ms | 150103 | 30 | 78851.1 | 12611.1 | 0.267281 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 11091 | 1.727 | 2.51104ms | 150103 | 30 | 1.49057e+06 | 12906.9 | 0.273137 | 1(Tie) |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 11022.2 | 1.35742 | 24.5287ms | 1499925 | 30 | 9.31009e+07 | 129779 | 0.275405 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 10605.5 | 2.04145 | 59.6188ms | 1499968 | 30 | 2.27458e+08 | 134881 | 0.286203 | 1(Tie) |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 3596.87 | 0.209152 | 216.589ms | 176 | 30 | 0.286207 | 46.7 | 0.231264 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 3586.63 | 0.206875 | 269.631ms | 176 | 30 | 0.281609 | 46.8333 | 0.276495 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 11864.9 | 2.37207 | 32.0477ms | 1746 | 30 | 332.585 | 140.367 | 0.192842 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 11475.4 | 1.39193 | 65.6991ms | 1750 | 192 | 787.518 | 145.5 | 0.189047 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 13187.4 | 1.49544 | 0.960952ms | 17499 | 30 | 10744.4 | 1265.5 | 0.227101 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 12921.8 | 1.25392 | 0.587804ms | 17495 | 30 | 7864.46 | 1291.23 | 0.231813 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13430.1 | 0.611139 | 5.46753ms | 175020 | 30 | 173069 | 12428.2 | 0.225353 | 1(Win) |
| lemire_digit_count | 12750.8 | 0.975048 | 2.54509ms | 174955 | 30 | 488378 | 13085.5 | 0.23795 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 13143.5 | 0.62986 | 23.4345ms | 1750093 | 30 | 1.91914e+07 | 126984 | 0.231004 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 12885.9 | 0.879602 | 23.8512ms | 1750093 | 30 | 3.89392e+07 | 129523 | 0.235655 | 1(Tie) |

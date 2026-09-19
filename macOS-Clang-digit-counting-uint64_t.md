# Digit Counting
Performance profiling of functions (Compiled and run on macOS 25.6.0 using the Clang 23.1.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 10.000000% AND mean shift < 5.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 20 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [4972187](https://github.com/realtimechris/benchmarksuite/commit/4972187).
 
----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count | 2267.32 | 5.02247 | 0.08425ms | 109 | 30 | 158.971 | 45.8333 | 1(Win) |
| rtc_digit_count | 1871.29 | 6.56721 | 0.425083ms | 109 | 30 | 399.016 | 55.5333 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 627.681 | 4.30456 | 0.042334ms | 29 | 30 | 109.913 | 44.4667 | 1(Win) |
| lemire_digit_count | 173.619 | 7.52144 | 190.37ms | 30 | 49152 | 7.54817e+06 | 164.759 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 706.661 | 9.98219 | 3.48571ms | 301 | 384 | 631155 | 406.141 | 1(Win) |
| lemire_digit_count | 273.625 | 3.19937 | 349.483ms | 300 | 12288 | 1.3729e+07 | 1044.76 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 805.906 | 9.33291 | 2.15167ms | 3003 | 30 | 3.30083e+06 | 3554.13 | 1(Win) |
| lemire_digit_count | 222.856 | 9.24556 | 23.3674ms | 2997 | 96 | 1.34994e+08 | 12825.9 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 852.772 | 2.0341 | 11.5819ms | 54982 | 30 | 4.69289e+07 | 61487.6 | 1(Win) |
| lemire_digit_count | 469.282 | 3.27291 | 45.7127ms | 55008 | 30 | 4.01583e+08 | 111787 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 876.93 | 3.1925 | 0.192291ms | 83 | 30 | 249.321 | 90.3 | 1(Win) |
| lemire_digit_count | 227.932 | 4.3028 | 4542.48ms | 80 | 100000 | 2.07545e+07 | 334.815 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count | 483.231 | 9.53603 | 122.542ms | 800 | 1536 | 3.47828e+07 | 1578.04 | 1(Win) |
| rtc_digit_count | 360.103 | 6.20916 | 187.353ms | 801 | 6144 | 1.06551e+08 | 2120.9 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 1657.53 | 9.89028 | 2.76871ms | 7981 | 30 | 6.18707e+06 | 4591.7 | 1(Win) |
| lemire_digit_count | 380.253 | 9.76669 | 48.4256ms | 8014 | 96 | 3.69957e+08 | 20099.8 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 750.374 | 4.54947 | 183.039ms | 800132 | 30 | 6.42112e+10 | 1.01691e+06 | 1(Win) |
| lemire_digit_count | 367.878 | 9.07752 | 720.924ms | 799829 | 30 | 1.06277e+12 | 2.07345e+06 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 1562.19 | 8.80961 | 6.0945ms | 10501 | 48 | 1.5309e+07 | 6410.56 | 1(Win) |
| lemire_digit_count | 567.979 | 7.00403 | 79.2139ms | 10485 | 192 | 2.91938e+08 | 17605.4 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3053.41 | 2.58555 | 6.27762ms | 105030 | 30 | 2.15817e+07 | 32804.2 | 1(Win) |
| lemire_digit_count | 724.744 | 2.87555 | 25.2461ms | 105030 | 30 | 4.73832e+08 | 138207 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 1283.6 | 7.34272 | 17.8278ms | 750 | 1536 | 2.56898e+06 | 556.965 | 1(Win) |
| lemire_digit_count | 426.256 | 9.08485 | 111.528ms | 750 | 3072 | 7.14374e+07 | 1678.55 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2382.09 | 1.40612 | 249.546ms | 75004 | 384 | 6.84586e+07 | 30028 | 1(Win) |
| lemire_digit_count | 1054.64 | 2.50665 | 620.874ms | 75004 | 384 | 1.1099e+09 | 67823.8 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count STATISTICAL TIE | 430.673 | 7.80029 | 789.874ms | 750006 | 30 | 5.03475e+11 | 1.6608e+06 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 424.511 | 6.51239 | 2077.76ms | 750001 | 48 | 5.77921e+11 | 1.6849e+06 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2000.9 | 8.32161 | 8.36883ms | 1000 | 768 | 1.20759e+06 | 476.51 | 1(Win) |
| lemire_digit_count | 555.434 | 9.7191 | 80.2625ms | 1000 | 1536 | 4.27668e+07 | 1716.85 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3364.46 | 7.23661 | 2.06246ms | 10015 | 30 | 1.26608e+06 | 2838.8 | 1(Win) |
| lemire_digit_count | 637.455 | 9.01983 | 32.4547ms | 10002 | 96 | 1.7488e+08 | 14963.6 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2033.22 | 4.26498 | 8.60892ms | 99975 | 30 | 1.19997e+08 | 46893.1 | 1(Win) |
| lemire_digit_count | 853.402 | 1.7996 | 19.995ms | 99975 | 30 | 1.2127e+08 | 111722 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 1140.14 | 4.64427 | 0.195083ms | 123 | 30 | 683.821 | 102.8 | 1(Win) |
| lemire_digit_count | 458.505 | 6.63966 | 742.923ms | 125 | 98304 | 2.92621e+07 | 259.849 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2352.48 | 6.31755 | 13.5539ms | 12510 | 96 | 9.85371e+06 | 5071.26 | 1(Win) |
| lemire_digit_count | 974.557 | 4.66895 | 102.64ms | 12512 | 384 | 1.25486e+08 | 12243.7 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2844.03 | 7.96231 | 3.96071ms | 12503 | 48 | 5.3495e+06 | 4192.73 | 1(Win) |
| lemire_digit_count | 1167.02 | 3.02045 | 163.09ms | 12500 | 768 | 7.31092e+07 | 10214.9 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3163.9 | 5.01408 | 0.095333ms | 152 | 30 | 158.671 | 45.8667 | 1(Win) |
| lemire_digit_count | 544.887 | 5.01599 | 4185.32ms | 150 | 100000 | 1.7337e+07 | 262.501 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2459.78 | 4.76883 | 39.0152ms | 1500 | 3072 | 2.36147e+06 | 581.392 | 1(Win) |
| lemire_digit_count | 1445.11 | 8.79194 | 64.7945ms | 1500 | 3072 | 2.32552e+07 | 989.611 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2815.54 | 0.727373 | 203.789ms | 150008 | 192 | 2.62253e+07 | 50810.3 | 1(Win) |
| lemire_digit_count | 1446.36 | 8.16491 | 19.2272ms | 149873 | 30 | 1.95308e+09 | 98820.8 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3168.07 | 0.655483 | 88.7395ms | 1500214 | 30 | 2.62882e+08 | 451604 | 1(Win) |
| lemire_digit_count | 1574.7 | 8.47296 | 442.172ms | 1500198 | 30 | 1.77783e+11 | 908551 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 3682.82 | 5.03083 | 0.065166ms | 177 | 30 | 159.269 | 45.8 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 3571.06 | 5.59564 | 0.053084ms | 177 | 30 | 209.564 | 47.2333 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3035.23 | 2.45632 | 180.825ms | 1750 | 12288 | 2.2416e+06 | 549.862 | 1(Win) |
| lemire_digit_count | 1870.3 | 5.88302 | 60.0388ms | 1750 | 3072 | 8.46912e+06 | 892.5 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4413.22 | 9.25204 | 3.43246ms | 17506 | 48 | 5.88003e+06 | 3782.96 | 1(Win) |
| lemire_digit_count | 2885.32 | 1.77251 | 412.517ms | 17499 | 3072 | 3.22885e+07 | 5783.95 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2931.37 | 1.28337 | 112.127ms | 174958 | 96 | 5.1227e+07 | 56919.7 | 1(Win) |
| lemire_digit_count | 1664.68 | 1.95616 | 19.6923ms | 175015 | 30 | 1.15403e+08 | 100264 | 2(Loss) |

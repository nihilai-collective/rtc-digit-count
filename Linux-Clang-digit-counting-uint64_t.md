# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the Clang 24.0.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [32913c9](https://github.com/realtimechris/benchmarksuite/commit/32913c9).
 
----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1906.72 | 1.12844 | 3.29853ms | 101 | 30 | 9.67816 | 50.3333 | 0.422657 | 1(Win) |
| lemire_digit_count | 1818.75 | 0.402546 | 272.53ms | 105 | 1536 | 76.0549 | 55.278 | 0.457586 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7522.33 | 1.54739 | 272.628ms | 1052 | 1536 | 6544.63 | 133.397 | 0.221803 | 1(Win) |
| lemire_digit_count | 5018.33 | 0.451969 | 31.7874ms | 1051 | 192 | 156.492 | 199.75 | 0.378734 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11037.4 | 1.0612 | 7.90548ms | 10559 | 48 | 4499.73 | 912.375 | 0.203011 | 1(Win) |
| lemire_digit_count | 6254.21 | 0.278995 | 1.70496ms | 10508 | 30 | 599.54 | 1602.33 | 0.364717 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11541.1 | 2.01899 | 7.12538ms | 104900 | 30 | 918860 | 8668.23 | 0.201247 | 1(Win) |
| lemire_digit_count | 6363.02 | 2.44247 | 10.2083ms | 104900 | 30 | 4.42388e+06 | 15722.2 | 0.36567 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11520.9 | 1.58093 | 116.231ms | 1049900 | 30 | 5.66331e+07 | 86908.5 | 0.202324 | 1(Win) |
| lemire_digit_count | 6320.97 | 1.20307 | 29.9849ms | 1050006 | 30 | 1.08974e+08 | 158419 | 0.368849 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 541.841 | 1.10373 | 29.7284ms | 30 | 192 | 63.0567 | 51.9219 | 1.27595 | 1(Win) |
| lemire_digit_count | 510.957 | 0.2796 | 2152.72ms | 30 | 12288 | 301.168 | 55.9922 | 1.61124 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2164.48 | 0.77319 | 31.7963ms | 300 | 192 | 200.865 | 132.286 | 0.787271 | 1(Win) |
| lemire_digit_count | 1442.81 | 0.33464 | 30.4007ms | 300 | 192 | 84.6784 | 198.453 | 1.31628 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3277.73 | 1.77727 | 17.3036ms | 300073 | 30 | 7.22334e+07 | 87308 | 0.711142 | 1(Win) |
| lemire_digit_count | 1792.25 | 1.30404 | 200.338ms | 299941 | 30 | 1.2995e+08 | 159601 | 1.30084 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 999.382 | 2.04259 | 1.43653ms | 54 | 30 | 33.154 | 51.4667 | 0.773177 | 1(Win) |
| lemire_digit_count | 954.057 | 0.276706 | 543.136ms | 55 | 3072 | 71.4905 | 55.1309 | 0.856165 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3965.31 | 1.04184 | 30.0517ms | 552 | 192 | 367.371 | 132.771 | 0.425675 | 1(Win) |
| lemire_digit_count | 2550.61 | 2.35989 | 3.42328ms | 557 | 30 | 724.907 | 208.3 | 0.741698 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5786.93 | 0.737337 | 7.97614ms | 5476 | 48 | 2125.14 | 902.417 | 0.386733 | 1(Win) |
| lemire_digit_count | 3272.86 | 0.480723 | 4.02382ms | 5504 | 30 | 1783.1 | 1603.73 | 0.697117 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6162.86 | 0.472598 | 3.07455ms | 54930 | 30 | 48413.4 | 8500.23 | 0.376634 | 1(Win) |
| lemire_digit_count | 3417.98 | 0.0967185 | 10.1195ms | 54976 | 30 | 6603.02 | 15339.1 | 0.680704 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5989.94 | 0.977093 | 17.4361ms | 550089 | 30 | 2.19692e+07 | 87581.2 | 0.389149 | 1(Win) |
| lemire_digit_count | 3293.68 | 1.91082 | 70.1704ms | 549931 | 30 | 2.77726e+08 | 159231 | 0.707814 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5891.37 | 0.466201 | 31.5721ms | 803 | 192 | 70.4389 | 129.922 | 0.286855 | 1(Win) |
| lemire_digit_count | 3825.79 | 0.473946 | 30.2475ms | 803 | 192 | 172.629 | 200.068 | 0.495688 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8486.11 | 0.978725 | 3.72162ms | 8032 | 30 | 2341.34 | 902.633 | 0.264349 | 1(Win) |
| lemire_digit_count | 4750.56 | 1.11928 | 1.72282ms | 8037 | 30 | 9782.86 | 1613.37 | 0.479521 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8832.74 | 1.45543 | 17.182ms | 799603 | 30 | 4.73655e+07 | 86333.4 | 0.263897 | 1(Win) |
| lemire_digit_count | 4828.78 | 0.773381 | 150.272ms | 799899 | 48 | 7.16513e+07 | 157978 | 0.482826 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1964.82 | 1.61614 | 7.10762ms | 105 | 48 | 32.8227 | 51.1667 | 0.377668 | 1(Win) |
| lemire_digit_count | 1827.33 | 1.31962 | 30.1717ms | 107 | 192 | 103.898 | 55.7448 | 0.441974 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7624.1 | 0.452179 | 66.6181ms | 1049 | 384 | 135.19 | 131.219 | 0.220873 | 1(Win) |
| lemire_digit_count | 5016.77 | 0.601379 | 32.4351ms | 1050 | 192 | 276.698 | 199.62 | 0.379267 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10567.5 | 2.26565 | 151.004ms | 10507 | 768 | 354481 | 948.25 | 0.212088 | 1(Win) |
| lemire_digit_count | 6239.5 | 0.513434 | 4.0068ms | 10502 | 30 | 2037.57 | 1605.13 | 0.365184 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11580.5 | 1.26594 | 17.2395ms | 1049557 | 30 | 3.59177e+07 | 86433 | 0.201285 | 1(Win) |
| lemire_digit_count | 6310.84 | 1.32349 | 30.0637ms | 1049557 | 30 | 1.32191e+08 | 158606 | 0.369428 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1425.22 | 1.71824 | 1.4102ms | 76 | 30 | 23.1276 | 51.1 | 0.492798 | 1(Win) |
| lemire_digit_count | 1299.7 | 0.280622 | 274.307ms | 75 | 1536 | 36.5577 | 54.9759 | 0.636433 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5454.96 | 0.581099 | 29.9027ms | 750 | 192 | 111.323 | 131.036 | 0.308961 | 1(Win) |
| lemire_digit_count | 3450.44 | 1.4067 | 7.17976ms | 747 | 48 | 405.273 | 206.562 | 0.551808 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7979.86 | 0.784176 | 3.70813ms | 7521 | 30 | 1490.3 | 898.8 | 0.280493 | 1(Win) |
| lemire_digit_count | 4460.48 | 0.519907 | 3.99704ms | 7521 | 30 | 2096.65 | 1607.97 | 0.511149 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8207.2 | 1.81708 | 17.2115ms | 749858 | 30 | 7.52036e+07 | 87133.3 | 0.284002 | 1(Win) |
| lemire_digit_count | 4507.7 | 1.32017 | 70.0884ms | 750114 | 30 | 1.31681e+08 | 158698 | 0.517209 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1808.46 | 1.33096 | 66.4427ms | 100 | 384 | 190.291 | 52.8906 | 0.392455 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1752.53 | 0.961315 | 14.5534ms | 99 | 96 | 25.9595 | 54.0938 | 0.449335 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7263.65 | 0.617782 | 32.2619ms | 1002 | 192 | 126.824 | 131.557 | 0.230808 | 1(Win) |
| lemire_digit_count | 4797.8 | 0.42712 | 32.3196ms | 1002 | 192 | 138.949 | 199.172 | 0.395649 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10527.6 | 0.656534 | 35.4258ms | 10000 | 192 | 6791.13 | 905.865 | 0.212282 | 1(Win) |
| lemire_digit_count | 5978.56 | 0.223751 | 1.72584ms | 9993 | 30 | 381.651 | 1594.07 | 0.381481 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11035.5 | 0.656879 | 136.904ms | 99986 | 384 | 1.23709e+06 | 8640.7 | 0.210351 | 1(Win) |
| lemire_digit_count | 5840.17 | 2.22872 | 298.143ms | 100004 | 438 | 5.80188e+07 | 16330.2 | 0.398374 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11144.9 | 0.898741 | 40.3278ms | 1000000 | 30 | 1.77434e+07 | 85570.4 | 0.209156 | 1(Win) |
| lemire_digit_count | 6116.86 | 0.767426 | 29.9393ms | 1000098 | 30 | 4.29558e+07 | 155924 | 0.381149 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2300.22 | 1.59429 | 7.06263ms | 125 | 48 | 32.9109 | 51.9375 | 0.285215 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2203.52 | 1.66743 | 1.41366ms | 124 | 30 | 24.023 | 53.6667 | 0.395161 | 1(Tie) |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9046.48 | 0.21118 | 550.335ms | 1250 | 3072 | 237.952 | 131.789 | 0.187191 | 1(Win) |
| lemire_digit_count | 6023.08 | 0.282576 | 30.3726ms | 1255 | 192 | 60.4932 | 198.641 | 0.314589 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13078.7 | 0.658301 | 605.652ms | 12501 | 3072 | 110617 | 911.539 | 0.171203 | 1(Win) |
| lemire_digit_count | 7450.11 | 0.291438 | 8.54346ms | 12537 | 48 | 1050.1 | 1604.9 | 0.306026 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13759.5 | 0.764135 | 136.631ms | 124969 | 384 | 1.68215e+06 | 8661.57 | 0.168717 | 1(Win) |
| lemire_digit_count | 7790.36 | 0.0959291 | 4.29034ms | 124974 | 30 | 6461.72 | 15299 | 0.298674 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13584 | 1.91223 | 17.3089ms | 1250281 | 30 | 8.45202e+07 | 87776.9 | 0.171594 | 1(Win) |
| lemire_digit_count | 7499.82 | 1.15155 | 70.35ms | 1250252 | 30 | 1.0055e+08 | 158981 | 0.310863 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2278.08 | 1.81065 | 1.41961ms | 123 | 30 | 26.1195 | 51.5333 | 0.31844 | 1(Win) |
| lemire_digit_count | 2166.47 | 1.18644 | 29.8046ms | 126 | 192 | 82.8283 | 55.3594 | 0.367514 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9171.82 | 0.662674 | 30.3024ms | 1250 | 192 | 142.434 | 129.974 | 0.182999 | 1(Win) |
| lemire_digit_count | 5959.24 | 0.357835 | 66.0203ms | 1251 | 384 | 196.966 | 200.146 | 0.318296 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13250 | 1.47384 | 16.7714ms | 12507 | 96 | 16898.9 | 900.208 | 0.168974 | 1(Win) |
| lemire_digit_count | 7451.45 | 0.294095 | 1.7145ms | 12501 | 30 | 664.202 | 1599.93 | 0.306185 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2770.4 | 0.356833 | 267.112ms | 150 | 1536 | 51.8579 | 51.4928 | 0.258836 | 1(Win) |
| lemire_digit_count | 2604.61 | 0.185129 | 2175.79ms | 150 | 12288 | 127.148 | 54.9463 | 0.317482 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11066.8 | 0.531594 | 30.8093ms | 1501 | 192 | 90.8233 | 129.38 | 0.151687 | 1(Win) |
| lemire_digit_count | 7201.12 | 0.290614 | 30.5681ms | 1501 | 192 | 64.1082 | 198.833 | 0.262374 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 15884.3 | 1.01728 | 34.4824ms | 15010 | 192 | 16135.6 | 901.156 | 0.140773 | 1(Win) |
| lemire_digit_count | 8818.93 | 1.33243 | 8.58651ms | 14977 | 48 | 22352.5 | 1619.56 | 0.258505 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 17177.7 | 0.328816 | 3.00803ms | 149981 | 30 | 22489 | 8326.67 | 0.13516 | 1(Win) |
| lemire_digit_count | 9244.82 | 0.941778 | 4.30955ms | 149981 | 30 | 636932 | 15471.7 | 0.251648 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3238.99 | 1.62508 | 14.5956ms | 175 | 96 | 67.4859 | 51.5938 | 0.225479 | 1(Win) |
| lemire_digit_count | 3048.74 | 1.70901 | 3.30688ms | 175 | 30 | 26.2172 | 54.7 | 0.224552 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 13007.3 | 0.454748 | 32.8065ms | 1750 | 192 | 65.349 | 128.292 | 0.129349 | 1(Win) |
| lemire_digit_count | 8341.24 | 0.412634 | 30.1128ms | 1750 | 192 | 130.84 | 200.057 | 0.227293 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 18861.3 | 0.620227 | 16.3147ms | 17504 | 96 | 2892.82 | 885.062 | 0.118475 | 1(Win) |
| lemire_digit_count | 10437.7 | 0.223978 | 8.54387ms | 17488 | 48 | 614.819 | 1597.9 | 0.2184 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 19223.7 | 1.42106 | 86.036ms | 1750044 | 48 | 7.3062e+07 | 86818.7 | 0.121252 | 1(Win) |
| lemire_digit_count | 10493.7 | 1.33634 | 200.369ms | 1750104 | 30 | 1.35527e+08 | 159051 | 0.222176 | 2(Loss) |

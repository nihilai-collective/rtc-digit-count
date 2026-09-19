# Digit Counting
Performance profiling of functions (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36256.0 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [32913c9](https://github.com/realtimechris/benchmarksuite/commit/32913c9).
 
----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2054.77 | 1.30955 | 11.4391ms | 105 | 6144 | 2502.05 | 48.7305 | 0.301066 | 1(Win) |
| lemire_digit_count | 1856.01 | 2.34477 | 3.0004ms | 106 | 1536 | 2483.71 | 54.2318 | 0.418743 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6901.17 | 0.579031 | 23.0502ms | 1050 | 6144 | 4335.11 | 145.068 | 0.251236 | 1(Win) |
| lemire_digit_count | 5224.58 | 0.823435 | 3.6692ms | 1049 | 768 | 1907.8 | 191.406 | 0.359047 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 5580.82 | 0.490712 | 3.442ms | 10515 | 96 | 7463.82 | 1796.88 | 0.406799 | 1(Win) |
| rtc_digit_count | 4606.36 | 0.692382 | 57.4853ms | 10501 | 1536 | 348068 | 2174.15 | 0.496334 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8926.45 | 0.459056 | 4.8456ms | 105020 | 30 | 79586.2 | 11220 | 0.260716 | 1(Win) |
| lemire_digit_count | 5668.65 | 0.695695 | 16.2428ms | 104974 | 48 | 724570 | 17660.4 | 0.410268 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8731.16 | 1.07264 | 136.673ms | 1050051 | 30 | 4.54055e+07 | 114693 | 0.266934 | 1(Win) |
| lemire_digit_count | 5530.7 | 1.13481 | 256.871ms | 1050051 | 30 | 1.26657e+08 | 181063 | 0.421428 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 572.017 | 0.490323 | 92.0333ms | 30 | 49152 | 2965.55 | 50.0956 | 1.11061 | 1(Win) |
| lemire_digit_count | 528.655 | 1.17518 | 12.0017ms | 30 | 6144 | 2483.58 | 54.1016 | 1.46576 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2024.37 | 1.3923 | 2.8813ms | 300 | 768 | 2976.9 | 141.406 | 0.851605 | 1(Win) |
| lemire_digit_count | 1506.35 | 0.943404 | 1.8238ms | 301 | 384 | 1238.51 | 190.365 | 1.25446 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2462.07 | 1.00693 | 2.3277ms | 2999 | 96 | 13130.5 | 1161.46 | 0.915291 | 1(Win) |
| lemire_digit_count | 1591.53 | 0.794419 | 1.6944ms | 2997 | 48 | 9769.5 | 1795.83 | 1.43505 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2500.82 | 0.858819 | 138.822ms | 30000 | 438 | 4.22808e+06 | 11440.2 | 0.929185 | 1(Win) |
| lemire_digit_count | 1648.43 | 0.228673 | 3.2348ms | 30036 | 30 | 47367.8 | 17376.7 | 1.41257 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2481.23 | 1.34966 | 48.4826ms | 300174 | 30 | 7.27413e+07 | 115373 | 0.939404 | 1(Win) |
| lemire_digit_count | 1607.06 | 1.13866 | 32.1554ms | 300026 | 30 | 1.233e+08 | 178043 | 1.45031 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1056.15 | 0.919913 | 23.0987ms | 55 | 12288 | 2570.12 | 49.7152 | 0.598627 | 1(Win) |
| lemire_digit_count | 928.982 | 2.23614 | 3.0115ms | 55 | 1536 | 2458.36 | 56.5755 | 0.790396 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3752.9 | 1.41937 | 2.8688ms | 550 | 768 | 3025.79 | 139.844 | 0.45771 | 1(Win) |
| lemire_digit_count | 2751.27 | 1.13308 | 1.8481ms | 551 | 384 | 1801.29 | 191.146 | 0.685974 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4422.15 | 1.2472 | 83.5366ms | 5502 | 3072 | 672849 | 1186.62 | 0.510501 | 1(Win) |
| lemire_digit_count | 1600.05 | 1.07189 | 0.6032ms | 5481 | 30 | 36781.6 | 3266.67 | 1.44164 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4695.75 | 0.374779 | 10.3663ms | 54973 | 48 | 84038.1 | 11164.6 | 0.494877 | 1(Win) |
| lemire_digit_count | 2970.67 | 0.663155 | 16.2286ms | 54973 | 48 | 657442 | 17647.9 | 0.783544 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1547.25 | 1.83174 | 5.7127ms | 80 | 3072 | 2500.25 | 49.2513 | 0.41189 | 1(Win) |
| lemire_digit_count | 1438.91 | 2.38504 | 2.9877ms | 81 | 1536 | 2490.16 | 53.3854 | 0.548358 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5394.36 | 1.49325 | 2.9136ms | 799 | 768 | 3417.93 | 141.276 | 0.322144 | 1(Win) |
| lemire_digit_count | 3864.56 | 0.378944 | 260.002ms | 800 | 49152 | 27521.4 | 197.465 | 0.490984 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6623.89 | 1.0832 | 0.2281ms | 7988 | 30 | 4655.17 | 1150 | 0.339151 | 1(Win) |
| lemire_digit_count | 4287.51 | 0.697663 | 0.3412ms | 7988 | 30 | 4609.2 | 1776.67 | 0.53146 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1991.18 | 0.542374 | 735.505ms | 105 | 100000 | 7423.82 | 50.236 | 0.319854 | 1(Win) |
| lemire_digit_count | 1827.57 | 0.865262 | 96.3096ms | 105 | 49152 | 11022.8 | 54.7302 | 0.430032 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7144.87 | 1.01278 | 5.7214ms | 1050 | 1536 | 3095.48 | 140.169 | 0.241592 | 1(Win) |
| lemire_digit_count | 5260.56 | 1.16582 | 1.8175ms | 1049 | 384 | 1886.15 | 190.104 | 0.363631 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8861.41 | 1.47899 | 0.22ms | 10500 | 30 | 8379.31 | 1130 | 0.256665 | 1(Win) |
| lemire_digit_count | 5625.5 | 0.681436 | 0.3295ms | 10500 | 30 | 4413.79 | 1780 | 0.404297 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8672.2 | 0.695336 | 95.2249ms | 105060 | 384 | 2.47821e+06 | 11553.4 | 0.267949 | 1(Win) |
| lemire_digit_count | 3053.5 | 2.01037 | 5.8607ms | 105009 | 30 | 1.30417e+07 | 32796.7 | 0.762263 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8897.55 | 1.21553 | 20.2919ms | 1049567 | 30 | 5.60962e+07 | 112497 | 0.261931 | 1(Win) |
| lemire_digit_count | 5658.78 | 0.995396 | 31.8814ms | 1049567 | 30 | 9.30007e+07 | 176883 | 0.411969 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1415.18 | 0.616459 | 387.808ms | 75 | 100000 | 9703.02 | 50.53 | 0.458468 | 1(Win) |
| lemire_digit_count | 930.37 | 2.2306 | 26.6258ms | 75 | 12288 | 36060.5 | 76.7985 | 1.12089 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5053.38 | 1.94423 | 1.4333ms | 749 | 384 | 2902.46 | 141.406 | 0.343602 | 1(Win) |
| lemire_digit_count | 3684.11 | 0.81534 | 3.6312ms | 748 | 768 | 1916.56 | 193.75 | 0.510234 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6143.79 | 1.5685 | 0.2689ms | 7494 | 30 | 9988.51 | 1163.33 | 0.366457 | 1(Win) |
| lemire_digit_count | 4076.4 | 0.594942 | 0.3429ms | 7494 | 30 | 3264.37 | 1753.33 | 0.563371 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6189.61 | 1.41098 | 43.7997ms | 74990 | 192 | 5.10291e+06 | 11554.2 | 0.375385 | 1(Win) |
| lemire_digit_count | 4027.22 | 1.30088 | 33.3086ms | 75008 | 96 | 5.12574e+06 | 17762.5 | 0.577656 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6260.37 | 1.05761 | 20.836ms | 749882 | 30 | 4.37885e+07 | 114233 | 0.372258 | 1(Win) |
| lemire_digit_count | 2220.57 | 0.614178 | 56.0562ms | 749882 | 30 | 1.17372e+08 | 322053 | 1.04995 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1898.53 | 0.799625 | 374.906ms | 100 | 100000 | 16136.9 | 50.237 | 0.336636 | 1(Win) |
| lemire_digit_count | 1723.45 | 0.716131 | 193.985ms | 100 | 98304 | 15441.6 | 55.3436 | 0.450268 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6773.6 | 0.939917 | 5.8188ms | 1000 | 1536 | 2690.92 | 140.82 | 0.25266 | 1(Win) |
| lemire_digit_count | 5022.49 | 0.776717 | 3.6658ms | 1000 | 768 | 1669.86 | 189.844 | 0.377681 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8215.88 | 0.948747 | 2.3066ms | 10006 | 96 | 11656.8 | 1161.46 | 0.27439 | 1(Win) |
| lemire_digit_count | 5357.14 | 0.534359 | 3.5136ms | 10006 | 96 | 8697.37 | 1781.25 | 0.427911 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8613.13 | 0.486965 | 2.047ms | 99949 | 30 | 87126.4 | 11066.7 | 0.269565 | 1(Win) |
| lemire_digit_count | 5398.45 | 0.565501 | 3.2297ms | 99949 | 30 | 299092 | 17656.7 | 0.431021 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8333.08 | 1.14775 | 20.8066ms | 999816 | 30 | 5.17419e+07 | 114423 | 0.27968 | 1(Win) |
| lemire_digit_count | 5191.56 | 0.948377 | 33.0436ms | 999816 | 30 | 9.10183e+07 | 183663 | 0.449051 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2340.67 | 0.603086 | 1160.67ms | 125 | 100000 | 9431.24 | 50.922 | 0.2733 | 1(Win) |
| lemire_digit_count | 2152.6 | 0.911572 | 96.5812ms | 125 | 49152 | 12527 | 55.3813 | 0.362009 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8331.91 | 0.733845 | 11.6416ms | 1248 | 3072 | 3373.82 | 142.806 | 0.207432 | 1(Win) |
| lemire_digit_count | 6118.21 | 1.1794 | 1.8586ms | 1255 | 384 | 2043.01 | 195.573 | 0.311114 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10350.3 | 1.48345 | 0.5045ms | 12517 | 30 | 8781.61 | 1153.33 | 0.217646 | 1(Win) |
| lemire_digit_count | 6509.62 | 1.61827 | 0.3562ms | 12491 | 30 | 26310.3 | 1830 | 0.349324 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10570.5 | 0.398007 | 10.4548ms | 124995 | 48 | 96697.7 | 11277.1 | 0.219974 | 1(Win) |
| lemire_digit_count | 6616.96 | 0.505043 | 236.91ms | 125051 | 438 | 3.62901e+06 | 18023.1 | 0.351468 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10464.5 | 1.34934 | 20.3718ms | 1249691 | 30 | 7.08492e+07 | 113890 | 0.222648 | 1(Win) |
| lemire_digit_count | 6789.45 | 0.588399 | 31.6677ms | 1249691 | 30 | 3.20038e+07 | 175537 | 0.343325 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2287.76 | 0.613181 | 421.813ms | 125 | 100000 | 10209.1 | 52.108 | 0.285509 | 1(Win) |
| lemire_digit_count | 1847.66 | 1.60768 | 54.5564ms | 125 | 24576 | 26437.6 | 64.5142 | 0.466394 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8385.19 | 1.84902 | 1.4461ms | 1250 | 384 | 2654.21 | 142.188 | 0.206986 | 1(Win) |
| lemire_digit_count | 6297.1 | 0.745187 | 3.6548ms | 1250 | 768 | 1528.62 | 189.323 | 0.301271 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10344 | 1.29697 | 0.2262ms | 12510 | 30 | 6712.64 | 1153.33 | 0.216999 | 1(Win) |
| lemire_digit_count | 6842.04 | 0.595186 | 0.7695ms | 12507 | 30 | 3229.89 | 1743.33 | 0.338688 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10614.1 | 0.377764 | 4.8135ms | 125024 | 30 | 54023 | 11233.3 | 0.218766 | 1(Win) |
| lemire_digit_count | 6635.67 | 0.952257 | 67.6272ms | 125016 | 192 | 5.62044e+06 | 17967.2 | 0.350553 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10453.2 | 1.07119 | 20.5389ms | 1249806 | 30 | 4.4755e+07 | 114023 | 0.222909 | 1(Win) |
| lemire_digit_count | 6640 | 0.896797 | 187.23ms | 1249936 | 48 | 1.24414e+08 | 179523 | 0.350899 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2830.93 | 0.936248 | 748.593ms | 150 | 100000 | 22388.1 | 50.538 | 0.231152 | 1(Win) |
| lemire_digit_count | 2613.14 | 0.654579 | 816.322ms | 150 | 100000 | 12843.8 | 54.75 | 0.299792 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10349.8 | 1.37067 | 2.8372ms | 1499 | 768 | 2753.81 | 138.151 | 0.169914 | 1(Win) |
| lemire_digit_count | 7478.53 | 1.21974 | 1.8146ms | 1501 | 384 | 2093.06 | 191.406 | 0.254707 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12486.7 | 1.30451 | 0.5108ms | 15014 | 30 | 6712.64 | 1146.67 | 0.179886 | 1(Win) |
| lemire_digit_count | 8058.94 | 0.442066 | 0.7969ms | 15014 | 30 | 1850.57 | 1776.67 | 0.281168 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 12561.8 | 1.16254 | 20.4709ms | 1500069 | 30 | 5.25849e+07 | 113883 | 0.185547 | 1(Win) |
| lemire_digit_count | 8079.72 | 0.724541 | 74.2661ms | 1500087 | 30 | 4.93728e+07 | 177060 | 0.288538 | 2(Loss) |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3314.29 | 0.641351 | 1192.94ms | 175 | 100000 | 10428.6 | 50.352 | 0.191232 | 1(Win) |
| lemire_digit_count | 1901.75 | 2.25713 | 34.3258ms | 175 | 12288 | 48180.1 | 87.7279 | 0.579929 | 2(Loss) |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 11916.2 | 0.712612 | 11.4236ms | 1750 | 3072 | 3059.33 | 140.039 | 0.145021 | 1(Win) |
| lemire_digit_count | 8785.51 | 0.363577 | 14.5118ms | 1750 | 3072 | 1465.06 | 189.941 | 0.21486 | 2(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14385.5 | 1.06187 | 0.2317ms | 17498 | 30 | 4551.72 | 1160 | 0.155282 | 1(Win) |
| lemire_digit_count | 9499.37 | 0.705606 | 0.3604ms | 17498 | 30 | 4609.2 | 1756.67 | 0.244099 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14841.7 | 0.383052 | 4.8953ms | 175028 | 30 | 55678.2 | 11246.7 | 0.156374 | 1(Win) |
| lemire_digit_count | 9261.72 | 1.1228 | 3.2391ms | 174971 | 30 | 1.22764e+06 | 18016.7 | 0.251104 | 2(Loss) |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 14884.3 | 1.25213 | 20.2449ms | 1749838 | 30 | 5.91235e+07 | 112117 | 0.156566 | 1(Win) |
| lemire_digit_count | 9059.64 | 0.95111 | 275.54ms | 1750071 | 30 | 9.21025e+07 | 184223 | 0.257309 | 2(Loss) |

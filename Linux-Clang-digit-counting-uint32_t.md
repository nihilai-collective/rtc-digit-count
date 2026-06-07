# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| lemire-digit-count-32 **STATISTICAL TIE** | 2318.35 | 3.14587 | 549718 | 60 | 398 |
| rtc-digit-count-32 **STATISTICAL TIE** | 2276.19 | 2.7948 | 549860 | 60 | 363 |
| fast-digit-count-32 **STATISTICAL TIE** | 2097.95 | 3.50184 | 549778 | 60 | 381 |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 | 2752.24 | 1.68724 | 54977 | 60 | 153 |
| lemire-digit-count-32 | 2438.95 | 2.59955 | 54921 | 60 | 120 |
| fast-digit-count-32 | 2051.94 | 1.99822 | 55024 | 60 | 55 |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 | 5845.68 | 0.654114 | 5488 | 60 | 46 |
| fast-digit-count-32 | 2504.91 | 3.30949 | 5504 | 60 | 6 |
| lemire-digit-count-32 | 2069.6 | 2.06746 | 5492 | 60 | 58 |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 | 4008.01 | 1.43515 | 553 | 60 | 46 |
| fast-digit-count-32 | 3602.27 | 1.32182 | 555 | 60 | 33 |
| lemire-digit-count-32 | 1521.68 | 4.68715 | 553 | 60 | 41 |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-32 **STATISTICAL TIE** | 1498.21 | 2.11424 | 55 | 60 | 47 |
| lemire-digit-count-32 **STATISTICAL TIE** | 1436.89 | 3.22149 | 56 | 60 | 294 |
| rtc-digit-count-32 **STATISTICAL TIE** | 1322.55 | 2.72832 | 53 | 60 | 121 |

----
### uint32_t-integer_count[1]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 **STATISTICAL TIE** | 170.199 | 6.48541 | 6 | 60 | 420 |
| fast-digit-count-32 **STATISTICAL TIE** | 160.951 | 7.02378 | 5 | 60 | 10 |
| lemire-digit-count-32 **STATISTICAL TIE** | 159.658 | 6.70353 | 5 | 60 | 49 |

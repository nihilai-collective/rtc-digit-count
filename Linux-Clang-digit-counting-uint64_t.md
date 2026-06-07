# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| lemire-digit-count-64 **STATISTICAL TIE** | 7393.31 | 1.12736 | 1045221 | 60 | 840 |
| fast-digit-count-64 **STATISTICAL TIE** | 7302.48 | 1.243 | 1045006 | 60 | 886 |
| rtc-digit-count-64 **STATISTICAL TIE** | 6964.08 | 1.38806 | 1044303 | 60 | 396 |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 7915.5 | 0.434076 | 104403 | 60 | 57 |
| fast-digit-count-64 | 7575.35 | 0.481745 | 104417 | 60 | 60 |
| lemire-digit-count-64 | 7314.43 | 0.503954 | 104417 | 60 | 60 |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 **STATISTICAL TIE** | 8531.14 | 0.409839 | 10440 | 60 | 44 |
| fast-digit-count-64 **STATISTICAL TIE** | 8500.06 | 0.533281 | 10459 | 60 | 59 |
| lemire-digit-count-64 | 7488.27 | 0.491325 | 10463 | 60 | 300 |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 7277.3 | 0.696745 | 1052 | 60 | 59 |
| fast-digit-count-64 | 7022.06 | 0.657874 | 1052 | 60 | 60 |
| lemire-digit-count-64 | 5785.23 | 3.4235 | 1049 | 60 | 51 |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 **STATISTICAL TIE** | 2796.66 | 1.73443 | 107 | 60 | 150 |
| lemire-digit-count-64 **STATISTICAL TIE** | 2702.53 | 1.73018 | 107 | 60 | 150 |
| rtc-digit-count-64 **STATISTICAL TIE** | 2684.5 | 1.72882 | 107 | 60 | 150 |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 **STATISTICAL TIE** | 426.287 | 5.05967 | 12 | 60 | 18 |
| rtc-digit-count-64 **STATISTICAL TIE** | 410.14 | 5.03516 | 12 | 60 | 18 |
| lemire-digit-count-64 **STATISTICAL TIE** | 396.821 | 5.45902 | 12 | 60 | 18 |

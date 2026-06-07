# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.6 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 4699.08 | 0.376463 | 1044722 | 60 | 898 |
| lemire-digit-count-64 | 4249.83 | 0.387478 | 1044888 | 60 | 300 |
| fast-digit-count-64 | 4241.85 | 0.474126 | 1044733 | 60 | 840 |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 4187.1 | 0.233331 | 104456 | 60 | 2 |
| lemire-digit-count-64 | 4118.59 | 0.554405 | 104366 | 60 | 40 |
| fast-digit-count-64 | 3918.15 | 1.83592 | 104362 | 60 | 31 |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 **STATISTICAL TIE** | 4218.3 | 0.379888 | 10510 | 60 | 177 |
| rtc-digit-count-64 **STATISTICAL TIE** | 4160.57 | 0.485153 | 10495 | 60 | 163 |
| lemire-digit-count-64 | 3890.36 | 0.825056 | 10471 | 60 | 138 |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 **STATISTICAL TIE** | 3899.62 | 1.12486 | 1045 | 60 | 21 |
| fast-digit-count-64 **STATISTICAL TIE** | 3896.38 | 1.03528 | 1040 | 60 | 176 |
| lemire-digit-count-64 **STATISTICAL TIE** | 3793.63 | 1.49819 | 1051 | 60 | 156 |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 **STATISTICAL TIE** | 2283.34 | 3.23215 | 105 | 60 | 126 |
| rtc-digit-count-64 **STATISTICAL TIE** | 2236.03 | 3.09865 | 104 | 60 | 131 |
| lemire-digit-count-64 **STATISTICAL TIE** | 2234.74 | 3.01659 | 103 | 60 | 14 |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 **STATISTICAL TIE** | 265.052 | 7.0512 | 11 | 60 | 11 |
| rtc-digit-count-64 **STATISTICAL TIE** | 263.685 | 6.7444 | 11 | 60 | 420 |
| lemire-digit-count-64 **STATISTICAL TIE** | 253 | 6.62124 | 10 | 60 | 401 |

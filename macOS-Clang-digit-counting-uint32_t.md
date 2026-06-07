# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.6 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 **STATISTICAL TIE** | 2340.29 | 0.211634 | 549836 | 60 | 846 |
| lemire-digit-count-32 **STATISTICAL TIE** | 2328.82 | 0.174298 | 549943 | 60 | 245 |
| fast-digit-count-32 **STATISTICAL TIE** | 2312.16 | 0.315688 | 549912 | 60 | 180 |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| lemire-digit-count-32 **STATISTICAL TIE** | 2319.81 | 0.149435 | 55012 | 60 | 8 |
| fast-digit-count-32 **STATISTICAL TIE** | 2312.17 | 0.214667 | 54994 | 60 | 860 |
| rtc-digit-count-32 **STATISTICAL TIE** | 2307.42 | 0.263502 | 54981 | 60 | 415 |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 **STATISTICAL TIE** | 2333.4 | 0.225353 | 5502 | 60 | 14 |
| fast-digit-count-32 **STATISTICAL TIE** | 2323.68 | 0.219173 | 5496 | 60 | 45 |
| lemire-digit-count-32 | 2282.77 | 0.34071 | 5498 | 60 | 410 |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| lemire-digit-count-32 **STATISTICAL TIE** | 2089.58 | 0.824418 | 552 | 60 | 849 |
| fast-digit-count-32 **STATISTICAL TIE** | 2086.22 | 0.91648 | 556 | 60 | 369 |
| rtc-digit-count-32 **STATISTICAL TIE** | 2065.78 | 0.809958 | 550 | 60 | 842 |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-32 **STATISTICAL TIE** | 1192.26 | 2.80681 | 53 | 60 | 877 |
| lemire-digit-count-32 **STATISTICAL TIE** | 1186.35 | 3.4753 | 56 | 60 | 390 |
| rtc-digit-count-32 **STATISTICAL TIE** | 1175.83 | 3.08713 | 56 | 60 | 847 |

----
### uint32_t-integer_count[1]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 **STATISTICAL TIE** | 132.849 | 8.17595 | 5 | 60 | 420 |
| lemire-digit-count-32 **STATISTICAL TIE** | 131.675 | 7.82623 | 5 | 60 | 57 |
| fast-digit-count-32 **STATISTICAL TIE** | 126.583 | 7.12849 | 5 | 60 | 23 |

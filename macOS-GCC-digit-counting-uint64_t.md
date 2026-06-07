# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Apple M1 (Virtual)): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 | 9243.79 | 0.405905 | 1045106 | 60 | 150 |
| rtc-digit-count-64 | 8105.52 | 0.377826 | 1044923 | 60 | 123 |
| lemire-digit-count-64 | 511.168 | 2.01634 | 1044926 | 60 | 175 |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 | 8743.76 | 0.814336 | 104512 | 60 | 176 |
| lemire-digit-count-64 | 7350.13 | 1.50462 | 104553 | 60 | 146 |
| rtc-digit-count-64 | 7304.04 | 3.0909 | 104400 | 60 | 18 |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 8460.16 | 3.51874 | 10435 | 60 | 37 |
| lemire-digit-count-64 | 6497.32 | 4.73623 | 10442 | 60 | 6 |
| fast-digit-count-64 | 2601.21 | 1.55857 | 10460 | 60 | 176 |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 **STATISTICAL TIE** | 1001.15 | 1.56789 | 1044 | 60 | 171 |
| fast-digit-count-64 **STATISTICAL TIE** | 997.543 | 1.7357 | 1037 | 60 | 135 |
| lemire-digit-count-64 **STATISTICAL TIE** | 994.619 | 1.01091 | 1036 | 60 | 55 |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 113.487 | 0 | 104 | 60 | 17 |
| fast-digit-count-64 | 106.621 | 1.27754 | 104 | 60 | 0 |
| lemire-digit-count-64 | 89.6454 | 0 | 107 | 60 | 34 |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 | 18.1198 | 0 | 11 | 60 | 120 |
| lemire-digit-count-64 | 8.58307 | 0 | 10 | 60 | 60 |
| rtc-digit-count-64 | 3.8147 | 0 | 9 | 60 | 166 |

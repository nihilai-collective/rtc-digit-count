# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 7713.03 | 0.362544 | 1044737 | 60 | 8 |
| lemire-digit-count-64 | 7564.99 | 0.443161 | 1044684 | 60 | 56 |
| fast-digit-count-64 | 7244.91 | 1.05717 | 1044724 | 60 | 60 |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 8048.39 | 0.395602 | 104503 | 60 | 37 |
| fast-digit-count-64 | 7325.89 | 1.22013 | 104582 | 60 | 12 |
| lemire-digit-count-64 | 6858.9 | 1.46825 | 104608 | 60 | 9 |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 | 8449.06 | 0.543755 | 10463 | 60 | 11 |
| fast-digit-count-64 | 8211.01 | 0.707893 | 10414 | 60 | 60 |
| lemire-digit-count-64 | 6820.71 | 1.14972 | 10455 | 60 | 8 |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 **STATISTICAL TIE** | 6360.15 | 0.571401 | 1043 | 60 | 153 |
| rtc-digit-count-64 **STATISTICAL TIE** | 6221.34 | 0.673957 | 1033 | 60 | 58 |
| lemire-digit-count-64 | 5860.74 | 0.797898 | 1043 | 60 | 153 |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-64 **STATISTICAL TIE** | 2525.01 | 1.87124 | 99 | 60 | 53 |
| rtc-digit-count-64 **STATISTICAL TIE** | 2447.26 | 1.97557 | 97 | 60 | 24 |
| lemire-digit-count-64 **STATISTICAL TIE** | 2432.92 | 1.87563 | 99 | 60 | 53 |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-64 **STATISTICAL TIE** | 392.736 | 6.59664 | 11 | 60 | 180 |
| lemire-digit-count-64 **STATISTICAL TIE** | 390.553 | 6.62604 | 11 | 60 | 180 |
| fast-digit-count-64 **STATISTICAL TIE** | 390.435 | 6.88108 | 11 | 60 | 880 |

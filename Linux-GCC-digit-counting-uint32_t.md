# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 13, 2026)

> Competitive benchmarking on (Intel(R) Core(TM) i9-14900KF): subjects are evaluated across automatic resolution rounds, with each round sampling every subject in turn and evaluating a sliding window of the configured measured-execution count to find each subject's lowest-deviation window. The round size starts at 60 iterations and doubles for still-entangled subjects (60 → 120 → 240 → ...) until either every subject is statistically separated, the pool reaches 1200 iterations, or 5.5 seconds elapse. Separation uses 95% confidence intervals (1.96x standard error) for overlap detection: any subjects whose intervals overlap are grouped as a tie, and a result is tagged Win, Tie, or Loss per test case. A final fair pass recompares every subject over the same set of completed rounds, and a resolution report is returned with the final status, tie groups, rounds executed, and sample counts.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 | 4395.02 | 0.441771 | 549835 | 60 | 44 |
| fast-digit-count-32 | 4002.69 | 0.508394 | 549812 | 60 | 45 |
| lemire-digit-count-32 | 3690.25 | 1.61401 | 549821 | 60 | 60 |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 | 4466.36 | 0.225094 | 55036 | 60 | 48 |
| fast-digit-count-32 | 4089.07 | 0.464915 | 54976 | 60 | 7 |
| lemire-digit-count-32 | 4073.24 | 0.405562 | 54968 | 60 | 157 |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| rtc-digit-count-32 | 4664.12 | 0.216581 | 5481 | 60 | 58 |
| fast-digit-count-32 | 4606.68 | 0.33623 | 5481 | 60 | 58 |
| lemire-digit-count-32 | 4197.4 | 0.797063 | 5478 | 60 | 59 |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-32 **STATISTICAL TIE** | 3696.26 | 0.720318 | 550 | 60 | 156 |
| lemire-digit-count-32 **STATISTICAL TIE** | 3693.73 | 0.652888 | 550 | 60 | 180 |
| rtc-digit-count-32 **STATISTICAL TIE** | 3622.54 | 0.699471 | 543 | 60 | 48 |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| lemire-digit-count-32 **STATISTICAL TIE** | 1441.39 | 2.06833 | 57 | 60 | 17 |
| fast-digit-count-32 **STATISTICAL TIE** | 1437.36 | 2.16253 | 56 | 60 | 404 |
| rtc-digit-count-32 **STATISTICAL TIE** | 1425.85 | 2.19407 | 56 | 60 | 404 |

----
### uint32_t-integer_count[1]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | Percentage Deviation (+/-%) | Bytes Processed | Measured Executions | Iterations to Stabilize |
| ------- | ----------- | -------------------- | --------------- | ------------------- | ----------------------- |
| fast-digit-count-32 **STATISTICAL TIE** | 230.211 | 5.93892 | 6 | 60 | 394 |
| lemire-digit-count-32 **STATISTICAL TIE** | 220.412 | 6.37084 | 6 | 60 | 381 |
| rtc-digit-count-32 **STATISTICAL TIE** | 205.313 | 5.64938 | 6 | 60 | 846 |

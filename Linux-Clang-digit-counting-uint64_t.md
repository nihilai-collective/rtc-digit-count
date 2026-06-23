# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 8180.44 | 0.614169 | 21.9251ms | 1044676 | 30 | 1.67844e+07 | 121788 | 1(Win) |
| fast_digit_count | 5456.9 | 0.957519 | 33.1131ms | 1044676 | 30 | 9.16827e+07 | 182573 | 2(Loss) |
| lemire_digit_count | 5114.02 | 1.12702 | 35.0494ms | 1044676 | 30 | 1.44617e+08 | 194814 | 3(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 8318.17 | 0.0584417 | 2.20159ms | 103805 | 30 | 1451.27 | 11901.2 | 1(Win) |
| fast_digit_count | 6532.56 | 1.95932 | 2.72791ms | 103805 | 30 | 2.64485e+06 | 15154.3 | 2(Loss) |
| lemire_digit_count | 6068.43 | 2.24902 | 2.92509ms | 103805 | 30 | 4.03824e+06 | 16313.3 | 3(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 8493.67 | 0.0694859 | 0.245801ms | 10727 | 30 | 21.0126 | 1204.43 | 1(Win) |
| fast_digit_count | 6819.29 | 0.0750962 | 0.297588ms | 10727 | 30 | 38.0747 | 1500.17 | 2(Loss) |
| lemire_digit_count | 6320.97 | 0.36687 | 0.31978ms | 10727 | 30 | 1057.63 | 1618.43 | 3(Loss) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 6095.09 | 0.437058 | 0.05428ms | 1013 | 30 | 14.3966 | 158.5 | 1(Win) |
| fast_digit_count | 5077.46 | 0.0431592 | 0.06121ms | 1013 | 30 | 0.202299 | 190.267 | 2(Loss) |
| lemire_digit_count | 4988.32 | 0.458731 | 0.060069ms | 1013 | 30 | 23.6782 | 193.667 | 3(Loss) |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 1576.07 | 1.25305 | 0.035432ms | 85 | 30 | 12.4609 | 51.4333 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 1526.6 | 1.63368 | 0.046959ms | 85 | 30 | 22.5759 | 53.1 | 1(Tie) |
| lemire_digit_count | 1444.96 | 1.65139 | 0.038777ms | 85 | 30 | 25.7483 | 56.1 | 3(Loss) |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 77.2727 | 0.944059 | 0.036714ms | 4 | 30 | 6.51609 | 49.3667 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 77.2727 | 0.944059 | 0.038327ms | 4 | 30 | 6.51609 | 49.3667 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 77.1165 | 0.958217 | 0.037826ms | 4 | 30 | 6.74023 | 49.4667 | 1(Tie) |

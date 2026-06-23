# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 9187.51 | 0.858719 | 19.4992ms | 1045657 | 30 | 2.60619e+07 | 108540 | 1(Win) |
| fast_digit_count | 8467.37 | 0.557804 | 21.3051ms | 1045657 | 30 | 1.29469e+07 | 117772 | 2(Loss) |
| lemire_digit_count | 7699.15 | 0.58384 | 23.4105ms | 1045657 | 30 | 1.71555e+07 | 129523 | 3(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 9607.22 | 0.242158 | 1.91872ms | 104464 | 30 | 18917.2 | 10369.8 | 1(Win) |
| fast_digit_count | 8357.75 | 2.3654 | 2.13699ms | 104464 | 30 | 2.38499e+06 | 11920 | 2(Loss) |
| lemire_digit_count | 7873.04 | 0.212963 | 2.31424ms | 104464 | 30 | 21786 | 12653.9 | 3(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 9007.75 | 0.0758556 | 0.224629ms | 10319 | 30 | 20.6034 | 1092.5 | 1(Win) |
| fast_digit_count | 8250.08 | 0.0686956 | 0.242472ms | 10319 | 30 | 20.1437 | 1192.83 | 2(Loss) |
| lemire_digit_count | 7642.28 | 0.174967 | 0.261728ms | 10319 | 30 | 152.286 | 1287.7 | 3(Loss) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 6109.94 | 0.54813 | 0.051165ms | 901 | 30 | 17.8264 | 140.633 | 1(Win) |
| fast_digit_count | 5597.79 | 0.583316 | 0.049863ms | 901 | 30 | 24.0517 | 153.5 | 2(Loss) |
| lemire_digit_count | 5155.56 | 0.536913 | 0.059631ms | 901 | 30 | 24.023 | 166.667 | 3(Loss) |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 2162.51 | 1.83332 | 0.033162ms | 113 | 30 | 25.0402 | 49.8333 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 2097.96 | 1.26781 | 0.033713ms | 113 | 30 | 12.723 | 51.3667 | 1(Tie) |
| fast_digit_count | 1447.16 | 1.55428 | 0.047689ms | 113 | 30 | 40.1885 | 74.4667 | 3(Loss) |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 276.53 | 2.1176 | 0.034714ms | 13 | 30 | 27.0402 | 44.8333 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 263.036 | 1.81895 | 0.033662ms | 13 | 30 | 22.0506 | 47.1333 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 260.64 | 1.78809 | 0.03198ms | 13 | 30 | 21.7023 | 47.5667 | 1(Tie) |

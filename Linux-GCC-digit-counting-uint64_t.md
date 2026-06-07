# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 8634.86 | 0.35983 | 110.819ms | 1043319 | 48 | 8.25203e+06 | 115229 | true | 1 (Win) |
| lemire_digit_count **STATISTICAL TIE** | 8092.07 | 1.50679 | 23.4811ms | 1043319 | 12 | 4.11909e+07 | 122958 | true | 2 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 7845.01 | 0.717474 | 23.5711ms | 1043319 | 12 | 9.93667e+06 | 126830 | true | 2 (Tie) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 8668.12 | 0.832665 | 2.14031ms | 104671 | 12 | 110338 | 11516 | true | 1 (Win) |
| fast_digit_count | 7583.73 | 1.45072 | 5.53441ms | 104671 | 24 | 875111 | 13162.7 | true | 2 (Loss) |
| lemire_digit_count | 4967.42 | 0.861311 | 3.76839ms | 104671 | 12 | 359494 | 20095.3 | true | 3 (Loss) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 9573.95 | 0.0548428 | 0.642367ms | 10615 | 24 | 8.07065 | 1057.38 | true | 1 (Win) |
| lemire_digit_count **STATISTICAL TIE** | 8965.24 | 0.483698 | 0.225862ms | 10615 | 12 | 357.97 | 1129.17 | true | 2 (Tie) |
| rtc_digit_count **STATISTICAL TIE** | 8863.2 | 0.923801 | 0.246835ms | 10615 | 12 | 1335.97 | 1142.17 | true | 2 (Tie) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| lemire_digit_count | 7180.61 | 0.0905084 | 0.053679ms | 1024 | 12 | 0.181818 | 136 | true | 1 (Win) |
| fast_digit_count | 7050.99 | 0.140523 | 0.048922ms | 1024 | 12 | 0.454545 | 138.5 | true | 2 (Loss) |
| rtc_digit_count | 5217.61 | 0.1107 | 0.073659ms | 1024 | 12 | 0.515152 | 187.167 | true | 3 (Loss) |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 2487.85 | 0.408184 | 0.036341ms | 95 | 12 | 0.265152 | 36.4167 | true | 1 (Win) |
| lemire_digit_count | 2432.19 | 0.481705 | 0.047827ms | 95 | 12 | 0.386364 | 37.25 | true | 2 (Loss) |
| fast_digit_count | 2378.97 | 0.821397 | 0.034546ms | 95 | 12 | 1.17424 | 38.0833 | true | 3 (Loss) |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 139.989 | 0.479113 | 0.028187ms | 4 | 12 | 0.204545 | 27.25 | true | 1 (Win) |
| lemire_digit_count | 137.881 | 0.513737 | 0.036342ms | 4 | 12 | 0.242424 | 27.6667 | true | 2 (Loss) |
| fast_digit_count | 130.046 | 0.640996 | 0.031902ms | 4 | 12 | 0.424242 | 29.3333 | true | 3 (Loss) |

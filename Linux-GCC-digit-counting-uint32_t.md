# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the GCC 16.0.1 compiler).  

Latest Results: (Jun 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 4573.39 | 1.25161 | 21.0663ms | 548680 | 12 | 2.46082e+07 | 114414 | true | 1 (Win) |
| lemire_digit_count | 3994.06 | 0.219286 | 24.2044ms | 548680 | 12 | 990404 | 131010 | true | 2 (Loss) |
| fast_digit_count | 3890.34 | 0.608182 | 24.0542ms | 548680 | 12 | 8.02993e+06 | 134503 | true | 3 (Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 4588.55 | 0.585064 | 2.12206ms | 54927 | 12 | 53531.5 | 11415.9 | true | 1 (Win) |
| lemire_digit_count **STATISTICAL TIE** | 4160.75 | 0.813458 | 2.35178ms | 54927 | 12 | 125858 | 12589.7 | true | 2 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 4085.7 | 0.920557 | 2.3662ms | 54927 | 12 | 167156 | 12820.9 | true | 2 (Tie) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 4728.51 | 0.177893 | 0.257908ms | 5516 | 12 | 47 | 1112.5 | true | 1 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 4640.57 | 1.12015 | 0.338452ms | 5516 | 12 | 1934.81 | 1133.58 | true | 1 (Tie) |
| fast_digit_count | 4458.34 | 1.22197 | 0.246445ms | 5516 | 12 | 2494.63 | 1179.92 | true | 3 (Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| lemire_digit_count | 3762.25 | 0.16855 | 0.048934ms | 526 | 12 | 0.606061 | 133.333 | true | 1 (Win) |
| rtc_digit_count **STATISTICAL TIE** | 3697.54 | 0.188871 | 0.048333ms | 526 | 12 | 0.787879 | 135.667 | true | 2 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 3674.96 | 0.472892 | 0.049257ms | 526 | 12 | 5 | 136.5 | true | 2 (Tie) |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count **STATISTICAL TIE** | 1335.58 | 0.9231 | 0.030159ms | 51 | 12 | 1.35606 | 36.4167 | true | 1 (Tie) |
| rtc_digit_count **STATISTICAL TIE** | 1323.47 | 0.355261 | 0.031348ms | 51 | 12 | 0.204545 | 36.75 | true | 1 (Tie) |
| lemire_digit_count | 955.235 | 0.853293 | 0.047948ms | 51 | 12 | 2.26515 | 50.9167 | true | 3 (Loss) |

----
### uint32_t-integer_count[1]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count **STATISTICAL TIE** | 321.865 | 0.705095 | 0.032916ms | 9 | 12 | 0.424242 | 26.6667 | true | 1 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 315.941 | 0.613497 | 0.035815ms | 9 | 12 | 0.333333 | 27.1667 | true | 1 (Tie) |
| rtc_digit_count **STATISTICAL TIE** | 312.112 | 0.548202 | 0.03016ms | 9 | 12 | 0.272727 | 27.5 | true | 1 (Tie) |

# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| lemire_digit_count **STATISTICAL TIE** | 7582.7 | 1.56891 | 23.7891ms | 1045182 | 12 | 5.10405e+07 | 131452 | true | 1 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 7335 | 0.861501 | 24.5487ms | 1045182 | 12 | 1.64466e+07 | 135891 | true | 1 (Tie) |
| rtc_digit_count | 6630.52 | 0.911892 | 56.0057ms | 1045182 | 24 | 4.51011e+07 | 150330 | true | 3 (Loss) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 8447.93 | 1.63578 | 4.53714ms | 105754 | 24 | 915284 | 11938.4 | true | 1 (Win) |
| fast_digit_count **STATISTICAL TIE** | 8010.55 | 0.88048 | 2.38838ms | 105754 | 12 | 147465 | 12590.2 | true | 2 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 7963.8 | 1.28495 | 2.3876ms | 105754 | 12 | 317765 | 12664.2 | true | 2 (Tie) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 10155.9 | 0.119952 | 0.428321ms | 10864 | 12 | 17.9697 | 1020.17 | true | 1 (Win) |
| rtc_digit_count | 9213.62 | 0.724652 | 0.226906ms | 10864 | 12 | 796.818 | 1124.5 | true | 2 (Loss) |
| lemire_digit_count | 7617.71 | 1.60717 | 0.283195ms | 10864 | 12 | 5733.72 | 1360.08 | true | 3 (Loss) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| lemire_digit_count **STATISTICAL TIE** | 7471.99 | 0.186579 | 0.050667ms | 1076 | 12 | 0.787879 | 137.333 | true | 1 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 7400.15 | 0.535068 | 0.046989ms | 1076 | 12 | 6.60606 | 138.667 | true | 1 (Tie) |
| rtc_digit_count | 7234.93 | 0.209608 | 0.053254ms | 1076 | 12 | 1.06061 | 141.833 | true | 3 (Loss) |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| lemire_digit_count | 2090.25 | 0.533218 | 0.029307ms | 80 | 12 | 0.454545 | 36.5 | true | 1 (Win) |
| fast_digit_count | 2021.03 | 0.929443 | 0.075495ms | 80 | 12 | 1.47727 | 37.75 | true | 2 (Loss) |
| rtc_digit_count | 1876.08 | 0.552623 | 0.029755ms | 80 | 12 | 0.606061 | 40.6667 | true | 3 (Loss) |

----
### uint64_t-integer_count[1]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 140.418 | 0.762677 | 0.040384ms | 4 | 12 | 0.515152 | 27.1667 | true | 1 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 138.716 | 0.707726 | 0.029568ms | 4 | 12 | 0.454545 | 27.5 | true | 1 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 138.297 | 0.538902 | 0.028219ms | 4 | 12 | 0.265152 | 27.5833 | true | 1 (Tie) |

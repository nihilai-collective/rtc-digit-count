# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.6.87.2-microsoft-standard-WSL2 using the Clang 23.0.0 compiler).  

Latest Results: (Jun 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 4360.55 | 0.915952 | 51.3624ms | 549314 | 24 | 2.90614e+07 | 120138 | true | 1 (Win) |
| fast_digit_count **STATISTICAL TIE** | 4185.62 | 0.654661 | 111.899ms | 549314 | 48 | 3.22253e+07 | 125159 | true | 2 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 3977.34 | 2.25293 | 23.3495ms | 549314 | 12 | 1.05665e+08 | 131713 | true | 2 (Tie) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 6433.1 | 0.0401122 | 1.91859ms | 55446 | 12 | 130.447 | 8219.58 | true | 1 (Win) |
| lemire_digit_count | 5849 | 0.0387832 | 5.45523ms | 55446 | 24 | 295.036 | 9040.42 | true | 2 (Loss) |
| fast_digit_count | 4039.35 | 0.499158 | 5.24023ms | 55446 | 24 | 102472 | 13090.6 | true | 3 (Loss) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 4635.44 | 0.244582 | 0.240999ms | 5469 | 12 | 90.8788 | 1125.17 | true | 1 (Win) |
| rtc_digit_count **STATISTICAL TIE** | 4597.64 | 0.0588924 | 0.230323ms | 5469 | 12 | 5.35606 | 1134.42 | true | 2 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 4595.96 | 0.612796 | 0.255464ms | 5469 | 12 | 580.333 | 1134.83 | true | 2 (Tie) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 4498.17 | 0.712038 | 0.049158ms | 634 | 12 | 10.9924 | 134.417 | true | 1 (Win) |
| rtc_digit_count | 4362.93 | 0.139264 | 0.051056ms | 634 | 12 | 0.44697 | 138.583 | true | 2 (Loss) |
| lemire_digit_count | 4270.49 | 0.136313 | 0.048238ms | 634 | 12 | 0.44697 | 141.583 | true | 3 (Loss) |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| lemire_digit_count | 1165.12 | 0.305068 | 0.028282ms | 45 | 12 | 0.151515 | 36.8333 | true | 1 (Win) |
| fast_digit_count | 1144.41 | 0.402015 | 0.030832ms | 45 | 12 | 0.272727 | 37.5 | true | 2 (Loss) |
| rtc_digit_count | 955.444 | 0.429676 | 0.033892ms | 45 | 12 | 0.44697 | 44.9167 | true | 3 (Loss) |

----
### uint32_t-integer_count[1]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 218.677 | 0.429427 | 0.028617ms | 6 | 12 | 0.151515 | 26.1667 | true | 1 (Win) |
| lemire_digit_count | 213.908 | 0.488068 | 0.026358ms | 6 | 12 | 0.204545 | 26.75 | true | 2 (Loss) |
| rtc_digit_count | 209.983 | 0.479113 | 0.027294ms | 6 | 12 | 0.204545 | 27.25 | true | 3 (Loss) |

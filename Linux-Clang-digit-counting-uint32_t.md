# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the Clang 23.0.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 9V74 80-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4306.78 | 0.409253 | 21.8554ms | 549295 | 30 | 7.43381e+06 | 121633 | 1(Win) |
| fast_digit_count | 3477.6 | 0.741269 | 26.9676ms | 549295 | 30 | 3.74047e+07 | 150635 | 2(Loss) |
| lemire_digit_count | 3202.86 | 1.73572 | 29.8136ms | 549295 | 30 | 2.41777e+08 | 163556 | 3(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4430.76 | 0.0235527 | 2.17057ms | 54564 | 30 | 229.54 | 11744.3 | 1(Win) |
| fast_digit_count **STATISTICAL TIE** | 3737.41 | 1.91684 | 2.51548ms | 54564 | 30 | 2.1368e+06 | 13923.1 | 2(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 3609.9 | 1.87961 | 2.60694ms | 54564 | 30 | 2.20232e+06 | 14414.9 | 2(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4184.62 | 0.0718045 | 0.244821ms | 5288 | 30 | 22.4644 | 1205.13 | 1(Win) |
| lemire_digit_count | 3675.59 | 0.0350298 | 0.63179ms | 5288 | 30 | 6.92989 | 1372.03 | 2(Loss) |
| fast_digit_count | 3622 | 0.0419403 | 0.279842ms | 5288 | 30 | 10.2299 | 1392.33 | 3(Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3180.91 | 0.298719 | 0.055402ms | 532 | 30 | 6.81034 | 159.5 | 1(Win) |
| lemire_digit_count | 2980.35 | 0.0461369 | 0.057154ms | 532 | 30 | 0.185057 | 170.233 | 2(Loss) |
| fast_digit_count | 2911.37 | 0.529894 | 0.057024ms | 532 | 30 | 25.5816 | 174.267 | 3(Loss) |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count **STATISTICAL TIE** | 1045.12 | 1.08351 | 0.037835ms | 56 | 30 | 9.19655 | 51.1 | 1(Tie) |
| rtc_digit_count **STATISTICAL TIE** | 1025.06 | 1.44149 | 0.037855ms | 56 | 30 | 16.9207 | 52.1 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 1019.19 | 1.4884 | 0.036644ms | 56 | 30 | 18.2483 | 52.4 | 1(Tie) |

----
### uint32_t-integer_count[1]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count **STATISTICAL TIE** | 115.753 | 0.953699 | 0.037706ms | 6 | 30 | 6.66782 | 49.4333 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 114.212 | 0.111195 | 0.036444ms | 6 | 30 | 0.0931034 | 50.1 | 1(Tie) |
| rtc_digit_count **STATISTICAL TIE** | 112.935 | 0.914221 | 0.062763ms | 6 | 30 | 6.43678 | 50.6667 | 1(Tie) |

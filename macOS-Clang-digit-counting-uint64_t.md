# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4392.15 | 0.339813 | 40.8785ms | 1046811 | 30 | 1.78972e+07 | 227296 | 1(Win) |
| lemire_digit_count | 4141.53 | 2.10698 | 80.1524ms | 1046811 | 30 | 7.7385e+08 | 241050 | 2(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 4397.91 | 1.77829 | 4.20625ms | 105047 | 30 | 4.92268e+06 | 22779.2 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 4284.21 | 1.18581 | 26.3379ms | 105047 | 48 | 3.69059e+06 | 23383.7 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4834.75 | 0.208783 | 1.02846ms | 10512 | 30 | 562.257 | 2073.53 | 1(Win) |
| lemire_digit_count **STATISTICAL TIE** | 4425.34 | 0.607539 | 1.95875ms | 10512 | 30 | 5682.59 | 2265.37 | 2(Tie) |
| fast_digit_count **STATISTICAL TIE** | 4412.16 | 0.908105 | 1.0295ms | 10512 | 30 | 12772.1 | 2272.13 | 2(Tie) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 4803.27 | 1.69857 | 0.112917ms | 1147 | 30 | 448.892 | 227.733 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 4687.32 | 1.62121 | 0.988375ms | 1147 | 30 | 429.413 | 233.367 | 1(Tie) |
| lemire_digit_count | 4424.42 | 0.777586 | 0.78975ms | 1147 | 30 | 110.875 | 247.233 | 3(Loss) |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count | 2471.92 | 0.21009 | 0.810292ms | 108 | 30 | 0.229885 | 41.6667 | 1(Win) |
| rtc_digit_count | 2326.52 | 2.33996 | 0.758583ms | 108 | 96 | 103.021 | 44.2708 | 2(Loss) |

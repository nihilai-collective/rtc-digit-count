# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 16, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 4490.12 | 0.0748457 | 41.246ms | 1048072 | 12 | 333105 | 222604 | true | 1 (Win) |
| fast_digit_count **STATISTICAL TIE** | 4425.17 | 0.428597 | 44.5373ms | 1048072 | 12 | 1.12461e+07 | 225872 | true | 2 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 4369.48 | 1.13002 | 45.4351ms | 1048072 | 12 | 8.01824e+07 | 228750 | true | 2 (Tie) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 4498.26 | 0.0419418 | 4.94838ms | 105014 | 12 | 1046.36 | 22264 | true | 1 (Win) |
| fast_digit_count **STATISTICAL TIE** | 4474.57 | 0.17719 | 5.19529ms | 105014 | 12 | 18873.4 | 22381.8 | true | 2 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 4469.66 | 0.287905 | 4.93267ms | 105014 | 12 | 49937.4 | 22406.4 | true | 2 (Tie) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 4333.5 | 0.245243 | 1.20683ms | 10082 | 12 | 355.295 | 2218.75 | true | 1 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 4273.47 | 0.683877 | 0.422792ms | 10082 | 12 | 2840.99 | 2249.92 | true | 1 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 4170.14 | 1.0491 | 1.38575ms | 10082 | 12 | 7021.15 | 2305.67 | true | 1 (Tie) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count **STATISTICAL TIE** | 3997.78 | 1.32679 | 0.941875ms | 1019 | 24 | 249.645 | 243.083 | true | 1 (Tie) |
| rtc_digit_count **STATISTICAL TIE** | 3942.37 | 1.41988 | 1.38338ms | 1019 | 12 | 147 | 246.5 | true | 1 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 3942.37 | 1.41988 | 1.43562ms | 1019 | 12 | 147 | 246.5 | true | 1 (Tie) |

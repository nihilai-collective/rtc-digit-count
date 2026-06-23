# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count **STATISTICAL TIE** | 4401.39 | 0.280273 | 138.785ms | 1044870 | 30 | 1.20789e+07 | 226398 | 1(Tie) |
| rtc_digit_count **STATISTICAL TIE** | 4338.6 | 1.51909 | 59.8861ms | 1044870 | 30 | 3.65185e+08 | 229675 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count **STATISTICAL TIE** | 4413 | 0.430339 | 12.9549ms | 105035 | 30 | 286249 | 22698.7 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 4349.23 | 1.53951 | 11.1022ms | 105035 | 30 | 3.77163e+06 | 23031.5 | 1(Tie) |
| rtc_digit_count **STATISTICAL TIE** | 4186.37 | 1.70115 | 5.40493ms | 105035 | 30 | 4.97049e+06 | 23927.5 | 1(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 4537.97 | 2.01569 | 4.91008ms | 10570 | 96 | 192462 | 2221.33 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 4400.61 | 2.11535 | 4.35891ms | 10570 | 96 | 225402 | 2290.67 | 1(Tie) |
| fast_digit_count | 3125.1 | 2.27044 | 3.04486ms | 10570 | 30 | 160902 | 3225.6 | 3(Loss) |

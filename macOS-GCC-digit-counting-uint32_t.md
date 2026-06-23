# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2299.84 | 0.311237 | 130.002ms | 548544 | 30 | 1.50359e+07 | 227465 | 1(Win) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 2315.26 | 1.3246 | 4.25088ms | 55044 | 30 | 2.70588e+06 | 22673.1 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 2286.86 | 1.31716 | 61.1279ms | 55044 | 96 | 8.77585e+06 | 22954.7 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 2275.86 | 1.96127 | 4.3881ms | 55044 | 30 | 6.13937e+06 | 23065.6 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count **STATISTICAL TIE** | 2348 | 1.99534 | 8.80717ms | 5515 | 96 | 191779 | 2240 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 2304.11 | 2.08538 | 4.59699ms | 5515 | 96 | 217534 | 2282.67 | 1(Tie) |
| rtc_digit_count | 1615.33 | 1.34126 | 9.00813ms | 5515 | 96 | 183091 | 3256 | 3(Loss) |

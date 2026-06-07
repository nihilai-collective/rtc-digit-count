# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 16, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 2363.69 | 0.276689 | 40.0682ms | 550126 | 12 | 4.52594e+06 | 221958 | true | 1 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 2349.58 | 0.529998 | 40.3055ms | 550126 | 12 | 1.68064e+07 | 223292 | true | 1 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 2349.1 | 0.436219 | 54.2634ms | 550126 | 12 | 1.13897e+07 | 223337 | true | 1 (Tie) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 2347.17 | 0.0444095 | 9.33929ms | 54364 | 24 | 2309.39 | 22088.5 | true | 1 (Win) |
| fast_digit_count | 2326.15 | 0.245067 | 4.12125ms | 54364 | 12 | 35801.2 | 22288.2 | true | 2 (Loss) |
| lemire_digit_count | 1632.49 | 0.0542851 | 25.9907ms | 54364 | 48 | 14266.8 | 31758.7 | true | 3 (Loss) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 2328.61 | 0.364979 | 1.25125ms | 5443 | 12 | 794.333 | 2229.17 | true | 1 (Win) |
| lemire_digit_count | 2285.88 | 0.764063 | 1.29767ms | 5443 | 12 | 3612.52 | 2270.83 | true | 2 (Loss) |
| rtc_digit_count | 1614.45 | 1.22371 | 0.601917ms | 5443 | 12 | 18576.8 | 3215.25 | true | 3 (Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 2060.41 | 1.94214 | 0.801625ms | 525 | 12 | 267.273 | 243 | true | 1 (Tie) |
| lemire_digit_count **STATISTICAL TIE** | 2059.35 | 1.31854 | 0.934542ms | 525 | 24 | 246.636 | 243.125 | true | 1 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 2030.47 | 1.3856 | 0.872333ms | 525 | 12 | 140.083 | 246.583 | true | 1 (Tie) |

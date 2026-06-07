# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Jun 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 ? 120 ? 240 ? ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 3683.43 | 1.01759 | 25.3139ms | 549806 | 12 | 2.51791e+07 | 142350 | true | 1 (Win) |
| fast_digit_count | 3251.19 | 0.457825 | 29.8558ms | 549806 | 12 | 6.54205e+06 | 161275 | true | 2 (Loss) |
| lemire_digit_count | 3114.4 | 0.511186 | 30.5536ms | 549806 | 12 | 8.88811e+06 | 168358 | true | 3 (Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 3838.54 | 0.0608643 | 2.5253ms | 55109 | 12 | 833.333 | 13691.7 | true | 1 (Win) |
| lemire_digit_count **STATISTICAL TIE** | 3182 | 0.0680323 | 3.1302ms | 55109 | 12 | 1515.15 | 16516.7 | true | 2 (Tie) |
| fast_digit_count **STATISTICAL TIE** | 3169.21 | 0.707253 | 7.5372ms | 55109 | 24 | 330145 | 16583.3 | true | 2 (Tie) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| rtc_digit_count | 3666.89 | 0.52447 | 0.6154ms | 5367 | 24 | 1286.23 | 1395.83 | true | 1 (Win) |
| fast_digit_count | 3071.02 | 0.852803 | 0.3133ms | 5367 | 12 | 2424.24 | 1666.67 | true | 2 (Loss) |
| lemire_digit_count | 2981.57 | 0.654563 | 0.3642ms | 5367 | 12 | 1515.15 | 1716.67 | true | 3 (Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 2962.89 | 2.35033 | 0.2055ms | 589 | 48 | 953.014 | 189.583 | true | 1 (Win) |
| lemire_digit_count | 2669.53 | 2.11762 | 0.2402ms | 589 | 48 | 953.014 | 210.417 | true | 2 (Loss) |

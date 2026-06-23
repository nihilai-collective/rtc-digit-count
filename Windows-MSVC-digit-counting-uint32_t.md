# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36247.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 ? 120 ? 240 ? ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3367.53 | 0.98786 | 28.5586ms | 551312 | 30 | 7.13649e+07 | 156130 | 1(Win) |
| fast_digit_count | 3139.38 | 0.840063 | 30.685ms | 551312 | 30 | 5.93819e+07 | 167477 | 2(Loss) |
| lemire_digit_count | 2963.49 | 0.550483 | 32.3508ms | 551312 | 30 | 2.86152e+07 | 177417 | 3(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3416.92 | 0.296762 | 14.1804ms | 55102 | 48 | 99982.3 | 15379.2 | 1(Win) |
| fast_digit_count | 3175.19 | 0.0904606 | 3.2277ms | 55102 | 30 | 6724.14 | 16550 | 2(Loss) |
| lemire_digit_count | 2984.63 | 0.0604851 | 3.3947ms | 55102 | 30 | 3402.3 | 17606.7 | 3(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3421.61 | 0.583152 | 0.3061ms | 5597 | 30 | 2482.76 | 1560 | 1(Win) |
| fast_digit_count | 3164.65 | 0.374255 | 0.3441ms | 5597 | 30 | 1195.4 | 1686.67 | 2(Loss) |
| lemire_digit_count | 2993.11 | 0.388063 | 0.3777ms | 5597 | 30 | 1436.78 | 1783.33 | 3(Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 2746.58 | 2.39732 | 0.0568ms | 576 | 30 | 689.655 | 200 | 1(Tie) |
| fast_digit_count **STATISTICAL TIE** | 2701.56 | 1.63934 | 0.0586ms | 576 | 30 | 333.333 | 203.333 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 2585.02 | 2.27013 | 0.2824ms | 576 | 48 | 1117.02 | 212.5 | 1(Tie) |

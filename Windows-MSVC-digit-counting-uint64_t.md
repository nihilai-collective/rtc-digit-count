# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on Windows 10.0.26100 using the MSVC 19.51.36247.0 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 ? 120 ? 240 ? ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 6297.82 | 0.556827 | 32.9681ms | 1045461 | 30 | 2.33129e+07 | 158313 | 1(Win) |
| fast_digit_count | 5940.95 | 0.548823 | 31.023ms | 1045461 | 30 | 2.54501e+07 | 167823 | 2(Loss) |
| lemire_digit_count | 4660.25 | 0.873979 | 44.9331ms | 1045461 | 30 | 1.04887e+08 | 213943 | 3(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 6578.02 | 0.0672473 | 3.1442ms | 104130 | 30 | 3091.95 | 15096.7 | 1(Win) |
| fast_digit_count | 5984.7 | 0.0401768 | 7.4962ms | 104130 | 30 | 1333.33 | 16593.3 | 2(Loss) |
| lemire_digit_count | 4734.87 | 0.399854 | 4.1708ms | 104130 | 30 | 210989 | 20973.3 | 3(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 6451.89 | 0.582335 | 0.3143ms | 10396 | 30 | 2402.3 | 1536.67 | 1(Win) |
| fast_digit_count | 5643.87 | 0.523825 | 0.3663ms | 10396 | 30 | 2540.23 | 1756.67 | 2(Loss) |
| lemire_digit_count | 5041.22 | 0.445107 | 0.4172ms | 10396 | 30 | 2298.85 | 1966.67 | 3(Loss) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 5086.8 | 1.69492 | 0.0595ms | 1049 | 30 | 333.333 | 196.667 | 1(Win) |
| fast_digit_count | 4801.94 | 1.93512 | 0.2493ms | 1049 | 48 | 780.142 | 208.333 | 2(Loss) |
| lemire_digit_count | 4306.67 | 2.06524 | 0.5545ms | 1049 | 96 | 2209.43 | 232.292 | 3(Loss) |

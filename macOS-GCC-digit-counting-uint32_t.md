# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the GCC 15.2.0 compiler).  

Latest Results: (Jun 16, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 1200 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 10) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 5350.38 | 0.334417 | 18.241ms | 551210 | 12 | 1.29545e+06 | 98250 | true | 1 (Win) |
| lemire_digit_count | 4965.05 | 1.41141 | 69.953ms | 551210 | 24 | 5.35924e+07 | 105875 | true | 2 (Loss) |
| rtc_digit_count | 4581.04 | 2.14572 | 20.716ms | 551210 | 12 | 7.275e+07 | 114750 | true | 3 (Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 5556.97 | 1.57855 | 1.732ms | 54870 | 12 | 265152 | 9416.67 | true | 1 (Win) |
| lemire_digit_count **STATISTICAL TIE** | 5105.18 | 0.880872 | 4.59ms | 54870 | 24 | 195652 | 10250 | true | 2 (Tie) |
| rtc_digit_count **STATISTICAL TIE** | 4983.63 | 1.43577 | 3.147ms | 54870 | 12 | 272727 | 10500 | true | 2 (Tie) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Converged | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- | -------- |
| fast_digit_count | 5593.77 | 2.40493 | 2.134ms | 5560 | 96 | 49890.4 | 947.917 | true | 1 (Win) |
| lemire_digit_count **STATISTICAL TIE** | 5039.93 | 2.16682 | 2.104ms | 5560 | 96 | 49890.4 | 1052.08 | true | 2 (Tie) |
| rtc_digit_count **STATISTICAL TIE** | 4942.07 | 2.48625 | 2.556ms | 5560 | 96 | 68311.4 | 1072.92 | true | 2 (Tie) |

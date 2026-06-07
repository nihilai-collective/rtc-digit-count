# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the GCC 16.1.0 compiler).  

Latest Results: (Jul 24, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count STATISTICAL TIE | 4437.96 | 0.492939 | 43.36ms | 1046125 | 30 | 3.68391e+07 | 224802 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 4352.86 | 0.894472 | 43.0569ms | 1046125 | 30 | 1.26087e+08 | 229197 | 1(Tie) |
| lemire_digit_count | 4139.85 | 2.04465 | 54.3322ms | 1046125 | 30 | 7.28378e+08 | 240990 | 3(Loss) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count | 4367.7 | 1.47156 | 4.48896ms | 105012 | 30 | 3.41548e+06 | 22929.1 | 1(Win) |
| lemire_digit_count STATISTICAL TIE | 3995.92 | 2.28998 | 4.53222ms | 105012 | 30 | 9.8817e+06 | 25062.4 | 2(Tie) |
| rtc_digit_count STATISTICAL TIE | 3902.9 | 1.4911 | 4.51482ms | 105012 | 30 | 4.39174e+06 | 25659.7 | 2(Tie) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 4337.14 | 2.10973 | 4.45107ms | 10272 | 96 | 217986 | 2258.67 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 4316.75 | 2.07726 | 4.41318ms | 10272 | 96 | 213330 | 2269.33 | 1(Tie) |
| fast_digit_count | 3887.36 | 2.12926 | 4.76083ms | 10272 | 96 | 276394 | 2520 | 3(Loss) |

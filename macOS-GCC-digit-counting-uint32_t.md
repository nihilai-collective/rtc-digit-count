# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the GCC 16.1.0 compiler).  

Latest Results: (Jul 24, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count | 2525.84 | 0.194895 | 37.716ms | 549924 | 30 | 4.91264e+06 | 207633 | 1(Win) |
| lemire_digit_count | 2486.7 | 0.406481 | 60.8929ms | 549924 | 30 | 2.20476e+07 | 210901 | 2(Loss) |
| rtc_digit_count | 2436.91 | 0.267775 | 38.9179ms | 549924 | 30 | 9.96298e+06 | 215211 | 3(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count STATISTICAL TIE | 2587.2 | 0.482545 | 3.72685ms | 55606 | 30 | 293481 | 20497.1 | 1(Tie) |
| fast_digit_count STATISTICAL TIE | 2570.08 | 0.427312 | 3.75296ms | 55606 | 30 | 233218 | 20633.6 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2501.79 | 1.31589 | 3.75296ms | 55606 | 30 | 2.33399e+06 | 21196.8 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count STATISTICAL TIE | 2569.51 | 1.59137 | 0.388864ms | 5472 | 30 | 31336.8 | 2030.93 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2477.14 | 2.14786 | 1.93408ms | 5472 | 48 | 98275 | 2106.67 | 1(Tie) |
| fast_digit_count STATISTICAL TIE | 2458.47 | 2.35357 | 1.97299ms | 5472 | 48 | 119801 | 2122.67 | 1(Tie) |

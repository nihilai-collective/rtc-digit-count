# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the Clang 22.1.8 compiler).  

Latest Results: (Jul 24, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count | 2272.34 | 1.09182 | 42.5517ms | 549008 | 30 | 1.89859e+08 | 230412 | 1(Win) |
| lemire_digit_count STATISTICAL TIE | 2154.53 | 1.01455 | 92.879ms | 549008 | 30 | 1.82356e+08 | 243011 | 2(Tie) |
| rtc_digit_count STATISTICAL TIE | 2061.22 | 2.31861 | 44.5648ms | 549008 | 30 | 1.0406e+09 | 254012 | 2(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count STATISTICAL TIE | 2270.38 | 1.06287 | 4.72179ms | 54851 | 30 | 1.79909e+06 | 23040.2 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 2263.4 | 1.31697 | 4.36487ms | 54851 | 30 | 2.77918e+06 | 23111.2 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2199.44 | 1.68708 | 4.24625ms | 54851 | 30 | 4.82987e+06 | 23783.3 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 2279.95 | 0.241775 | 0.433166ms | 5346 | 30 | 876.902 | 2236.17 | 1(Tie) |
| fast_digit_count STATISTICAL TIE | 2257.6 | 0.446173 | 0.4415ms | 5346 | 30 | 3045.73 | 2258.3 | 1(Tie) |
| rtc_digit_count | 1961.91 | 2.38704 | 1.16292ms | 5346 | 30 | 115437 | 2598.67 | 3(Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 1927.64 | 1.08479 | 0.061125ms | 494 | 30 | 210.869 | 244.4 | 1(Tie) |
| fast_digit_count STATISTICAL TIE | 1916.66 | 1.2559 | 0.064709ms | 494 | 30 | 285.89 | 245.8 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 1895.07 | 1.70155 | 0.058ms | 494 | 30 | 536.8 | 248.6 | 1(Tie) |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count | 1419.07 | 0.165027 | 0.1255ms | 62 | 48 | 0.22695 | 41.6667 | 1(Win) |
| rtc_digit_count | 1335.28 | 2.34877 | 0.199167ms | 62 | 96 | 103.846 | 44.2812 | 2(Loss) |

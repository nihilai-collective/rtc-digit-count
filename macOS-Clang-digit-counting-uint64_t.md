# digit-counting-uint64_t  
----

Performance profiling of libraries (Compiled and run on macOS 25.4.0 using the Clang 22.1.8 compiler).  

Latest Results: (Jul 24, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint64_t-integer_count[100000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| lemire_digit_count STATISTICAL TIE | 4806.95 | 0.138819 | 46.6117ms | 1049617 | 30 | 2.50693e+06 | 208239 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 4783.49 | 0.313789 | 38.3215ms | 1049617 | 30 | 1.29351e+07 | 209260 | 1(Tie) |
| fast_digit_count STATISTICAL TIE | 4763.86 | 0.453693 | 38.7778ms | 1049617 | 30 | 2.7264e+07 | 210122 | 1(Tie) |

----
### uint64_t-integer_count[10000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count STATISTICAL TIE | 4273.84 | 1.64806 | 10.785ms | 103397 | 30 | 4.33757e+06 | 23072.3 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 4235.34 | 1.51392 | 4.39337ms | 103397 | 30 | 3.72708e+06 | 23282 | 1(Tie) |
| rtc_digit_count | 3821.13 | 2.06333 | 11.0608ms | 103397 | 30 | 8.50527e+06 | 25805.7 | 3(Loss) |

----
### uint64_t-integer_count[1000]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4789 | 0.230571 | 0.384084ms | 10371 | 30 | 680.271 | 2065.27 | 1(Win) |
| lemire_digit_count STATISTICAL TIE | 4445.33 | 0.192829 | 0.415292ms | 10371 | 30 | 552.202 | 2224.93 | 2(Tie) |
| fast_digit_count STATISTICAL TIE | 4398.54 | 0.649842 | 1.07925ms | 10371 | 30 | 6405.63 | 2248.6 | 2(Tie) |

----
### uint64_t-integer_count[100]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count STATISTICAL TIE | 4195.53 | 1.65064 | 0.079667ms | 1051 | 30 | 466.507 | 238.9 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 4058.8 | 0.514682 | 0.689083ms | 1051 | 96 | 155.081 | 246.948 | 1(Tie) |
| rtc_digit_count | 3555.14 | 1.16066 | 0.0645ms | 1051 | 30 | 321.237 | 281.933 | 3(Loss) |

----
### uint64_t-integer_count[10]-digit_length[0-20] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b0-20%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2367.74 | 2.49434 | 0.167959ms | 111 | 96 | 119.388 | 44.7083 | 1(Win) |

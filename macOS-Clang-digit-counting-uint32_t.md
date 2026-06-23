# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on macOS 24.6.0 using the Clang 22.1.7 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (Apple M1 (Virtual)): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2517.84 | 0.486053 | 91.6864ms | 549588 | 30 | 3.07118e+07 | 208165 | 1(Win) |
| fast_digit_count | 2419.53 | 0.831225 | 39.0655ms | 549588 | 30 | 9.7268e+07 | 216624 | 2(Loss) |
| lemire_digit_count | 2291.7 | 0.964749 | 51.3021ms | 549588 | 30 | 1.46052e+08 | 228707 | 3(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 2528.8 | 0.430511 | 3.81308ms | 54830 | 30 | 237738 | 20677.8 | 1(Win) |
| lemire_digit_count | 2365.61 | 0.129393 | 4.05804ms | 54830 | 30 | 24541.2 | 22104.2 | 2(Loss) |
| fast_digit_count | 2185.58 | 2.27742 | 10.0361ms | 54830 | 30 | 8.9066e+06 | 23925 | 3(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 2531.94 | 0.170809 | 1.19642ms | 5498 | 30 | 375.361 | 2070.87 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 2523.49 | 0.157901 | 1.07429ms | 5498 | 30 | 322.924 | 2077.8 | 1(Tie) |
| fast_digit_count | 2331.77 | 0.287343 | 0.448959ms | 5498 | 30 | 1252.45 | 2248.63 | 3(Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count **STATISTICAL TIE** | 2275 | 1.69559 | 0.822875ms | 540 | 30 | 441.964 | 226.367 | 1(Tie) |
| rtc_digit_count **STATISTICAL TIE** | 2247.2 | 1.68836 | 0.761375ms | 540 | 30 | 449.109 | 229.167 | 1(Tie) |
| lemire_digit_count | 2118.99 | 1.19033 | 0.46775ms | 540 | 30 | 251.068 | 243.033 | 3(Loss) |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count **STATISTICAL TIE** | 1389.88 | 2.02964 | 0.5105ms | 62 | 48 | 35.7855 | 42.5417 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 1335.91 | 2.34117 | 0.161458ms | 62 | 96 | 103.079 | 44.2604 | 1(Tie) |

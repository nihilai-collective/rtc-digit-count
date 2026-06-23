# digit-counting-uint32_t  
----

Performance profiling of libraries (Compiled and run on Linux 6.17.0-1018-azure using the GCC 16.0.1 compiler).  

Latest Results: (Jun 23, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a maximum of 3000 iterations. Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.5% AND mean shift < 1% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[100000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 5015.33 | 0.633401 | 18.8941ms | 550430 | 30 | 1.31851e+07 | 104665 | 1(Win) |
| fast_digit_count | 4531.08 | 0.46512 | 20.982ms | 550430 | 30 | 8.71071e+06 | 115851 | 2(Loss) |
| lemire_digit_count | 4423.56 | 0.480339 | 21.582ms | 550430 | 30 | 9.74712e+06 | 118667 | 3(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 5070.54 | 0.171905 | 1.91153ms | 55102 | 30 | 9521.95 | 10363.7 | 1(Win) |
| fast_digit_count | 4569.87 | 0.0419086 | 2.11952ms | 55102 | 30 | 696.714 | 11499.1 | 2(Loss) |
| lemire_digit_count | 4430.84 | 0.131676 | 2.1745ms | 55102 | 30 | 7316.44 | 11859.9 | 3(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 4620.28 | 0.255091 | 0.229738ms | 5548 | 30 | 256.006 | 1145.17 | 1(Win) |
| fast_digit_count | 4518.86 | 0.0539746 | 0.237783ms | 5548 | 30 | 11.9816 | 1170.87 | 2(Loss) |
| lemire_digit_count | 4333.44 | 0.0524627 | 0.244667ms | 5548 | 30 | 12.3092 | 1220.97 | 3(Loss) |

----
### uint32_t-integer_count[100]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 3884.17 | 0.358321 | 0.0483ms | 574 | 30 | 7.65057 | 140.933 | 1(Win) |
| fast_digit_count | 3543.1 | 0.595927 | 0.049904ms | 574 | 30 | 25.431 | 154.5 | 2(Loss) |
| lemire_digit_count | 3417.04 | 0.50295 | 0.050294ms | 574 | 30 | 19.4759 | 160.2 | 3(Loss) |

----
### uint32_t-integer_count[10]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| rtc_digit_count | 1448.86 | 1.64388 | 0.034785ms | 75 | 30 | 19.7575 | 49.3667 | 1(Win) |
| fast_digit_count **STATISTICAL TIE** | 1389.75 | 1.21727 | 0.035246ms | 75 | 30 | 11.7747 | 51.4667 | 2(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 1383.47 | 1.3412 | 0.035036ms | 75 | 30 | 14.4241 | 51.7 | 2(Tie) |

----
### uint32_t-integer_count[1]-digit_length[0-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1%5d-digit_length%5b0-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Time (ms) | Bytes Processed | Measured Sample Size | Variance | Mean | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | -------- |
| fast_digit_count **STATISTICAL TIE** | 144.705 | 1.99571 | 0.034945ms | 7 | 30 | 25.4299 | 46.1333 | 1(Tie) |
| rtc_digit_count **STATISTICAL TIE** | 143.153 | 1.84348 | 0.040215ms | 7 | 30 | 22.1713 | 46.6333 | 1(Tie) |
| lemire_digit_count **STATISTICAL TIE** | 142.339 | 1.91079 | 0.035467ms | 7 | 30 | 24.0931 | 46.9 | 1(Tie) |

# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.17.0-1022-azure using the GCC 16.0.1 compiler).  

Latest Results: (Sep 19, 2026)

> Adaptive sampling on (AMD EPYC 7763 64-Core Processor): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [32913c9](https://github.com/realtimechris/benchmarksuite/commit/32913c9).
 
----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 966.53 | 1.69672 | 1.41744ms | 55 | 30 | 25.5586 | 54.4 | 0.741838 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 936.186 | 2.01294 | 30.655ms | 56 | 192 | 253.547 | 57.0885 | 0.888011 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4006.96 | 1.06929 | 2119.97ms | 550 | 12288 | 24038.3 | 130.802 | 0.416415 | 1(Win) |
| lemire_digit_count | 3266.51 | 1.13391 | 32.9622ms | 549 | 192 | 633.452 | 160.188 | 0.552822 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6082.88 | 0.245789 | 16.3548ms | 5500 | 96 | 431.215 | 862.281 | 0.367231 | 1(Win) |
| lemire_digit_count | 4588.44 | 0.823425 | 8.08251ms | 5503 | 48 | 4257.47 | 1143.75 | 0.491974 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6377.7 | 0.80512 | 2.95876ms | 54901 | 30 | 131062 | 8209.5 | 0.363404 | 1(Win) |
| lemire_digit_count | 4536.3 | 2.15252 | 8.2215ms | 54967 | 30 | 1.85617e+06 | 11555.8 | 0.511837 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6344.72 | 0.719503 | 16.4803ms | 549927 | 30 | 1.06114e+07 | 82659.5 | 0.367095 | 1(Win) |
| lemire_digit_count | 4662.64 | 1.21177 | 108.281ms | 549772 | 48 | 8.91217e+07 | 112448 | 0.499717 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 528.318 | 1.62759 | 7.03745ms | 30 | 48 | 37.6525 | 54.4167 | 1.64409 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 518.986 | 0.647654 | 271.854ms | 30 | 1536 | 194.924 | 55.0039 | 1.50345 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3234.28 | 1.22967 | 1.556ms | 2989 | 30 | 3524.04 | 881.4 | 0.690371 | 1(Win) |
| lemire_digit_count | 2501.19 | 0.592606 | 1.64651ms | 2989 | 30 | 1368.55 | 1139.73 | 0.905135 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3479.73 | 0.61545 | 132.491ms | 30021 | 384 | 984618 | 8227.64 | 0.666232 | 1(Win) |
| lemire_digit_count | 2607.17 | 0.259488 | 3.45518ms | 29977 | 30 | 24287.3 | 10965.1 | 0.890724 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 972.97 | 1.73376 | 3.29423ms | 55 | 30 | 26.654 | 54.3667 | 0.898438 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 969.967 | 1.01716 | 32.9347ms | 55 | 192 | 57.1901 | 53.6562 | 0.82029 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4084.79 | 0.29789 | 137.71ms | 550 | 768 | 112.234 | 128.329 | 0.412379 | 1(Win) |
| lemire_digit_count | 3291.96 | 1.37559 | 7.3323ms | 542 | 48 | 223.585 | 156.896 | 0.556047 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5984.53 | 1.54227 | 3.70939ms | 5490 | 30 | 5462.09 | 874.9 | 0.374109 | 1(Win) |
| lemire_digit_count | 4564.14 | 1.03684 | 1.61702ms | 5513 | 30 | 4278.83 | 1151.83 | 0.494936 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 6356.89 | 0.873082 | 16.6391ms | 550009 | 30 | 1.55697e+07 | 82513.4 | 0.366394 | 1(Win) |
| lemire_digit_count | 4658.19 | 1.27711 | 108.719ms | 550009 | 48 | 9.92671e+07 | 112604 | 0.500176 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1331.49 | 0.217765 | 552.665ms | 75 | 3072 | 42.0519 | 53.7272 | 0.609383 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1327 | 2.08068 | 3.31325ms | 77 | 30 | 39.9092 | 55.4333 | 0.6465 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5538.69 | 0.433971 | 139.016ms | 751 | 768 | 241.869 | 129.315 | 0.303643 | 1(Win) |
| lemire_digit_count | 4519.85 | 0.994638 | 32.1222ms | 749 | 192 | 474.745 | 158.094 | 0.399805 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8097.12 | 1.00175 | 1.59749ms | 7483 | 30 | 2338.59 | 881.367 | 0.276646 | 1(Win) |
| lemire_digit_count | 6304.49 | 0.439272 | 17.2138ms | 7505 | 96 | 2387.29 | 1135.23 | 0.358402 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8799.51 | 0.130335 | 31.1432ms | 75037 | 96 | 10785.1 | 8132.32 | 0.263464 | 1(Win) |
| lemire_digit_count | 6604.87 | 0.170724 | 3.44111ms | 75039 | 30 | 10265.1 | 10834.9 | 0.35145 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1783.96 | 1.40601 | 30.1451ms | 100 | 192 | 108.469 | 53.4583 | 0.43625 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1762.8 | 1.68237 | 3.29148ms | 100 | 30 | 24.8517 | 54.1 | 0.481333 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-GCC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10813.9 | 1.29579 | 1.5985ms | 10000 | 30 | 3917.68 | 881.9 | 0.207023 | 1(Win) |
| lemire_digit_count | 8429.57 | 0.115037 | 17.7103ms | 10000 | 96 | 162.607 | 1131.34 | 0.267835 | 2(Loss) |

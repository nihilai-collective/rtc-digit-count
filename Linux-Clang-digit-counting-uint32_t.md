# Digit Counting
Performance profiling of functions (Compiled and run on Linux 6.18.33.2-microsoft-standard-WSL2 using the Clang 24.0.0 compiler).  

Latest Results: (Sep 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1784.72 | 0.451758 | 227.676ms | 54 | 30 | 0.516092 | 29.0333 | 0.599387 | 1(Win) |
| lemire_digit_count | 1700.75 | 0.408362 | 224.791ms | 54 | 30 | 0.464368 | 30.4667 | 0.596933 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 6967.55 | 2.25247 | 55.0245ms | 554 | 96 | 280.175 | 75.8438 | 0.246997 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 6838.24 | 1.36473 | 44.9227ms | 551 | 48 | 52.8613 | 76.8958 | 0.236908 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 12552.6 | 2.06436 | 1.39526ms | 5509 | 96 | 7169.19 | 418.615 | 0.229159 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 12302.2 | 2.22484 | 1.37382ms | 5509 | 96 | 8669.66 | 427.135 | 0.234185 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 9892.98 | 1.33713 | 2.89401ms | 55065 | 30 | 151137 | 5308.23 | 0.305752 | 1(Win) |
| lemire_digit_count | 9283.65 | 2.214 | 0.960325ms | 55021 | 30 | 469792 | 5652.17 | 0.325336 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 12032.3 | 1.3036 | 18.8041ms | 550104 | 30 | 9.69178e+06 | 43601.2 | 0.252253 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 11702.2 | 1.71139 | 8.1718ms | 549884 | 30 | 1.76452e+07 | 44813 | 0.25906 | 1(Tie) |

----
### uint32_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 958.084 | 0.442567 | 226.386ms | 28 | 30 | 0.488506 | 28.8333 | 1.09436 | 1(Win) |
| lemire_digit_count | 905.73 | 0.304419 | 243.162ms | 28 | 30 | 0.258621 | 30.5 | 1.11853 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4140.63 | 1.53135 | 103.248ms | 300 | 768 | 860.012 | 69.1029 | 0.427893 | 1(Win) |
| lemire_digit_count | 3634.94 | 2.2355 | 56.8168ms | 299 | 96 | 296.267 | 78.5833 | 0.453433 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 6586.7 | 1.79964 | 1.49661ms | 2997 | 96 | 5856.27 | 434 | 0.435364 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 6374.35 | 1.80607 | 1.37838ms | 2997 | 96 | 6297.77 | 448.458 | 0.453018 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5624 | 0.906291 | 0.94789ms | 29987 | 30 | 63717.1 | 5085.1 | 0.535765 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5536.9 | 1.91921 | 2.27413ms | 30000 | 30 | 295042 | 5167.23 | 0.536739 | 1(Tie) |

----
### uint32_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 6128.16 | 1.40504 | 7.90166ms | 300110 | 30 | 1.29182e+07 | 46703.7 | 0.494692 | 1(Win) |
| rtc_digit_count | 5710.98 | 0.623747 | 8.43173ms | 300110 | 30 | 2.93143e+06 | 50115.4 | 0.531152 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 1775.92 | 0.461434 | 373.129ms | 54 | 30 | 0.547126 | 29.2667 | 0.593884 | 1(Win) |
| lemire_digit_count | 1722.94 | 0.32117 | 229.757ms | 54 | 30 | 0.281609 | 30.1667 | 0.578593 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7587.03 | 2.25821 | 78.1898ms | 548 | 384 | 932.444 | 69.0052 | 0.222421 | 1(Win) |
| lemire_digit_count | 6876.45 | 2.3404 | 33.3703ms | 554 | 30 | 97.3437 | 76.9667 | 0.243798 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 11322.1 | 1.95709 | 1.48408ms | 5494 | 96 | 7876.67 | 462.833 | 0.256221 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 11192.4 | 1.89721 | 1.48892ms | 5494 | 96 | 7574.64 | 468.198 | 0.258898 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 10974.4 | 1.53075 | 0.913588ms | 54980 | 30 | 160464 | 4777.77 | 0.273009 | 1(Win) |
| lemire_digit_count | 9694.92 | 1.38028 | 1.00852ms | 54980 | 30 | 167177 | 5408.3 | 0.311637 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 10872.1 | 2.34397 | 8.7102ms | 550293 | 30 | 3.84054e+07 | 48270.6 | 0.278779 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 10388.2 | 1.68078 | 9.29543ms | 550293 | 30 | 2.16298e+07 | 50519 | 0.291755 | 1(Tie) |

----
### uint32_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2412.87 | 0.475537 | 274.251ms | 74 | 30 | 0.585057 | 29.3667 | 0.438313 | 1(Win) |
| lemire_digit_count | 2361.93 | 0.422847 | 235.964ms | 74 | 30 | 0.482759 | 30 | 0.419022 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 10501.8 | 1.56548 | 89.8134ms | 749 | 768 | 871.172 | 68.0339 | 0.160639 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 10124.9 | 2.308 | 79.3793ms | 751 | 384 | 1023.82 | 70.7474 | 0.174497 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 16601.9 | 1.74368 | 1.44337ms | 7499 | 96 | 5416.76 | 430.792 | 0.172767 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 15702.2 | 2.39254 | 0.415747ms | 7497 | 30 | 3560.93 | 455.367 | 0.182948 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 16440.5 | 0.925169 | 0.838017ms | 75013 | 30 | 48620 | 4351.37 | 0.183842 | 1(Win) |
| lemire_digit_count | 14936 | 1.09253 | 0.890516ms | 75013 | 30 | 82148.2 | 4789.67 | 0.202127 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 14054.8 | 1.39405 | 10.1867ms | 749989 | 30 | 1.50986e+07 | 50889.7 | 0.21564 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 13626.7 | 1.91325 | 11.8987ms | 749989 | 30 | 3.02549e+07 | 52488.6 | 0.222735 | 1(Tie) |

----
### uint32_t-integer_count[10]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3247.47 | 0.304718 | 283.715ms | 100 | 30 | 0.24023 | 29.3667 | 0.324 | 1(Win) |
| lemire_digit_count | 3175.39 | 0.436716 | 307.229ms | 100 | 30 | 0.516092 | 30.0333 | 0.311667 | 2(Loss) |

----
### uint32_t-integer_count[100]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 12410.6 | 2.30265 | 66.3763ms | 1000 | 192 | 601.138 | 76.8438 | 0.139839 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 12369.3 | 0.380055 | 33.4832ms | 1000 | 30 | 2.57586 | 77.1 | 0.131033 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 22193 | 2.00415 | 1.48876ms | 10000 | 96 | 7120.35 | 429.719 | 0.129805 | 1(Win) |
| lemire_digit_count | 20528.4 | 1.96543 | 1.35844ms | 10000 | 96 | 8003.36 | 464.562 | 0.141336 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 21988.6 | 1.12913 | 0.816662ms | 100000 | 30 | 71947.2 | 4337.13 | 0.137414 | 1(Win) |
| rtc_digit_count | 18877.7 | 1.33203 | 3.76062ms | 100000 | 30 | 135848 | 5051.87 | 0.159679 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Linux-Clang/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 20517.1 | 1.6257 | 8.46486ms | 1000000 | 30 | 1.71305e+07 | 46482 | 0.147647 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 19810.3 | 2.29724 | 8.38745ms | 1000000 | 30 | 3.66903e+07 | 48140.3 | 0.153037 | 1(Tie) |

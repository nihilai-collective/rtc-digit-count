# Digit Counting
Performance profiling of functions (Compiled and run on macOS 25.6.0 using the GCC 16.2.0 compiler).  

Latest Results: (Oct 14, 2026)

> Adaptive sampling on (Apple M1 (Virtual)-NEON): iterations begin at 60 and double each epoch (e.g. 60 → 120 → 240 → ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Sampling does not stop early: epochs continue until 10 seconds have elapsed or the iteration cap is reached. The first epoch is kept only as an initial fallback; every later epoch is scored by its RSE plus its epoch-over-epoch mean shift (%), and the lowest-scoring epoch is retained as the canonical result, whether or not it met the convergence thresholds. A result counts as converged only if that retained epoch has RSE <= 10% AND mean shift <= 5%; non-converged results are still included in the rankings and in win/tie/loss tallying, so a result that did not meet these thresholds should be read with its reduced statistical confidence in mind. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
 This is the commit of BenchmarkSuite that was used to generate these results: [e7faa83](https://github.com/nihilai-collective/benchmarksuite/commit/e7faa83).
 
----
### uint64_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count DID NOT CONVERGE | 131.96 | 7.40887 | 4166.38ms | 30 | 24576 | 6.37188e+06 | 217.333 | 9.789 | -(Win) | false |
| rtc_digit_count | 87.3309 | 5.36111 | 5079.16ms | 30 | 100000 | 3.08171e+07 | 327.447 | 1.41736 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 157.151 | 4.10999 | 2336.94ms | 300 | 24576 | 1.37598e+08 | 1820.58 | 5.43283 | -(Win) | false |
| lemire_digit_count | 102.128 | 4.83043 | 2690.91ms | 300 | 21702 | 3.97239e+08 | 2800.85 | 1.98211 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 284.871 | 5.60576 | 1744.26ms | 3000 | 1536 | 4.86938e+08 | 10044 | 0.00663702 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 229.031 | 6.38024 | 2167.75ms | 2999 | 192 | 1.21914e+08 | 12489.3 | 7.64149 | -(Loss) | false |

----
### uint64_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 322.549 | 4.78176 | 1456.4ms | 29983 | 96 | 1.72508e+09 | 88650.7 | 1.12551 | 1(Win) | true |
| lemire_digit_count | 166.168 | 3.83376 | 2072.38ms | 29996 | 384 | 1.67265e+10 | 172152 | 3.42068 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count STATISTICAL TIE | 168.866 | 8.70309 | 2152.16ms | 299971 | 30 | 6.52139e+11 | 1.69409e+06 | 1.55996 | 1(Tie) | true |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 141.493 | 3.54394 | 2266.67ms | 300037 | 48 | 2.46542e+11 | 2.02227e+06 | 17.9191 | -(Tie) | false |

----
### uint64_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 199.31 | 5.21476 | 4268.7ms | 55 | 100000 | 1.88304e+07 | 263.145 | 2.46515 | 1(Win) | true |
| lemire_digit_count | 165.087 | 4.76613 | 4430.4ms | 55 | 100000 | 2.29275e+07 | 317.696 | 1.59224 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 511.787 | 6.74087 | 2063.2ms | 551 | 6144 | 2.94124e+07 | 1026.42 | 2.78611 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 268.274 | 3.40489 | 2388.01ms | 550 | 21702 | 9.62351e+07 | 1955.75 | 10.3261 | -(Loss) | false |

----
### uint64_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1205.94 | 2.87471 | 808.717ms | 5489 | 384 | 5.97905e+06 | 4340.67 | 0.0460971 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 413.923 | 2.33302 | 1513.36ms | 5503 | 5862 | 5.12953e+08 | 12679.4 | 5.60611 | -(Loss) | false |

----
### uint64_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 740.373 | 1.31633 | 1239.22ms | 55006 | 96 | 8.35073e+07 | 70853.3 | 0.509249 | 1(Win) | true |
| lemire_digit_count | 216.071 | 6.42306 | 2476.3ms | 55006 | 96 | 2.33445e+10 | 242781 | 3.08544 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 697.097 | 6.88455 | 983.099ms | 550153 | 48 | 1.28876e+11 | 752645 | 2.18515 | 1(Win) | true |
| lemire_digit_count | 285.975 | 8.12561 | 1993.99ms | 550147 | 30 | 6.66708e+11 | 1.83464e+06 | 0.742365 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 216.859 | 5.8369 | 5728.15ms | 80 | 98304 | 4.14864e+07 | 351.953 | 6.34745 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 143.133 | 9.55371 | 4958.75ms | 80 | 100000 | 2.59482e+08 | 533.189 | 7.75642 | -(Loss) | false |

----
### uint64_t-integer_count[100]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 648.961 | 12.3461 | 1894ms | 802 | 1536 | 3.25263e+07 | 1178.67 | 1.20145 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 388.186 | 3.71799 | 2577.53ms | 800 | 49152 | 2.62622e+08 | 1966.02 | 11.1313 | -(Loss) | false |

----
### uint64_t-integer_count[1000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 926.407 | 2.21955 | 1041.62ms | 7999 | 3072 | 1.02616e+08 | 8234.42 | 0.244491 | 1(Win) | true |
| lemire_digit_count | 621.812 | 8.71233 | 2476.17ms | 8021 | 96 | 1.10267e+08 | 12301.3 | 1.11793 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 638.765 | 7.57619 | 1431.73ms | 79984 | 192 | 1.57155e+10 | 119416 | 21.6005 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 488.31 | 1.83257 | 2837.14ms | 79959 | 30 | 2.45688e+08 | 156160 | 38.1506 | -(Loss) | false |

----
### uint64_t-integer_count[100000]-digit_length[1-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 754.839 | 6.4721 | 1317.37ms | 800008 | 48 | 2.05405e+11 | 1.01074e+06 | 1.70989 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 285.758 | 6.58338 | 2899.8ms | 799867 | 30 | 9.26525e+11 | 2.66943e+06 | 8.76697 | -(Loss) | false |

----
### uint64_t-integer_count[10]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count STATISTICAL TIE | 247.889 | 9.52066 | 6461.21ms | 105 | 49152 | 7.28861e+07 | 404.469 | 4.12356 | 1(Tie) | true |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 238.027 | 10.6686 | 6720.7ms | 105 | 100000 | 2.01745e+08 | 421.012 | 2.69575 | -(Tie) | false |

----
### uint64_t-integer_count[100]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 598.966 | 3.81338 | 2200.19ms | 1050 | 21702 | 8.82289e+07 | 1672.03 | 3.6662 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 416.168 | 3.36903 | 2761.38ms | 1050 | 24576 | 1.61447e+08 | 2405.77 | 14.6663 | -(Loss) | false |

----
### uint64_t-integer_count[1000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1513.66 | 1.84798 | 697.027ms | 10504 | 1536 | 2.29753e+07 | 6618.17 | 0.169013 | 1(Win) | true |
| lemire_digit_count | 627.767 | 3.32491 | 2974.24ms | 10502 | 768 | 2.16121e+08 | 15954.7 | 0.808762 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1626.61 | 3.14167 | 1732.31ms | 105114 | 30 | 1.12459e+08 | 61627.7 | 3.23042 | 1(Win) | true |
| lemire_digit_count | 899.075 | 3.11052 | 2011.92ms | 104947 | 96 | 1.15103e+09 | 111320 | 0.165017 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[1-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b1-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1159.57 | 8.36149 | 1143.58ms | 1050076 | 30 | 1.56437e+11 | 863625 | 0.0761479 | 1(Win) | true |
| lemire_digit_count | 382.897 | 7.96748 | 2719.15ms | 1049893 | 30 | 1.30223e+12 | 2.61495e+06 | 1.06733 | 2(Loss) | true |

----
### uint64_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count STATISTICAL TIE | 362.6 | 7.3104 | 3496.57ms | 75 | 98304 | 2.04365e+07 | 197.232 | 1.6658 | 1(Tie) | true |
| lemire_digit_count STATISTICAL TIE | 330.412 | 5.9935 | 3973.14ms | 75 | 49152 | 8.27238e+06 | 216.453 | 3.59777 | 1(Tie) | true |

----
### uint64_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 765.23 | 4.42805 | 1413.39ms | 750 | 24576 | 4.21072e+07 | 934.781 | 0.123845 | 1(Win) | true |
| lemire_digit_count | 484.63 | 3.48902 | 1749.36ms | 750 | 21702 | 5.75354e+07 | 1475.76 | 0.348617 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 746.506 | 2.63807 | 1214.94ms | 7501 | 5862 | 3.7461e+08 | 9582.53 | 1.30686 | 1(Win) | true |
| lemire_digit_count | 566.065 | 2.33928 | 1814.28ms | 7501 | 5862 | 5.1228e+08 | 12637.1 | 3.97457 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1576.07 | 1.88741 | 672.092ms | 74990 | 48 | 3.52068e+07 | 45376 | 0.86689 | 1(Win) | true |
| lemire_digit_count | 847.02 | 4.66643 | 1342.64ms | 74990 | 48 | 7.45118e+08 | 84432 | 4.30046 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 641.679 | 5.80568 | 1391.6ms | 749820 | 48 | 2.00921e+11 | 1.11439e+06 | 5.11528 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 424.197 | 6.08532 | 2211.01ms | 749983 | 30 | 3.15831e+11 | 1.6861e+06 | 17.8305 | -(Loss) | false |

----
### uint64_t-integer_count[10]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count DID NOT CONVERGE | 302.958 | 4.38503 | 4761.34ms | 100 | 100000 | 1.90398e+07 | 314.673 | 5.19474 | -(Win) | false |
| rtc_digit_count | 235.084 | 6.20488 | 5824.83ms | 100 | 98304 | 6.22864e+07 | 405.674 | 1.53408 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count DID NOT CONVERGE | 1336.37 | 5.62148 | 2513.59ms | 999 | 3072 | 4.93516e+06 | 713 | 13.6455 | -(Win) | false |
| rtc_digit_count DID NOT CONVERGE | 470.022 | 3.67143 | 2560.83ms | 1000 | 24576 | 1.36315e+08 | 2028.53 | 11.0548 | -(Loss) | false |

----
### uint64_t-integer_count[1000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count STATISTICAL TIE | 1220.2 | 7.68457 | 1414.4ms | 9997 | 96 | 3.46085e+07 | 7813.33 | 2.95151 | 1(Tie) | true |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 1179.54 | 7.79861 | 2017.07ms | 9997 | 96 | 3.8143e+07 | 8082.67 | 8.75978 | -(Tie) | false |

----
### uint64_t-integer_count[10000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1314.79 | 1.76337 | 1437.22ms | 100006 | 48 | 7.85358e+07 | 72538.7 | 0.897626 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 405.708 | 2.8106 | 2722.34ms | 100006 | 48 | 2.09537e+09 | 235077 | 10.9827 | -(Loss) | false |

----
### uint64_t-integer_count[100000]-digit_length[5-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 748.511 | 11.1119 | 1724.46ms | 1000097 | 48 | 9.62288e+11 | 1.27422e+06 | 9.90667 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 417.054 | 5.57137 | 2734.45ms | 1000097 | 48 | 7.79228e+11 | 2.28691e+06 | 5.48508 | -(Loss) | false |

----
### uint64_t-integer_count[10]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count | 599.397 | 7.05468 | 4326.09ms | 125 | 24576 | 4.82996e+06 | 198.719 | 2.2995 | 1(Win) | true |
| rtc_digit_count | 425.158 | 5.1415 | 5223.04ms | 125 | 100000 | 2.07983e+07 | 280.494 | 4.69696 | 2(Loss) | true |

----
### uint64_t-integer_count[100]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 994.951 | 2.77594 | 1412.5ms | 1250 | 24576 | 2.71685e+07 | 1197.75 | 4.63932 | 1(Win) | true |
| lemire_digit_count | 727.765 | 5.19234 | 2509.24ms | 1251 | 12288 | 8.89724e+07 | 1638.79 | 1.28009 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1387.12 | 4.34193 | 1461.97ms | 12492 | 384 | 5.34009e+07 | 8588.67 | 0.837508 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 624.068 | 3.98829 | 2232.83ms | 12505 | 1536 | 8.92185e+08 | 19109.3 | 5.74585 | -(Loss) | false |

----
### uint64_t-integer_count[10000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1846.18 | 1.83 | 1271.72ms | 124787 | 30 | 4.1746e+07 | 64460.8 | 0.935329 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 579.223 | 2.74206 | 2353.45ms | 124983 | 384 | 1.22263e+10 | 205781 | 13.5764 | -(Loss) | false |

----
### uint64_t-integer_count[100000]-digit_length[5-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b5-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 1642.96 | 8.74177 | 1129.29ms | 1250320 | 30 | 1.20755e+11 | 725760 | 12.4739 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 709.309 | 7.78688 | 1804.74ms | 1250188 | 48 | 8.22331e+11 | 1.68089e+06 | 9.17763 | -(Loss) | false |

----
### uint64_t-integer_count[10]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count STATISTICAL TIE DID NOT CONVERGE | 357.089 | 19.4404 | 5902.4ms | 125 | 6144 | 2.5858e+07 | 333.708 | 3.59894 | -(Tie) | false |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 356.096 | 5.708 | 4323.38ms | 125 | 98304 | 3.59085e+07 | 334.833 | 5.41781 | -(Tie) | false |

----
### uint64_t-integer_count[100]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1200.41 | 2.32586 | 1122.55ms | 1250 | 49152 | 2.62123e+07 | 992.885 | 1.91824 | 1(Win) | true |
| lemire_digit_count | 625.381 | 2.28 | 2275.76ms | 1250 | 49152 | 9.28066e+07 | 1905.83 | 3.55358 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count DID NOT CONVERGE | 652.071 | 2.42859 | 2777.15ms | 12500 | 3072 | 6.05604e+08 | 18282.2 | 8.4025 | -(Win) | false |
| rtc_digit_count DID NOT CONVERGE | 550.952 | 3.01089 | 2193.89ms | 12500 | 3072 | 1.30386e+09 | 21637.7 | 7.94815 | -(Loss) | false |

----
### uint64_t-integer_count[10000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 957.701 | 14.632 | 1397.32ms | 124993 | 30 | 9.95037e+09 | 124467 | 1.41139 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 517.053 | 4.01191 | 2339.16ms | 124988 | 192 | 1.64237e+10 | 230533 | 8.96263 | -(Loss) | false |

----
### uint64_t-integer_count[100000]-digit_length[10-15] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-15%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 1165.41 | 8.15246 | 1349.4ms | 1250153 | 48 | 3.3388e+11 | 1.02302e+06 | 10.5778 | -(Win) | false |
| lemire_digit_count DID NOT CONVERGE | 866.336 | 8.61208 | 2967.39ms | 1249860 | 30 | 4.212e+11 | 1.37586e+06 | 20.054 | -(Loss) | false |

----
### uint64_t-integer_count[10]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 512.96 | 5.65606 | 4085.1ms | 150 | 98304 | 2.44615e+07 | 278.896 | 6.56756 | -(Tie) | false |
| rtc_digit_count STATISTICAL TIE DID NOT CONVERGE | 464.492 | 10.6467 | 5986.14ms | 150 | 24576 | 2.64411e+07 | 308.083 | 12.4135 | -(Tie) | false |

----
### uint64_t-integer_count[100]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count DID NOT CONVERGE | 1132.62 | 2.39055 | 1699.67ms | 1500 | 49152 | 4.4807e+07 | 1263.01 | 11.4437 | -(Win) | false |
| rtc_digit_count DID NOT CONVERGE | 960.198 | 3.34088 | 2133.07ms | 1500 | 49152 | 1.21765e+08 | 1489.8 | 6.55764 | -(Loss) | false |

----
### uint64_t-integer_count[1000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count DID NOT CONVERGE | 1567.69 | 3.0606 | 1059.47ms | 15002 | 5862 | 4.5735e+08 | 9126.3 | 5.41715 | -(Win) | false |
| lemire_digit_count | 823.116 | 2.6511 | 1938.78ms | 15001 | 3072 | 6.52225e+08 | 17380.5 | 1.52226 | 2(Loss) | true |

----
### uint64_t-integer_count[10000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 2709.72 | 1.31151 | 1016.03ms | 150108 | 30 | 1.4402e+07 | 52829.9 | 2.65296 | 1(Win) | true |
| lemire_digit_count | 1799.99 | 1.95684 | 1702.32ms | 150108 | 30 | 7.26606e+07 | 79530.7 | 0.491138 | 2(Loss) | true |

----
### uint64_t-integer_count[100000]-digit_length[10-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b10-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count STATISTICAL TIE DID NOT CONVERGE | 1367.44 | 6.96041 | 1154.57ms | 1500063 | 48 | 2.54516e+11 | 1.04617e+06 | 5.0341 | -(Tie) | false |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 1138.77 | 9.78643 | 1866.2ms | 1499853 | 30 | 4.53308e+11 | 1.25606e+06 | 6.79318 | -(Tie) | false |

----
### uint64_t-integer_count[10]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 651.613 | 4.20656 | 4724.73ms | 175 | 98304 | 1.14151e+07 | 256.169 | 16.3259 | -(Tie) | false |
| rtc_digit_count STATISTICAL TIE DID NOT CONVERGE | 565.025 | 10.4159 | 5654.59ms | 175 | 49152 | 4.6516e+07 | 295.349 | 7.94617 | -(Tie) | false |

----
### uint64_t-integer_count[100]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1387.04 | 4.6701 | 2646.15ms | 1750 | 6144 | 1.93912e+07 | 1202.96 | 3.4358 | 1(Win) | true |
| lemire_digit_count | 603.23 | 6.4578 | 3094.57ms | 1750 | 12288 | 3.92358e+08 | 2767.04 | 2.58276 | 2(Loss) | true |

----
### uint64_t-integer_count[1000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b1000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| rtc_digit_count | 1751.34 | 6.72836 | 2527.89ms | 17497 | 192 | 7.89084e+07 | 9528 | 0.390298 | 1(Win) | true |
| lemire_digit_count DID NOT CONVERGE | 914.95 | 2.3513 | 2732.98ms | 17500 | 5862 | 1.07831e+09 | 18240.7 | 22.3245 | -(Loss) | false |

----
### uint64_t-integer_count[10000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b10000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count STATISTICAL TIE DID NOT CONVERGE | 1827.33 | 0.639539 | 1536.36ms | 174996 | 384 | 1.31004e+08 | 91329.3 | 12.647 | -(Tie) | false |
| rtc_digit_count STATISTICAL TIE | 1725.87 | 5.05586 | 1050.12ms | 174994 | 192 | 4.58902e+09 | 96697.3 | 4.00916 | 1(Tie) | true |

----
### uint64_t-integer_count[100000]-digit_length[15-20] Results 

<p align="left"><a href="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png" target="_blank"><img src="./graphs/macOS-GCC/digit-counting-uint64_t/uint64_t-integer_count%5b100000%5d-digit_length%5b15-20%5d-Results.png?raw=true" 
alt="" width="400"/></a></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Mean Convergence (%) | Position | Converged |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ---------------- | -------- | --------- |
| lemire_digit_count DID NOT CONVERGE | 4119.97 | 5.73066 | 532.014ms | 1750181 | 48 | 2.5872e+10 | 405125 | 8.56181 | -(Win) | false |
| rtc_digit_count DID NOT CONVERGE | 1844.93 | 12.2888 | 1045.42ms | 1749912 | 30 | 3.70695e+11 | 904559 | 0.471339 | -(Loss) | false |

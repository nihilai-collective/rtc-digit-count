# Digit Counting
Performance profiling of functions (Compiled and run on Windows 10.0.26200 using the MSVC 19.44.35228.0 compiler).  

Latest Results: (Sep 15, 2026)

> Adaptive sampling on (Intel(R) Core(TM) i9-14900KF): iterations begin at 60 and double each epoch (e.g. 60 -> 120 -> 240 -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise). Each epoch runs all iterations and evaluates a trailing window of max(iterations/10, 30) samples, capped at 100000. Convergence requires RSE < 2.500000% AND mean shift < 1.000000% epoch-over-epoch simultaneously. The first epoch satisfying both conditions is retained as the canonical result. If convergence is never reached before 5 seconds elapse or the iteration cap is hit, the result is marked non-converged and excluded from all rankings — only converged results participate in win/tie/loss tallying. All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.

#### Note:
  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).
  
----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1408.8 | 2.33935 | 672.042ms | 55 | 3072 | 2339.59 | 37.3047 | 0.704822 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1402.68 | 2.33124 | 679.551ms | 55 | 3072 | 2343.7 | 37.4674 | 0.764861 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count | 3726.57 | 1.80375 | 49.5435ms | 549 | 384 | 2470.63 | 140.625 | 0.663305 | 1(Win) |
| rtc_digit_count | 3047.09 | 1.65716 | 66.7975ms | 549 | 1536 | 12479.6 | 172.005 | 0.781059 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 4470.89 | 0.699866 | 1.6461ms | 5500 | 30 | 2022.99 | 1173.33 | 0.668937 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 4458.22 | 0.971412 | 1.6079ms | 5500 | 30 | 3919.54 | 1176.67 | 0.672609 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4151.22 | 0.887876 | 2.7238ms | 55063 | 30 | 378448 | 12650 | 0.730593 | 1(Win) |
| lemire_digit_count | 3910.12 | 1.18091 | 2.6486ms | 55063 | 30 | 754586 | 13430 | 0.776342 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 3826.22 | 0.478482 | 24.1048ms | 550122 | 30 | 1.29132e+07 | 137117 | 0.794057 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 3657.88 | 2.18954 | 26.7915ms | 550122 | 30 | 2.95861e+08 | 143427 | 0.830532 | 1(Tie) |

----
### uint32_t-integer_count[10]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 782.199 | 2.3789 | 724.583ms | 30 | 3072 | 2335.66 | 36.6536 | 1.26337 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 764.545 | 2.32962 | 695.49ms | 30 | 3072 | 2344.51 | 37.5 | 1.40148 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2027.07 | 1.78749 | 49.3269ms | 297 | 384 | 2408.34 | 140.104 | 1.12246 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1993.72 | 1.77298 | 49.0043ms | 297 | 384 | 2449.34 | 142.448 | 1.21488 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2402.43 | 0.737447 | 1.6543ms | 2997 | 30 | 2310.34 | 1190 | 1.24137 | 1(Win) |
| lemire_digit_count | 2349.78 | 0.796327 | 1.7099ms | 2997 | 30 | 2816.09 | 1216.67 | 1.26264 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2258.63 | 1.93783 | 2.3994ms | 29991 | 30 | 1.80654e+06 | 12663.3 | 1.34441 | 1(Win) |
| lemire_digit_count | 2145.14 | 1.21591 | 2.7017ms | 29991 | 30 | 788506 | 13333.3 | 1.41587 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-5] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-5%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 2094.86 | 1.02076 | 24.9067ms | 300035 | 30 | 5.83182e+07 | 136590 | 1.45025 | 1(Win) |
| lemire_digit_count | 2043.59 | 0.670383 | 26.0947ms | 300035 | 30 | 2.64318e+07 | 140017 | 1.48694 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1420.56 | 2.37689 | 744.212ms | 55 | 3072 | 2385.85 | 37.0768 | 0.689445 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1357.39 | 2.26621 | 743.685ms | 55 | 3072 | 2375.38 | 38.8021 | 0.790665 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 3789.78 | 1.79505 | 50.9922ms | 550 | 384 | 2374.89 | 138.542 | 0.595166 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 3685.86 | 1.77298 | 51.5852ms | 550 | 384 | 2449.34 | 142.448 | 0.665635 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| lemire_digit_count STATISTICAL TIE | 4422.4 | 1.32371 | 1.7393ms | 5502 | 30 | 7402.3 | 1186.67 | 0.677166 | 1(Tie) |
| rtc_digit_count STATISTICAL TIE | 4422.4 | 2.00941 | 1.8655ms | 5502 | 30 | 17057.5 | 1186.67 | 0.680201 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 4138.78 | 1.57801 | 2.3176ms | 55072 | 30 | 1.203e+06 | 12690 | 0.732896 | 1(Win) |
| lemire_digit_count | 3812.32 | 2.04646 | 2.6344ms | 55072 | 30 | 2.38461e+06 | 13776.7 | 0.794791 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[1-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b1-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 3876.93 | 0.933936 | 24.9212ms | 549772 | 30 | 4.78569e+07 | 135237 | 0.783635 | 1(Win) |
| lemire_digit_count | 3686.65 | 0.845876 | 26.1475ms | 549772 | 30 | 4.34145e+07 | 142217 | 0.82401 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 1930.32 | 2.35408 | 743.755ms | 74 | 3072 | 2332.06 | 37.0117 | 0.50357 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 1911.01 | 1.64944 | 793.185ms | 75 | 6144 | 2342.5 | 37.4349 | 0.561188 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5113.59 | 1.84625 | 54.3294ms | 749 | 384 | 2559.77 | 139.844 | 0.437509 | 1(Win) |
| lemire_digit_count | 3957.02 | 1.75918 | 74.084ms | 749 | 1536 | 15515.1 | 180.664 | 0.646883 | 2(Loss) |

----
### uint32_t-integer_count[1000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 6167.89 | 0.886495 | 1.7662ms | 7502 | 30 | 3172.41 | 1160 | 0.484531 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 6097.8 | 0.90762 | 1.6246ms | 7502 | 30 | 3402.3 | 1173.33 | 0.491227 | 1(Tie) |

----
### uint32_t-integer_count[10000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 5739.36 | 1.92494 | 2.3193ms | 74946 | 30 | 1.72395e+06 | 12453.3 | 0.528757 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 5533.48 | 1.26756 | 2.5067ms | 74946 | 30 | 804195 | 12916.7 | 0.547254 | 1(Tie) |

----
### uint32_t-integer_count[100000]-digit_length[5-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b5-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 5348.81 | 1.16848 | 24.5698ms | 750043 | 30 | 7.32525e+07 | 133730 | 0.567979 | 1(Win) |
| lemire_digit_count | 5070.27 | 2.06192 | 26.1409ms | 750043 | 30 | 2.53849e+08 | 141077 | 0.599009 | 2(Loss) |

----
### uint32_t-integer_count[10]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 2629.88 | 2.39907 | 747.88ms | 100 | 3072 | 2325.07 | 36.263 | 0.381354 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 2501.87 | 2.29918 | 734.938ms | 100 | 3072 | 2359.6 | 38.1185 | 0.428747 | 1(Tie) |

----
### uint32_t-integer_count[100]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count STATISTICAL TIE | 6634.26 | 2.02401 | 53.2618ms | 1000 | 384 | 3250.65 | 143.75 | 0.340875 | 1(Tie) |
| lemire_digit_count STATISTICAL TIE | 6539.48 | 2.4722 | 47.3893ms | 1000 | 192 | 2495.64 | 145.833 | 0.410406 | 1(Tie) |

----
### uint32_t-integer_count[1000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b1000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 8197.77 | 0.872673 | 1.6503ms | 10000 | 30 | 3091.95 | 1163.33 | 0.363997 | 1(Win) |
| lemire_digit_count | 7838.42 | 0.888501 | 1.7164ms | 10000 | 30 | 3505.75 | 1216.67 | 0.380343 | 2(Loss) |

----
### uint32_t-integer_count[10000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b10000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7470.03 | 0.906283 | 2.3881ms | 100000 | 30 | 401609 | 12766.7 | 0.406221 | 1(Win) |
| lemire_digit_count | 7175.88 | 1.03896 | 2.5529ms | 100000 | 30 | 571966 | 13290 | 0.422723 | 2(Loss) |

----
### uint32_t-integer_count[100000]-digit_length[10-10] Results 

<p align="left"><a href="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png" target="_blank"><img src="./graphs/Windows-MSVC/digit-counting-uint32_t/uint32_t-integer_count%5b100000%5d-digit_length%5b10-10%5d-Results.png?raw=true" 
alt="" width="400"/></p>

| Library | Throughput (MB/s) | RSE (%) | Window Duration | File Size (Bytes) | Window Samples (k) | Variance | Latency / Run (ns) | Cycles/Byte | Position |
| ------- | ----------- | ------- | --------- | --------------- | -------------------- | ---------- | ---- | ----------- | -------- |
| rtc_digit_count | 7047.03 | 0.738978 | 24.6219ms | 1000000 | 30 | 3.00036e+07 | 135330 | 0.431058 | 1(Win) |
| lemire_digit_count | 6874.32 | 0.793337 | 25.464ms | 1000000 | 30 | 3.63394e+07 | 138730 | 0.441951 | 2(Loss) |

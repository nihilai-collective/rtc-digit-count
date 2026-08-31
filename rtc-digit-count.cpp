// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Nihilai Collective Corp
#include <benchmarksuite>
#include <rt-ut>

namespace rtc_digit_count {

#if defined(NDEBUG)
	static constexpr uint64_t iteration_element_budget{ 1200ull * 100000ull };
	static constexpr uint64_t measured_iteration_count{ 60 };
#else
	static constexpr uint64_t iteration_element_budget{ 200ull * 100000ull };
	static constexpr uint64_t measured_iteration_count{ 10 };
#endif

	template<uint64_t count> consteval uint64_t max_iterations_for() noexcept {
		constexpr uint64_t computed{ iteration_element_budget / count };
		return computed < measured_iteration_count ? measured_iteration_count : computed;
	}

	static constexpr benchmarksuite::stage_config_data config{ .clear_cpu_caches_before_iterations = true,
		.measured_iteration_count																	   = measured_iteration_count,
		.max_iteration_count																		   = iteration_element_budget / 100000ull };

	template<typename value_type>
	concept uns32_t = std::unsigned_integral<value_type> && sizeof(value_type) == 4;

	template<typename value_type>
	concept uns64_t = std::unsigned_integral<value_type> && sizeof(value_type) == 8;

	template<typename value_type, uint64_t digits> consteval value_type max_value_for_digits() noexcept {
		value_type power = 1;
		for (uint64_t i = 0; i < digits; ++i) {
			power *= 10;
		}
		return power - 1;
	}

	template<std::unsigned_integral T> consteval uint32_t max_decimal_digits() noexcept {
		T max_val		= std::numeric_limits<T>::max();
		uint32_t digits = 0;
		while (max_val > 0) {
			++digits;
			max_val /= 10;
		}
		return digits;
	}

	template<typename value_type> value_type generate_integer(uint64_t digit_count, benchmarksuite::random_generator<value_type>& rg) {
		switch (digit_count) {
			case 1: {
				return rg.impl(static_cast<value_type>(0), static_cast<value_type>(max_value_for_digits<value_type, 1>()));
			}
			case 2: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 1>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 2>()));
			}
			case 3: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 2>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 3>()));
			}
			case 4: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 3>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 4>()));
			}
			case 5: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 4>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 5>()));
			}
			case 6: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 5>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 6>()));
			}
			case 7: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 6>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 7>()));
			}
			case 8: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 7>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 8>()));
			}
			case 9: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 8>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 9>()));
			}
			case 10: {
				if constexpr (sizeof(value_type) == 4) {
					return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 9>() + 1), std::numeric_limits<value_type>::max());
				} else {
					return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 9>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 10>()));
				}
			}
			case 11: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 10>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 11>()));
			}
			case 12: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 11>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 12>()));
			}
			case 13: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 12>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 13>()));
			}
			case 14: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 13>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 14>()));
			}
			case 15: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 14>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 15>()));
			}
			case 16: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 15>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 16>()));
			}
			case 17: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 16>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 17>()));
			}
			case 18: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 17>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 18>()));
			}
			case 19: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 18>() + 1), static_cast<value_type>(max_value_for_digits<value_type, 19>()));
			}
			default: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 19>() + 1), std::numeric_limits<value_type>::max());
			}
		}
	}

	template<typename value_type> std::vector<value_type> generate_random_integers(uint64_t count, benchmarksuite::random_generator<value_type>& rg) {
		std::vector<value_type> randomNumbers(count);
		static constexpr uint64_t max_digit_count{ max_decimal_digits<value_type>() };
		for (uint64_t x = 0; x < count; ++x) {
			uint64_t digit_count{ rg.impl(1, max_digit_count) };
			randomNumbers[x] = generate_integer(digit_count, rg);
		}
		std::vector<value_type> randomNumbersFinal = randomNumbers;
		for (uint64_t i = randomNumbersFinal.size() - 1; i > 0; --i) {
			std::swap(randomNumbersFinal[i], randomNumbersFinal[rg.impl(0, i)]);
		}
		return randomNumbersFinal;
	}

	template<uns32_t value_type> BNCH_SWT_HOST uint32_t rtc_digit_count(const value_type inputValue) {
		alignas(64) static constexpr uint32_t digitCounts_32[]{ 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1 };
		alignas(64) static constexpr uint32_t digitCountThresholds_32[]{ 0u, 9u, 99u, 999u, 9999u, 99999u, 999999u, 9999999u, 99999999u, 999999999u, 4294967295u };
		const uint32_t originalDigitCount{ digitCounts_32[std::countl_zero(inputValue)] };
		return originalDigitCount + static_cast<uint32_t>(inputValue > digitCountThresholds_32[originalDigitCount]);
	}

	template<uns64_t value_type> BNCH_SWT_HOST uint32_t rtc_digit_count(const value_type inputValue) {
		alignas(64) static constexpr uint32_t digitCounts[]{ 19, 19, 19, 19, 18, 18, 18, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 13, 12, 12, 12, 11, 11, 11,
			10, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1 };
		alignas(64) static constexpr uint64_t digitCountThresholds[]{ 0ull, 9ull, 99ull, 999ull, 9999ull, 99999ull, 999999ull, 9999999ull, 99999999ull, 999999999ull, 9999999999ull,
			99999999999ull, 999999999999ull, 9999999999999ull, 99999999999999ull, 999999999999999ull, 9999999999999999ull, 99999999999999999ull, 999999999999999999ull,
			9999999999999999999ull };
		const uint32_t originalDigitCount{ digitCounts[std::countl_zero(inputValue)] };
		return originalDigitCount + static_cast<uint32_t>(inputValue > digitCountThresholds[originalDigitCount]);
	}

	BNCH_SWT_HOST int int_log2(uint64_t x) {
		return 63 - std::countl_zero(x | 1);
	}

	BNCH_SWT_HOST int lemire_digit_count(uint32_t x) {
		static constexpr uint32_t table[] = { 9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 999999999 };
		int y							  = (9 * int_log2(x)) >> 5;
		y += x > table[y];
		return y + 1;
	}

	BNCH_SWT_HOST int lemire_digit_count(uint64_t x) {
		static constexpr uint64_t table[] = { 9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 999999999, 9999999999, 99999999999, 999999999999, 9999999999999, 99999999999999,
			999999999999999ULL, 9999999999999999ULL, 99999999999999999ULL, 999999999999999999ULL, 9999999999999999999ULL };
		int y							  = (19 * int_log2(x) >> 6);
		y += x > table[y];
		return y + 1;
	}

	template<uint64_t count> struct lemire_digit_count_type {
		template<typename integers_type, typename results_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, integers_type& random_integers_new, results_type& results_new) {
			auto* random_integers = random_integers_new.data() + index * count;
			auto* results		  = results_new.data() + index * count;
			++index;
			using value_type	  = typename integers_type::value_type;
			value_type currentCount{};
			for (uint64_t x = 0; x < count; ++x) {
				results[x] = lemire_digit_count(random_integers[x]);
				currentCount += static_cast<value_type>(results[x]);
				benchmarksuite::do_not_optimize_away(currentCount);
			}
			return currentCount;
		}
	};

	template<uint64_t count> struct rtc_digit_count_type {
		template<typename integers_type, typename results_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, integers_type& random_integers_new, results_type& results_new) {
			auto* random_integers = random_integers_new.data() + index * count;
			auto* results		  = results_new.data() + index * count;
			++index;
			using value_type	  = typename integers_type::value_type;
			value_type currentCount{};
			for (uint64_t x = 0; x < count; ++x) {
				results[x] = rtc_digit_count(random_integers[x]);
				currentCount += static_cast<value_type>(results[x]);
				benchmarksuite::do_not_optimize_away(currentCount);
			}
			return currentCount;
		}
	};

	inline static constexpr benchmarksuite::string_literal current_path{ benchmarksuite::get_current_path_impl() };
	inline static constexpr benchmarksuite::string_literal base_path{ BASE_PATH };
	inline static constexpr benchmarksuite::string_literal markdown_path{ base_path + "/Results" };
	inline static constexpr benchmarksuite::string_literal csv_path{ base_path + "/csv" };
	inline static constexpr benchmarksuite::string_literal json_path{ base_path + "/example-data" };
	inline static constexpr benchmarksuite::string_literal graphs_path{ base_path + "/graphs/" };
	inline static constexpr benchmarksuite::string_literal markdown_out_path{ markdown_path + "/" + current_path };
	inline static constexpr benchmarksuite::string_literal csv_out_path{ csv_path + "/" + current_path };
	inline static constexpr benchmarksuite::string_literal json_out_path{ json_path + "/" + current_path };
	inline static constexpr benchmarksuite::string_literal graphs_out_path{ graphs_path + "/" + current_path };

	std::string make_section01(const std::string& cpu_name) {
		std::stringstream stream{};
		stream << "\n> Adaptive sampling on (" << cpu_name << "): iterations begin at " << std::to_string(config.measured_iteration_count);
		stream << " and double each epoch (e.g. " << std::to_string(config.measured_iteration_count) << " -> " << std::to_string(config.measured_iteration_count * 2) << " -> "
			   << std::to_string(config.measured_iteration_count * 4) << " -> ...) up to a per-test-size maximum (scaled so every size gets the same iterations*count "
			   << "memory/verification budget - smaller integer counts get proportionally more iterations to average out timing noise)";
		stream << ". Each epoch runs all iterations and evaluates a trailing window of "
			   << "max(iterations/10, " << std::to_string(config.min_k) << ") samples, capped at " << std::to_string(config.max_k) << ". Convergence requires RSE < "
			   << config.rse_threshold << "% AND mean shift < " << config.convergence_threshold << "% epoch-over-epoch simultaneously. ";
		stream << "The first epoch satisfying both conditions is retained as the canonical result. "
			   << "If convergence is never reached before " << config.max_time_in_s << " seconds elapse or the iteration cap is hit, the result is marked non-converged and "
			   << "excluded from all rankings — only converged results participate in win/tie/loss tallying. "
			   << "All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.\n\n";
		stream << "#### Note:\n  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).\n  ";
		return stream.str();
	}

	std::string make_commit_row(const std::string& label, const std::string& org_repo, const std::string& commit) {
		return "| " + label + ": [" + commit + "](https://github.com/" + org_repo + "/commit/" + commit + ")  \n";
	}

	std::string make_section00(const std::string& stage_name, const std::string& os_id, const std::string& os_version, const std::string& compiler_id,
		const std::string& compiler_version) {
		return "# " + stage_name + "  \n----\n\nPerformance profiling of libraries (Compiled and run on " + os_id + " " + os_version + " using the " + compiler_id + " " +
			compiler_version + " compiler).  \n\nLatest Results: (";
	}

	std::string generate_section(const std::string& test_name_new, const std::string& current_path_new) {
		std::string encoded = benchmarksuite::url_encode(test_name_new);

		return "\n----\n### " + test_name_new +
			" Results \n\n"
			"<p align=\"left\"><a href=\"./graphs/" +
			current_path_new + "/" + encoded +
			"-Results.png\" target=\"_blank\">"
			"<img src=\"./graphs/" +
			current_path_new + "/" + encoded +
			"-Results.png?raw=true\" \n"
			"alt=\"\" width=\"400\"/></p>\n\n";
	}

	template<typename bench_stage_type, benchmarksuite::string_literal test_name, benchmarksuite::string_literal library_name, benchmarksuite::stage_config_data per_test_config,
		typename functor_type, typename... arg_types>
	void run_benchmark_scaled(arg_types&&... args) {
		auto& test_data_val	 = bench_stage_type::get_raw_test_data().results[test_name.operator std::string_view()];
		test_data_val.test_name = test_name.operator std::string_view();
		if constexpr (per_test_config.clear_cpu_caches_before_iterations) {
			benchmarksuite::internal::cache_clearer<per_test_config.benchmark_type> cclearer{};
			cclearer.evict_caches();
		}
		test_data_val.results[library_name.operator std::string_view()] =
			benchmarksuite::run_adaptive_benchmark<functor_type, per_test_config>(std::forward<arg_types>(args)...);
	}

	template<typename bench_stage_type, uint64_t count, benchmarksuite::string_literal stage_name, benchmarksuite::string_literal test_name, typename value_type>
	void test_function(std::string& results_string) {
		static constexpr benchmarksuite::stage_config_data per_count_config{ .clear_cpu_caches_before_iterations = config.clear_cpu_caches_before_iterations,
			.measured_iteration_count																			 = config.measured_iteration_count,
			.max_iteration_count																				 = max_iterations_for<count>(),
			.convergence_threshold																				 = config.convergence_threshold,
			.benchmark_type																						 = config.benchmark_type,
			.max_time_in_s																						 = config.max_time_in_s,
			.rse_threshold																						 = config.rse_threshold,
			.max_k																								 = config.max_k,
			.min_k																								 = config.min_k };
		static constexpr uint64_t total_elements = per_count_config.max_iteration_count * count;
		benchmarksuite::random_generator<value_type> rg{};
		std::vector<value_type> random_integers = generate_random_integers<value_type>(total_elements, rg);
		std::vector<uint64_t> counts(total_elements);
		std::vector<value_type> results_01(total_elements);
		std::vector<value_type> results_02(total_elements);

		for (uint64_t x = 0; x < total_elements; ++x) {
			counts[x]	  = std::to_string(random_integers[x]).length();
			results_01[x] = lemire_digit_count(random_integers[x]);
			results_02[x] = rtc_digit_count(random_integers[x]);
		}

		rt_ut::unit_test<"lemire-digit-count">::assert_eq(true, [&] {
			for (uint64_t i = 0; i < total_elements; ++i) {
				if (results_01[i] != counts[i]) {
					std::cout << "lemire-digit-count-" << sizeof(value_type) * 8 << " failed to count the integers of value : " << random_integers[i]
							  << ", instead it counted : " << results_01[i] << ", when it should be: " << counts[i] << std::endl;
					return false;
				}
			}
			return true;
		});

		rt_ut::unit_test<"rtc-digit-count">::assert_eq(true, [&] {
			for (uint64_t i = 0; i < total_elements; ++i) {
				if (results_02[i] != counts[i]) {
					std::cout << "rtc-digit-count-" << sizeof(value_type) * 8 << " failed to count the integers of value : " << random_integers[i]
							  << ", instead it counted : " << results_02[i] << ", when it should be: " << counts[i] << std::endl;
					return false;
				}
			}
			return true;
		});

		static constexpr benchmarksuite::string_literal bit_size{ benchmarksuite::internal::to_string_literal<sizeof(value_type) * 8>() };
		uint64_t current_index{};
		run_benchmark_scaled<bench_stage_type, test_name, "lemire_digit_count", per_count_config, lemire_digit_count_type<count>>(current_index, random_integers, results_01);
		current_index = 0;
		run_benchmark_scaled<bench_stage_type, test_name, "rtc_digit_count", per_count_config, rtc_digit_count_type<count>>(current_index, random_integers, results_02);
		benchmarksuite::final_test_results results = bench_stage_type::get_test_results(test_name.operator std::string());
		results.print();
		if (results.sorted_results.size() > 0) {
			results_string += generate_section(test_name.operator std::string(), current_path.operator std::string() + "/" + stage_name.operator std::string());
			results_string += results.to_markdown(false, false);
			std::stringstream stream{};
			stream << "[";
			for (uint64_t x = 0; x < count; ++x) {
				stream << std::to_string(random_integers[x]);
				if (x < count - 1) {
					stream << ",";
				}
			}
			stream << "]";
			benchmarksuite::file_handle::save_file(results.to_csv(false),
				csv_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/" + test_name.operator std::string() + ".csv");
			benchmarksuite::file_handle::save_file(stream.str(),
				json_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/" + test_name.operator std::string() + ".json");
		}
	}

	template<benchmarksuite::string_literal stage_name_new, benchmarksuite::string_literal type_name, typename v_type> void test_function() {
		static constexpr auto stage_name{ stage_name_new + "-" + type_name };
		static constexpr benchmarksuite::string_literal digit_length{ benchmarksuite::internal::to_string_literal<max_decimal_digits<v_type>()>() };
		using benchmark_type = benchmarksuite::benchmark_stage<stage_name, config>;
		std::string results_string{};
		test_function<benchmark_type, 10, stage_name, type_name + "-integer_count[10]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 100, stage_name, type_name + "-integer_count[100]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 1000, stage_name, type_name + "-integer_count[1000]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 10000, stage_name, type_name + "-integer_count[10000]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 100000, stage_name, type_name + "-integer_count[100000]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		auto results = benchmark_type::get_all_results();
		std::string time_string{ benchmarksuite::get_time() };

		std::string header{ make_section00(stage_name.operator std::string(),
								static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::os_id),
								static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::os_version),
								static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::compiler_id),
								static_cast<std::string>(benchmarksuite::system_info_data<benchmarksuite::benchmark_types::cpu>::compiler_version)) +
			time_string + ")\n" + make_section01(benchmarksuite::internal::get_device_info<benchmarksuite::benchmark_types::cpu>()) };

		benchmarksuite::file_handle::save_file(header + results_string,
			base_path.operator std::string() + "/" + current_path.operator std::string() + "-" + stage_name.operator std::string() + ".md");
		benchmarksuite::file_handle::save_file(results.to_csv(), csv_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/Results.csv");
		benchmarksuite::execute_python_script(base_path.operator std::string() + "/GenerateGraphs.py",
			csv_out_path.operator std::string() + "/" + stage_name.operator std::string() + "/", graphs_out_path.operator std::string() + "/" + stage_name.operator std::string());
	}

}

int main() {
	benchmarksuite::pin_for_benchmark();
	rtc_digit_count::test_function<"digit-counting", "uint32_t", uint32_t>();
	rtc_digit_count::test_function<"digit-counting", "uint64_t", uint64_t>();
	return 0;
}

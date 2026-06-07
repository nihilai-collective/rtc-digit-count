// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Nihilai Collective Corp
#include <bnch_swt>
#include <rt-ut>
#include <random>
#include <string>
#include <numeric>

namespace rtc_digit_count {

#if defined(NDEBUG)
	static constexpr uint64_t max_iteration_count{ 1200 };
	static constexpr uint64_t measured_iteration_count{ 60 };
#else
	static constexpr uint64_t max_iteration_count{ 200 };
	static constexpr uint64_t measured_iteration_count{ 10 };
#endif

	static constexpr bnch_swt::stage_config_data config{ .clear_cpu_caches_before_iterations = true,
		.measured_iteration_count															 = measured_iteration_count,
		.max_iteration_count																 = max_iteration_count };

	template<typename value_type>
	concept uns32_t = std::unsigned_integral<value_type> && sizeof(value_type) == 4;

	template<typename value_type>
	concept uns64_t = std::unsigned_integral<value_type> && sizeof(value_type) == 8;

	template<typename value_type, uint64_t digits> consteval value_type max_value_for_digits() noexcept {
		value_type power = 1;
		for (value_type i = 0; i < digits; ++i) {
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

	template<typename value_type> value_type generate_integer(uint64_t digit_count, bnch_swt::random_generator<value_type>& rg) {
		switch (digit_count) {
			case 1: {
				return rg.impl(0, static_cast<value_type>(max_value_for_digits<value_type, 1>()));
			}
			case 2: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 1>()), static_cast<value_type>(max_value_for_digits<value_type, 2>()));
			}
			case 3: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 2>()), static_cast<value_type>(max_value_for_digits<value_type, 3>()));
			}
			case 4: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 3>()), static_cast<value_type>(max_value_for_digits<value_type, 4>()));
			}
			case 5: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 4>()), static_cast<value_type>(max_value_for_digits<value_type, 5>()));
			}
			case 6: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 5>()), static_cast<value_type>(max_value_for_digits<value_type, 6>()));
			}
			case 7: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 6>()), static_cast<value_type>(max_value_for_digits<value_type, 7>()));
			}
			case 8: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 7>()), static_cast<value_type>(max_value_for_digits<value_type, 8>()));
			}
			case 9: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 8>()), static_cast<value_type>(max_value_for_digits<value_type, 9>()));
			}
			case 10: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 9>()), static_cast<value_type>(max_value_for_digits<value_type, 10>()));
			}
			case 11: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 10>()), static_cast<value_type>(max_value_for_digits<value_type, 11>()));
			}
			case 12: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 11>()), static_cast<value_type>(max_value_for_digits<value_type, 12>()));
			}
			case 13: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 12>()), static_cast<value_type>(max_value_for_digits<value_type, 13>()));
			}
			case 14: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 13>()), static_cast<value_type>(max_value_for_digits<value_type, 14>()));
			}
			case 15: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 14>()), static_cast<value_type>(max_value_for_digits<value_type, 15>()));
			}
			case 16: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 15>()), static_cast<value_type>(max_value_for_digits<value_type, 16>()));
			}
			case 17: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 16>()), static_cast<value_type>(max_value_for_digits<value_type, 17>()));
			}
			case 18: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 17>()), static_cast<value_type>(max_value_for_digits<value_type, 18>()));
			}
			case 19: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 18>()), static_cast<value_type>(max_value_for_digits<value_type, 19>()));
			}
			default: {
				return rg.impl(static_cast<value_type>(max_value_for_digits<value_type, 19>()), static_cast<value_type>(max_value_for_digits<value_type, 20>()));
			}
		}
	}

	template<typename value_type, uint64_t count> std::vector<value_type> generate_random_integers(bnch_swt::random_generator<value_type>& rg) {
		std::vector<value_type> randomNumbers{};
		randomNumbers.resize(count);
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
		static constexpr uint32_t digitCounts_32[]{ 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1 };
		static constexpr uint32_t digitCountThresholds_32[]{ 0u, 9u, 99u, 999u, 9999u, 99999u, 999999u, 9999999u, 99999999u, 999999999u, 4294967295u };
		const uint32_t originalDigitCount{ digitCounts_32[std::countl_zero(inputValue)] };
		return originalDigitCount + static_cast<uint32_t>(inputValue > digitCountThresholds_32[originalDigitCount]);
	}

	template<uns64_t value_type> BNCH_SWT_HOST uint32_t rtc_digit_count(const value_type inputValue) {
		static constexpr uint32_t digitCounts[]{ 19, 19, 19, 19, 18, 18, 18, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 13, 12, 12, 12, 11, 11, 11, 10, 10, 10,
			10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1 };
		static constexpr uint64_t digitCountThresholds[]{ 0ull, 9ull, 99ull, 999ull, 9999ull, 99999ull, 999999ull, 9999999ull, 99999999ull, 999999999ull, 9999999999ull,
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

	BNCH_SWT_HOST int fast_digit_count(uint32_t x) {
		static constexpr uint32_t table[32] = {
			9ul,
			9ul,
			9ul,
			9ul,
			99ul,
			99ul,
			99ul,
			999ul,
			999ul,
			999ul,
			9999ul,
			9999ul,
			9999ul,
			9999ul,
			99999ul,
			99999ul,
			99999ul,
			999999ul,
			999999ul,
			999999ul,
			9999999ul,
			9999999ul,
			9999999ul,
			9999999ul,
			99999999ul,
			99999999ul,
			99999999ul,
			999999999ul,
			999999999ul,
			999999999ul,
			4294967295ul,
			4294967295ul,
		};
		unsigned log = int_log2(x);
		return ((77 * log) >> 8) + 1 + (x > table[log]);
	}

	BNCH_SWT_HOST int fast_digit_count(uint64_t x) {
		static constexpr uint64_t table[64] = {
			9ull,
			9ull,
			9ull,
			9ull,
			99ull,
			99ull,
			99ull,
			999ull,
			999ull,
			999ull,
			9999ull,
			9999ull,
			9999ull,
			9999ull,
			99999ull,
			99999ull,
			99999ull,
			999999ull,
			999999ull,
			999999ull,
			9999999ull,
			9999999ull,
			9999999ull,
			9999999ull,
			99999999ull,
			99999999ull,
			99999999ull,
			999999999ull,
			999999999ull,
			999999999ull,
			9999999999ull,
			9999999999ull,
			9999999999ull,
			9999999999ull,
			99999999999ull,
			99999999999ull,
			99999999999ull,
			999999999999ull,
			999999999999ull,
			999999999999ull,
			9999999999999ull,
			9999999999999ull,
			9999999999999ull,
			9999999999999ull,
			99999999999999ull,
			99999999999999ull,
			99999999999999ull,
			999999999999999ull,
			999999999999999ull,
			999999999999999ull,
			9999999999999999ull,
			9999999999999999ull,
			9999999999999999ull,
			9999999999999999ull,
			99999999999999999ull,
			99999999999999999ull,
			99999999999999999ull,
			999999999999999999ull,
			999999999999999999ull,
			999999999999999999ull,
			9999999999999999999ull,
			9999999999999999999ull,
			9999999999999999999ull,
			9999999999999999999ull,
		};
		unsigned log = int_log2(x);
		return ((77 * log) >> 8) + 1 + (x > table[log]);
	}

	template<uint64_t count> struct lemire_digit_count_type {
		template<typename integers_type, typename results_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, integers_type& random_integers_new, results_type& results_new) {
			auto& random_integers = random_integers_new[index];
			auto& results		  = results_new[index];
			using value_type	  = typename integers_type::value_type::value_type;
			value_type currentCount{};
			for (uint64_t x = 0; x < count; ++x) {
				results[x] = lemire_digit_count(random_integers[x]);
				currentCount += static_cast<value_type>(results[x]);
				bnch_swt::do_not_optimize_away(currentCount);
			}
			return currentCount;
		}
	};

	template<uint64_t count> struct fast_digit_count_type {
		template<typename integers_type, typename results_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, integers_type& random_integers_new, results_type& results_new) {
			auto& random_integers = random_integers_new[index];
			auto& results		  = results_new[index];
			using value_type	  = typename integers_type::value_type::value_type;
			value_type currentCount{};
			for (uint64_t x = 0; x < count; ++x) {
				results[x] = fast_digit_count(random_integers[x]);
				currentCount += static_cast<value_type>(results[x]);
				bnch_swt::do_not_optimize_away(currentCount);
			}
			return currentCount;
		}
	};

	template<uint64_t count> struct rtc_digit_count_type {
		template<typename integers_type, typename results_type, typename index_type>
		BNCH_SWT_HOST static uint64_t impl(index_type& index, integers_type& random_integers_new, results_type& results_new) {
			auto& random_integers = random_integers_new[index];
			auto& results		  = results_new[index];
			using value_type	  = typename integers_type::value_type::value_type;
			value_type currentCount{};
			for (uint64_t x = 0; x < count; ++x) {
				results[x] = rtc_digit_count(random_integers[x]);
				currentCount += static_cast<value_type>(results[x]);
				bnch_swt::do_not_optimize_away(currentCount);
			}
			return currentCount;
		}
	};

	inline static std::string current_path{ bnch_swt::get_current_path_impl() };
	inline static std::string base_path{ BASE_PATH };
	inline static std::string markdown_path{ base_path + "/Results" };
	inline static std::string csv_path{ base_path + "/csv" };
	inline static std::string json_path{ base_path + "/example-data" };
	inline static std::string graphs_path{ base_path + "/graphs/" };
	inline static std::string markdown_out_path{ markdown_path + "/" + current_path };
	inline static std::string csv_out_path{ csv_path + "/" + current_path };
	inline static std::string json_out_path{ json_path + "/" + current_path };
	inline static std::string graphs_out_path{ graphs_path + "/" + current_path };

	std::string make_section01(const auto& cpu_name) {
		std::stringstream stream{};
		stream << "\n> Adaptive sampling on (" << cpu_name << "): iterations begin at " << std::to_string(config.measured_iteration_count);
		stream << " and double each epoch (e.g. " << std::to_string(config.measured_iteration_count) << " → " << std::to_string(config.measured_iteration_count * 2) << " → "
			   << std::to_string(config.measured_iteration_count * 4) << " → ...) up to a maximum of " << std::to_string(config.max_iteration_count);
		stream << " iterations. Each epoch runs all iterations and evaluates a trailing window of "
			   << "max(iterations/10, " << std::to_string(config.min_k) << ") samples, capped at " << std::to_string(config.max_k) << ". Convergence requires RSE < "
			   << config.rse_threshold << "% AND mean shift < " << config.convergence_threshold << "% epoch-over-epoch simultaneously. ";
		stream << "The first epoch satisfying both conditions is retained as the canonical result. "
			   << "If convergence is never reached before " << config.max_time_in_s << " seconds elapse or the iteration cap is hit, the result is marked non-converged and "
			   << "excluded from all rankings — only converged results participate in win/tie/loss tallying. "
			   << "All results use Bessel-corrected variance and Welch's t-test for statistical tie detection.\n\n";
		stream << "#### Note:\n  These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/realtimechris/benchmarksuite).\n  ";
		return stream.str();
	}

	std::string make_commit_row(std::string_view label, std::string_view org_repo, std::string_view commit) {
		return std::string("| ") + std::string(label) + ": [" + std::string(commit) + "](https://github.com/" + std::string(org_repo) + "/commit/" + std::string(commit) + ")  \n";
	}

	std::string make_section00(const std::string_view& stage_name, const std::string_view& os_id, const std::string_view& os_version, const std::string_view& compiler_id,
		const std::string_view& compiler_version) {
		return std::string(std::string{ "# " } + std::string(stage_name) + "  \n----\n\nPerformance profiling of libraries (Compiled and run on ") + std::string(os_id) + " " +
			std::string(os_version) + " using the " + std::string(compiler_id) + " " + std::string(compiler_version) + " compiler).  \n\nLatest Results: (";
	}

	std::string generate_section(const auto& test_name_new, const auto& current_path_new) {
		std::string test_name{ static_cast<std::string>(test_name_new) };
		std::string current_path{ static_cast<std::string>(current_path_new) };
		std::string encoded = bnch_swt::url_encode(test_name);

		return "\n----\n### " + test_name +
			" Results \n\n"
			"<p align=\"left\"><a href=\"./graphs/" +
			current_path + "/" + encoded +
			"-Results.png\" target=\"_blank\">"
			"<img src=\"./graphs/" +
			current_path + "/" + encoded +
			"-Results.png?raw=true\" \n"
			"alt=\"\" width=\"400\"/></p>\n\n";
	}

	template<typename bench_stage_type, uint64_t count, bnch_swt::string_literal stage_name, bnch_swt::string_literal test_name, typename value_type>
	void test_function(std::string& results_string) {
		std::vector<std::vector<value_type>> random_integers{ max_iteration_count };
		std::vector<std::vector<uint64_t>> counts{ max_iteration_count };
		std::vector<std::vector<value_type>> results_01{ max_iteration_count };
		std::vector<std::vector<value_type>> results_02{ max_iteration_count };
		std::vector<std::vector<value_type>> results_03{ max_iteration_count };
		bnch_swt::random_generator<value_type> rg{};
		for (uint64_t x = 0; x < max_iteration_count; ++x) {
			random_integers[x] = generate_random_integers<value_type, count>(rg);
			counts[x].resize(count);
			results_01[x].resize(count);
			results_02[x].resize(count);
			results_03[x].resize(count);
		}
		for (uint64_t x = 0; x < max_iteration_count; ++x) {
			for (uint64_t y = 0; y < count; ++y) {
				counts[x][y]	 = std::to_string(random_integers[x][y]).length();
				results_01[x][y] = lemire_digit_count(random_integers[x][y]);
				results_02[x][y] = fast_digit_count(random_integers[x][y]);
				results_03[x][y] = rtc_digit_count(random_integers[x][y]);
			}
		}

		rt_ut::unit_test<"lemire-digit-count">::assert_eq(true, [&] {
			for (uint64_t x = 0; x < max_iteration_count; ++x) {
				for (uint64_t y = 0; y < count; ++y) {
					if (results_01[x][y] != counts[x][y]) {
						std::cout << "lemire-digit-count-" << sizeof(value_type) * 8 << " failed to count the integers of value : " << random_integers[x][y]
								  << ",instead it counted : " << results_01[x][y] << ", when it should be: " << counts[x][y] << std::endl;
						return false;
					}
				}
			}
			return true;
		});

		rt_ut::unit_test<"fast-digit-count">::assert_eq(true, [&] {
			for (uint64_t x = 0; x < max_iteration_count; ++x) {
				for (uint64_t y = 0; y < count; ++y) {
					if (results_02[x][y] != counts[x][y]) {
						std::cout << "fast-digit-count-" << sizeof(value_type) * 8 << " failed to count the integers of value : " << random_integers[x][y]
								  << ",instead it counted : " << results_02[x][y] << ", when it should be: " << counts[x][y] << std::endl;
						return false;
					}
				}
			}
			return true;
		});

		rt_ut::unit_test<"rtc-digit-count">::assert_eq(true, [&] {
			for (uint64_t x = 0; x < max_iteration_count; ++x) {
				for (uint64_t y = 0; y < count; ++y) {
					if (results_03[x][y] != counts[x][y]) {
						std::cout << "rtc-digit-count-" << sizeof(value_type) * 8 << " failed to count the integers of value : " << random_integers[x][y]
								  << ",instead it counted : " << results_03[x][y] << ", when it should be: " << counts[x][y] << std::endl;
						return false;
					}
				}
			}
			return true;
		});

		static constexpr bnch_swt::string_literal bit_size{ bnch_swt::internal::to_string_literal<sizeof(value_type) * 8>() };
		uint64_t current_index{};
		bench_stage_type::template run_benchmark<test_name, "lemire_digit_count", lemire_digit_count_type<count>>(current_index, random_integers, results_01);
		current_index = 0;
		bench_stage_type::template run_benchmark<test_name, "fast_digit_count", fast_digit_count_type<count>>(current_index, random_integers, results_02);
		current_index = 0;
		bench_stage_type::template run_benchmark<test_name, "rtc_digit_count", rtc_digit_count_type<count>>(current_index, random_integers, results_02);
		bnch_swt::final_test_results results = bench_stage_type::get_test_results(test_name.operator std::string());
		results.print();
		if (results.sorted_results.size() > 0) {
			results_string += generate_section(test_name.operator std::string(), current_path + "/" + std::string{ stage_name });
			results_string += results.to_markdown(false, false);
			std::stringstream stream{};
			stream << "[";
			for (uint64_t x = 0; x < count; ++x) {
				stream << std::to_string(random_integers[0][x]);
				if (x < count - 1) {
					stream << ",";
				}
			}
			stream << "]";
			bnch_swt::file_handle::save_file(results.to_csv(false), csv_out_path + "/" + std::string{ stage_name } + "/" + test_name.operator std::string() + ".csv");
			bnch_swt::file_handle::save_file(stream.str(), json_out_path + "/" + std::string{ stage_name } + "/" + test_name.operator std::string() + ".json");
		}
	}

	template<bnch_swt::string_literal stage_name_new, bnch_swt::string_literal type_name, typename v_type> void test_function() {
		static constexpr auto stage_name{ stage_name_new + "-" + type_name };
		static constexpr bnch_swt::string_literal digit_length{ bnch_swt::internal::to_string_literal<max_decimal_digits<v_type>()>() };
		using benchmark_type = bnch_swt::benchmark_stage<stage_name, config>;
		std::string results_string{};
		test_function<benchmark_type, 100000, stage_name, type_name + "-integer_count[100000]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 10000, stage_name, type_name + "-integer_count[10000]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 1000, stage_name, type_name + "-integer_count[1000]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 100, stage_name, type_name + "-integer_count[100]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 10, stage_name, type_name + "-integer_count[10]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		test_function<benchmark_type, 1, stage_name, type_name + "-integer_count[1]-digit_length[0-" + digit_length + "]", v_type>(results_string);
		auto results = benchmark_type::get_all_results();
		std::string time_string{ bnch_swt::get_time() };

		std::string header{ make_section00(stage_name.operator std::string(), bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::os_id,
								bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::os_version, bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::compiler_id,
								bnch_swt::system_info_data<bnch_swt::benchmark_types::cpu>::compiler_version) +
			time_string + ")\n" + static_cast<std::string>(make_section01(bnch_swt::internal::get_device_info<bnch_swt::benchmark_types::cpu>())) };

		bnch_swt::file_handle::save_file(header + results_string, base_path + "/" + current_path + "-" + stage_name.operator std::string() + ".md");
		bnch_swt::file_handle::save_file(results.to_csv(), csv_out_path + "/" + stage_name.operator std::string() + "/Results.csv");
		bnch_swt::execute_python_script(std::string{ base_path } + "/GenerateGraphs.py", csv_out_path + "/" + stage_name.operator std::string() + "/",
			graphs_out_path + "/" + stage_name.operator std::string());
	}

}

int main() {
	rtc_digit_count::test_function<"digit-counting", "uint32_t", uint32_t>();
	rtc_digit_count::test_function<"digit-counting", "uint64_t", uint64_t>();
	return 0;
}
#ifndef STATIC_RANGES_H
#define STATIC_RANGES_H

#include <cstddef>
#include <string>
#include <utility>

namespace static_ranges {
	template <typename T> struct range_traits;
	template <typename T> struct view_base;

	template <typename TRange>
	struct range {
		
	};

	template <typename ...vals>
	struct typeSequence {};

	template <typename TRange, size_t index>
	struct typeSequence {
		using 
	};

	template <typename TRange>
	struct view : view_base<TRange> {

	};

	template <typename T>
	static constexpr std::size_t size_v = range_traits<T>::value;

	template <size_t index>
	decltype(auto) element(range<> T) {
		return range_traits<T>::value;
	}

	namespace views {

	};
};

#endif
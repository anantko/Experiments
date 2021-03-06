# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef CPPCMS_BOOST_PREPROCESSOR_SEQ_REMOVE_HPP
# define CPPCMS_BOOST_PREPROCESSOR_SEQ_REMOVE_HPP
#
# include <cppcms_boost/preprocessor/arithmetic/inc.hpp>
# include <cppcms_boost/preprocessor/config/config.hpp>
# include <cppcms_boost/preprocessor/seq/first_n.hpp>
# include <cppcms_boost/preprocessor/seq/rest_n.hpp>
#
# /* BOOST_PP_SEQ_REMOVE */
#
# if ~CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_EDG()
#    define CPPCMS_BOOST_PP_SEQ_REMOVE(seq, i) CPPCMS_BOOST_PP_SEQ_FIRST_N(i, seq) CPPCMS_BOOST_PP_SEQ_REST_N(CPPCMS_BOOST_PP_INC(i), seq)
# else
#    define CPPCMS_BOOST_PP_SEQ_REMOVE(seq, i) CPPCMS_BOOST_PP_SEQ_REMOVE_I(seq, i)
#    define CPPCMS_BOOST_PP_SEQ_REMOVE_I(seq, i) CPPCMS_BOOST_PP_SEQ_FIRST_N(i, seq) CPPCMS_BOOST_PP_SEQ_REST_N(CPPCMS_BOOST_PP_INC(i), seq)
# endif
#
# endif

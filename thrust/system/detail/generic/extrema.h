/*
 *  Copyright 2008-2012 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


/*! \file extrema.h
 *  \brief Generic device implementations of extrema functions.
 */

#pragma once

#include <thrust/detail/config.h>
#include <thrust/pair.h>
#include <thrust/system/detail/generic/tag.h>

namespace thrust
{
namespace system
{
namespace detail
{
namespace generic
{

template <typename ForwardIterator>
ForwardIterator max_element(tag,
                            ForwardIterator first,
                            ForwardIterator last);

template <typename ForwardIterator, typename BinaryPredicate>
ForwardIterator max_element(tag,
                            ForwardIterator first,
                            ForwardIterator last,
                            BinaryPredicate comp);

template <typename ForwardIterator>
ForwardIterator min_element(tag,
                            ForwardIterator first,
                            ForwardIterator last);

template <typename ForwardIterator, typename BinaryPredicate>
ForwardIterator min_element(tag,
                            ForwardIterator first,
                            ForwardIterator last,
                            BinaryPredicate comp);

template <typename ForwardIterator>
thrust::pair<ForwardIterator,ForwardIterator> minmax_element(tag,
                                                             ForwardIterator first, 
                                                             ForwardIterator last);

template <typename ForwardIterator, typename BinaryPredicate>
thrust::pair<ForwardIterator,ForwardIterator> minmax_element(tag,
                                                             ForwardIterator first, 
                                                             ForwardIterator last,
                                                             BinaryPredicate comp);

} // end namespace generic
} // end namespace detail
} // end namespace system
} // end namespace thrust

#include <thrust/system/detail/generic/extrema.inl>

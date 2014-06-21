/**
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */
#ifndef __OPENPAL_STATIC_SIZE_CONFIGURATION_
#define __OPENPAL_STATIC_SIZE_CONFIGURATION_


#include <cstdint>

// Default configurations for static sizes. 
// They are liberally set by default for x64 
// but can be reduced for embedded systems.

#ifndef OPENPAL_MACRO_MAX_FUNCTION_ZERO_SIZE
#define OPENPAL_MACRO_MAX_FUNCTION_ZERO_SIZE 128
#endif

#ifndef OPENPAL_MACRO_MAX_FUNCTION_ONE_SIZE
#define OPENPAL_MACRO_MAX_FUNCTION_ONE_SIZE 128
#endif

namespace openpal
{
namespace sizes
{

static const uint16_t MAX_FUNCTION_ZERO_SIZE = OPENPAL_MACRO_MAX_FUNCTION_ZERO_SIZE;

static const uint16_t MAX_FUNCTION_ONE_SIZE = OPENPAL_MACRO_MAX_FUNCTION_ONE_SIZE;

}
}

#endif
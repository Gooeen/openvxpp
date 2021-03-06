/*************************************************************************
* Copyright (c) 2016, Gooeen.  All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*************************************************************************/
#ifndef __OPENVX_CPP_CONSTRUCTOR_H__
#define __OPENVX_CPP_CONSTRUCTOR_H__

#include "common.h"

namespace ovx
{
	class openvxdll constructor
	{
	public:
		constructor(void) noexcept;
		constructor(const constructor &) = delete;
		constructor(constructor &&) = delete;

		void operator=(const constructor &) = delete;
		void operator=(constructor &&) noexcept = delete;

		virtual ~constructor(void) noexcept = default;

		vx_image data(void) const noexcept;

	protected:
		vx_image m_image;
	};
}

#endif // !__OPENVX_CPP_CONSTRUCTOR_H__


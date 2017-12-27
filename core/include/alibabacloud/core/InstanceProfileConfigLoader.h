/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CORE_INSTANCEPROFILECONFIGLOADER_H_
#define ALIBABACLOUD_CORE_INSTANCEPROFILECONFIGLOADER_H_

#include <chrono>
#include <map>
#include <string>
#include "Profile.h"

namespace AlibabaCloud
{
	class InstanceProfileConfigLoader
	{
	public:
		InstanceProfileConfigLoader();
		virtual ~InstanceProfileConfigLoader();

		bool load();
		bool persistProfiles(const std::map<std::string, Profile>& profiles);
		
		std::map<std::string, Profile> allProfiles() const;
		std::chrono::system_clock::time_point lastLoadTime() const;

	protected:
		virtual bool loadInternal() = 0;
		virtual bool persistInternal(const std::map<std::string, Profile>&);

		std::map<std::string, Profile> profiles_;
		std::chrono::system_clock::time_point lastLoadTime_;
	};
}
#endif // !ALIBABACLOUD_CORE_INSTANCEPROFILECONFIGLOADER_H_

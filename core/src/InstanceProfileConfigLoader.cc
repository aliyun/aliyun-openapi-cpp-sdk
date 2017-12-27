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

#include <alibabacloud/core/InstanceProfileConfigLoader.h>

using namespace AlibabaCloud;

InstanceProfileConfigLoader::InstanceProfileConfigLoader()
{
}

InstanceProfileConfigLoader::~InstanceProfileConfigLoader()
{
}

std::map<std::string, Profile> InstanceProfileConfigLoader::allProfiles() const
{
	return profiles_; 
}

std::chrono::system_clock::time_point InstanceProfileConfigLoader::lastLoadTime() const 
{
	return lastLoadTime_; 
}

bool InstanceProfileConfigLoader::persistInternal(const std::map<std::string, Profile>&) 
{ 
	return false;
}

bool InstanceProfileConfigLoader::load()
{
	if (loadInternal())
	{
		lastLoadTime_ = std::chrono::system_clock::now();
		return true;
	}

	return false;
}

bool InstanceProfileConfigLoader::persistProfiles(const std::map<std::string, Profile>& profiles)
{
	if (persistInternal(profiles))
	{
		profiles_ = profiles;
		lastLoadTime_ = std::chrono::system_clock::now();
		return true;
	}

	return false;
}

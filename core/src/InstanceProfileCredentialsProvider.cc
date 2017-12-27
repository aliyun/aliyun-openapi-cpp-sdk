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

#include <alibabacloud/core/InstanceProfileCredentialsProvider.h>
#include <alibabacloud/core/EcsInstanceProfileConfigLoader.h>
#include <alibabacloud/core/Profile.h>
#include <chrono>
#include <iomanip>
#include <chrono>
#include <mutex>

using namespace AlibabaCloud;

namespace
{
	const char* const INSTANCE_PROFILE_KEY = "InstanceProfile";
}

InstanceProfileCredentialsProvider::InstanceProfileCredentialsProvider(size_t refreshRateMs) :
	metadataConfigLoader_(std::make_shared<EcsInstanceProfileConfigLoader>()),
	loadFrequencyMs_(refreshRateMs),
	lastLoaded_()
{
}

InstanceProfileCredentialsProvider::InstanceProfileCredentialsProvider(const std::shared_ptr<EcsInstanceProfileConfigLoader>& loader, size_t refreshRateMs) :
	metadataConfigLoader_(loader),
	loadFrequencyMs_(refreshRateMs),
	lastLoaded_()
{
}

Credentials InstanceProfileCredentialsProvider::getCredentials()
{
	refreshIfExpired();

	auto profileIter = metadataConfigLoader_->allProfiles().find(INSTANCE_PROFILE_KEY);
	if (profileIter != metadataConfigLoader_->allProfiles().end())
	{
		return profileIter->second.credentials();
	}

	return Credentials("","");
}

bool InstanceProfileCredentialsProvider::isTimeToRefresh(long reloadFrequency)
{
	auto now = std::chrono::system_clock::now();
	auto diff = std::chrono::duration_cast<std::chrono::seconds>(now - lastLoaded_).count();
	
	if(diff > reloadFrequency)
	{
		lastLoaded_ = now;
		return true;
	}

	return false;
}

void InstanceProfileCredentialsProvider::refreshIfExpired()
{
	std::lock_guard<std::mutex> locker(m_reloadMutex);
	if (isTimeToRefresh(loadFrequencyMs_))
		metadataConfigLoader_->load();	
}

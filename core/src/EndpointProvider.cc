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

#include <alibabacloud/core/EndpointProvider.h>
#include <iomanip>
#include <sstream>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;

EndpointProvider::EndpointProvider(const std::shared_ptr<Location::LocationClient>& locationClient, const std::string regionId, const std::string serviceCode, int durationSeconds) :
	locationClient_(locationClient),
	regionId_(regionId),
	serviceCode_(serviceCode),
	durationSeconds_(durationSeconds),
	cachedMutex_(),
	cachedEndpoint_(),
	expiry_()
{
}

EndpointProvider::~EndpointProvider()
{
}

bool EndpointProvider::checkExpiry()const
{
	auto now = std::chrono::system_clock::now();
	auto diff = std::chrono::duration_cast<std::chrono::seconds>(now - expiry_).count();

	return (diff > 0 - 60);
}

std::string EndpointProvider::getEndpoint()
{
	loadEndpoint();
	std::lock_guard<std::mutex> locker(cachedMutex_);
	return cachedEndpoint_;
}

void EndpointProvider::loadEndpoint()
{
	if (checkExpiry())
	{
		std::lock_guard<std::mutex> locker(cachedMutex_);
		if (checkExpiry())
		{
			Model::DescribeEndpointsRequest request;
			request.setId(regionId_);
			request.setServiceCode(serviceCode_);
			request.setType("openAPI");
			auto outcome = locationClient_->describeEndpoints(request);
			if (outcome.isSuccess())
			{
				auto all = outcome.result().endpoints();
				if (all.size() > 0)
					cachedEndpoint_ = all.front().endpoint;

				std::time_t t = std::time(nullptr) + durationSeconds_;
				expiry_ = std::chrono::system_clock::from_time_t(t);
			}
		}
	}
}
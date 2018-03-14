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

#ifndef ALIBABACLOUD_CORE_ENDPOINTPROVIDER_H_
#define ALIBABACLOUD_CORE_ENDPOINTPROVIDER_H_

#include <string>
#include <chrono>
#include <list>
#include <map>
#include <mutex>
#include <alibabacloud/core/location/LocationClient.h>
#include <alibabacloud/core/CoreClient.h>

namespace AlibabaCloud
{
	class ALIBABACLOUD_CORE_EXPORT EndpointProvider
	{
	public:
		typedef Outcome<Error, std::string> EndpointOutcome;

		EndpointProvider(const std::shared_ptr<Location::LocationClient>& locationClient,
			const std::string regionId,
			const std::string product,
			const std::string serviceCode = std::string(),
			int durationSeconds = 3600);
		~EndpointProvider();

		EndpointOutcome getEndpoint();
	private:
		struct Product
		{
			std::string code;
			std::string locationServiceCode;
			std::string documentId;
			std::map<std::string, std::string> regionalEndpoints;
			std::string globalEndpoint;
			std::string regionalEndpointPattern;
		};

		EndpointOutcome loadRemoteEndpoint();
		bool checkExpiry()const;
		bool loadInternalProductsInfo();
		std::string internalEndpoint(const std::string regionId, const std::string product);

		std::mutex cachedMutex_;
		std::string cachedEndpoint_;
		std::shared_ptr<Location::LocationClient> locationClient_;
		int durationSeconds_;
		std::chrono::system_clock::time_point expiry_;
		std::string regionId_;
		std::string product_;
		std::string serviceCode_;
		std::list<Product> internalProductsInfo_;
	};
}
#endif
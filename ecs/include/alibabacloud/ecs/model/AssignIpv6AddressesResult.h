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

#ifndef ALIBABACLOUD_ECS_MODEL_ASSIGNIPV6ADDRESSESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_ASSIGNIPV6ADDRESSESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT AssignIpv6AddressesResult : public ServiceResult
			{
			public:


				AssignIpv6AddressesResult();
				explicit AssignIpv6AddressesResult(const std::string &payload);
				~AssignIpv6AddressesResult();
				std::vector<std::string> getIpv6Sets()const;
				std::vector<std::string> getIpv6PrefixSets()const;
				std::string getNetworkInterfaceId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> ipv6Sets_;
				std::vector<std::string> ipv6PrefixSets_;
				std::string networkInterfaceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_ASSIGNIPV6ADDRESSESRESULT_H_
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

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_LISTINSTANCESRESULT_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_LISTINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/amqp-open/Amqp_openExport.h>

namespace AlibabaCloud
{
	namespace Amqp_open
	{
		namespace Model
		{
			class ALIBABACLOUD_AMQP_OPEN_EXPORT ListInstancesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct InstanceVO
					{
						struct TagsItem
						{
							std::string value;
							std::string key;
						};
						std::string status;
						int maxTps;
						int maxEipTps;
						std::string classicEndpoint;
						std::string instanceId;
						int maxQueue;
						bool supportEIP;
						int storageSize;
						std::string instanceName;
						long orderCreateTime;
						int maxVhost;
						std::string orderType;
						std::string publicEndpoint;
						long expireTime;
						std::string instanceType;
						bool autoRenewInstance;
						std::string privateEndpoint;
						std::vector<InstanceVO::TagsItem> tags;
					};
					std::vector<InstanceVO> instances;
					std::string nextToken;
					int maxResults;
				};


				ListInstancesResult();
				explicit ListInstancesResult(const std::string &payload);
				~ListInstancesResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_LISTINSTANCESRESULT_H_
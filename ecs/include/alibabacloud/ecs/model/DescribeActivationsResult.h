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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEACTIVATIONSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEACTIVATIONSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeActivationsResult : public ServiceResult
			{
			public:
				struct Activation
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string instanceName;
					int deregisteredCount;
					int instanceCount;
					std::string description;
					std::string resourceGroupId;
					std::string creationTime;
					std::string activationId;
					int registeredCount;
					long timeToLiveInHours;
					bool disabled;
					std::string ipAddressRange;
					std::vector<Activation::Tag> tags;
				};


				DescribeActivationsResult();
				explicit DescribeActivationsResult(const std::string &payload);
				~DescribeActivationsResult();
				long getTotalCount()const;
				long getPageSize()const;
				std::string getNextToken()const;
				long getPageNumber()const;
				std::vector<Activation> getActivationList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				std::string nextToken_;
				long pageNumber_;
				std::vector<Activation> activationList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEACTIVATIONSRESULT_H_